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
File        : dcp_1
Created on  : Fri Apr 29 10:48:16 PM IST 2022
Question    : This problem was recently asked by Google.
            Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
            For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

#include <bits/stdc++.h>
#include <ios>
#include <vector>
using namespace std;

#define ll long long

bool sol(vector<int> &arr, int k) {
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size()-1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == k)
            return true;
        if (sum < k) 
            left++;
        else if (sum > k)
            right--;
    }
    return false;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> arr = {10, 15, 3, 7};
    int target = 17;
    bool ans = sol(arr, target);
    if (ans)
        cout << "given sum exists\n";
    else 
        cout << "given sum does not exists\n";
    return 0;
}
