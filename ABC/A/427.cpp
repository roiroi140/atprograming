#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Q;英大文字からなる文字列 S が与えられます。ここで、S の長さは奇数です。
    S の中央の文字を削除して得られる文字列を出力してください。ただし、S の中央の文字とは S の長さを L として S の L+1/2文字目の文字を指します。*/

    string S;
    cin >> S;

    S.erase((S.size()) / 2, 1);
    cout << S << endl;
}