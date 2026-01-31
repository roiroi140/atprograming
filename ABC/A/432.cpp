#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main()
{
    /*Q;1 以上 9 以下の数字 A,B,C が与えられます。
    A,B,C を好きな順番で並べて繋げることで作れる 3 桁の整数のうち、値が最大のものを求めてください。*/
    // 方針;配列でabcを受け取ってmax*100,真ん中*10,min*1を足す
    int total = 0;
    vector<int> vec(3, 0);
    for(int i = 0; i < 3; i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    total = vec[0]*100 + vec[1]*10 + vec[2];
    cout << total << endl;
}