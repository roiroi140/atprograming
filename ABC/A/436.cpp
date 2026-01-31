#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Q;整数 N および、英小文字からなる長さが N 未満 の文字列 S が与えられます。
    長さが N になるまで S の先頭に英小文字 o を追加し続けることで得られる文字列を出力してください。*/
    int N;
    string S;
    cin >> N >> S;
    while(S.size() < N){
        S.insert(0, "o");
    }
    cout << S << endl;
}