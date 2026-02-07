#include <bits/stdc++.h>
using namespace std;

int main(){
    //不定方程式
    int A, B, target_num;
    cin >> A >> B >> target_num;
    int nA = target_num / A;
    int nB = target_num / B;
    for(int i = 0; i < nA; i++){
        for (int j = 0; j < nB; j++){
            if(A * i + B * j == target_num){
                cout << "Aを" << i << "列" << "Bを" << j <<"列" << endl;
            }
        }
        return 0;
    }
    cout << "存在しないよー" << endl;
}