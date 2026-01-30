#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    /* Q:整数 N が与えられるので、n^N − 2N の値を計算して出力してください*/
    int N;
    int temp;
    cin >> N;
    temp = pow(2, N);
    cout << temp - N * 2 << endl;
}