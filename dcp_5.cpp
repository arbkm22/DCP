/*
      .                                                      .
        .n                   .                 .                  n.
  .   .dP                  dP                   9b                 9b.    .
 4    qXb         .       dX                     Xb       .        dXp     t
dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb
9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP
 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP
  '9XXXXXXXXXXXXXXXXXXXXX'~   ~'OOO8b   d8OOO'~   ~'XXXXXXXXXXXXXXXXXXXXXP'
    '9XXXXXXXXXXXP' '9XX'   DIE    '98v8P'  HUMAN   'XXP' '9XXXXXXXXXXXP'
        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~
                        )b.  .dbo.dP''v''9b.odb.  .dX(
                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb.
                     dXXXXXXXXXXXP'   .   '9XXXXXXXXXXXb
                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb
                    9XXb'   'XXXXXb.dX|Xb.dXXXXX'   'dXXP
                     ''      9XXXXXX(   )XXXXXXP      ''
                              XXXX X.'v'.X XXXX
                              XP^X''b   d''X^XX
                              X. 9  '   '  P )X
                              'b  '       '  d'
                               '             '
 
Author      : hellking
File        : dcp_5
Created on  : Wed May  4 10:26:59 PM IST 2022
Question    : This problem was asked by Google.

            An XOR linked list is a more memory efficient doubly linked list. Instead of each node holding next and prev fields, it holds a field named both, 
            which is an XOR of the next node and the previous node. Implement an XOR linked list; it has an add(element) which adds the element to the end, 
            and a get(index) which returns the node at index.

            If using a language that has no pointers (such as Python), you can assume you have access to get_pointer and dereference_pointer functions 
            that converts between nodes and memory addresses.
*/

#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

#define ll long long

class Node {
    public:
        int data;
        Node* both;
};

Node* head;

Node* Xor(Node* x, Node* y) {
    return reinterpret_cast<Node*>(
        reinterpret_cast<uintptr_t>(x) ^ reinterpret_cast<uintptr_t>(y)
    );
}

void add(int val) {
    Node* temp = new Node();
    temp->data = val;
    temp->both = NULL;
    Node* last = head;
    if (head == NULL) {
        head = temp;
        return;
    }
    while (last->both != NULL)
        last = last->both;
    last->both = temp;
    return;
}

// returns the element at i-1th position
int get(int index) {
    Node* temp = head;
    for (int i=0; i<index-1; i++) 
        temp = temp->both;
    return temp->data;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    add(5);
    add(10);
    add(15);
    int v1 = get(1);
    int v2 = get(2);
    int v3 = get(3);
    cout << "1st item: " << v1 << endl;
    cout << "2nd item: " << v2 << endl;
    cout << "3rd item: " << v3 << endl;


    return 0;
}
