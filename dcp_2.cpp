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
File        : dcp_2
Created on  : Sun May  1 10:03:35 AM IST 2022
Question    : This problem was asked by Uber.
            Given an array of integers, return a new array such that each element at index i of the new array is the product
            of all the numbers in the original array except the one at i.
            For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input 
            was [3, 2, 1], the expected output would be [2, 3, 6].
            Follow-up: what if you can't use division? 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Not optimised.
// Time complexity = O(n)
void solve(vector<int> &arr) {
    vector<int> ans;
    int product = 1;
    for (int i=0; i<arr.size(); i++) 
        product *= arr[i];
    for (int i=0; i<arr.size(); i++) {
        int pb = product/arr[i];
        ans.push_back(pb);
    }
    for (auto &x: ans)
        cout << x << " ";
    cout << endl;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> arr = {3, 2, 1};
    solve(arr);

    return 0;
}
