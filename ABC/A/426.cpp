#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*ある OS のバージョンは古い順に "Ocelot", "Serval", "Lynx" です。
バージョン X がバージョン Y 以降のバージョンであるか判定してください。
なお、バージョン X 自身もバージョン X 以降のバージョンであるものとします。*/
    string X, Y;
    int Xver, Yver;
    cin >> X >> Y;
    vector<string> ver;
    ver = {"Ocelot", "Serval", "Lynx"};
    for (int i = 0; i < ver.size(); i++){
        if (ver[i] == Y){
            Yver = i;
        }
        if (ver[i] == X){
            Xver = i;
        }
    }
    if (Xver >= Yver){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}