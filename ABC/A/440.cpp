#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    /*Q.音の高さが 1 オクターヴ上がるごとに、音の周波数は 2 倍になります。
    周波数 Xヘルツの音の高さを Yオクターヴ上げると、その周波数は何ヘルツになりますか？*/
    int X,Y;
    int temp;
    cin >> X >> Y;
    temp = pow(Y, Y);
    cout << X * temp << endl;
}