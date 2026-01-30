#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int dots = 0;
    for (int i = 0; i < S.size(); i++){
        if (S.at(i) == 'i' || S.at(i) == 'j'){
            dots++;
        }
    }
    cout << dots << endl;
}