#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Q;正整数 N,M が与えられます。N 行出力してください。
        i 行目 (1≤i≤N) には、i≤M のとき OK を、 そうでないとき、Too Many Requests を出力してください。*/
    int N,M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++){
        if (i <= M){
            cout << "OK" << endl;
            continue;
        }
        cout << "Too Many Requests" << endl;
    }
}