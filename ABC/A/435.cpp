#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Q;正整数 N が与えられます。1 以上 N 以下の整数をすべて足し合わせた値 1+2+⋯+N を出力してください。*/
    int N;
    cin >> N;
    int temp = N;
    for (int i = 0; i < N; i++){
        temp += N - i;
    }
    temp -= N;
    cout << temp << endl;
}