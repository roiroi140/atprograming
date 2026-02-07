#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Q;高橋君の住む AtCoder 国には「飴を A 個以上所持している人はクッキーを B 個以上所持していなければならない」という奇妙な法律があります。
    高橋君は飴を C 個、クッキーを D 個所持しています。高橋君がこの法律に違反しているかどうか判定してください。*/
    //C >= AかつB <= DのときにNo
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    if (A <= C && B <= D || A > C){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
}