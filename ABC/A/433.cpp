#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Q;(X+i)/(Y+i)=Zならyesを出力*/
    int x,y,z;
    cin >> x >> y >> z;
    for (int i = 0; i <= 100; i++){
        if(x == y*z){
            cout << "Yes" << endl;
            return 0;
        }
        x++; y++;
    }
    cout << "No" << endl;
}