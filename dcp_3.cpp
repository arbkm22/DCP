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
File        : dcp_3
Created on  : Mon May  2 10:32:33 PM IST 2022
Question    : This problem was asked by Stripe.
            Given an array of integers, find the first missing positive integer in linear time and constant space. 
            In other words, find the lowest positive integer that does not exist in the array. The array can contain
            duplicates and negative numbers as well.
            For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.
            You can modify the input array in-place.
*/

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ll long long

int solve(vector<int> &arr) {
    int ans = 1;
    sort(arr.begin(), arr.end());
    for (auto &x: arr) {
        if (x == ans)
            ans++;
    }
    return ans;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> arr = {1, 2, 0};
    int ans = solve(arr);
    cout << ans << endl;

    return 0;
}
