#include <bits/stdc++.h>
using namespace std;

int main(){
    int P,Q,X,Y;
    cin >> P >> Q >> X >> Y;
    if (P <= X && X <= P + 100 && Q <= Y && Y <= Q + 100){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}