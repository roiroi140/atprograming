#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Q;高橋君は学校でゲームを楽しんでいます。チャイムが鳴ると同時にゲームが開始します。
    高橋君はチャイムが鳴った直後から、以下の動作を繰り返し行います。
    毎秒 S メートルの速さで A 秒間走る。その後の B 秒間は静止する。チャイムが鳴ってから X 秒が経過するまでに、高橋君は合計何メートル走りますか？*/
    int S,A,B,X;
    cin >> S >> A >> B >> X;
    int distance = 0;
    int count = X / (A + B);
    for (int i = 0; i < count; i++){
        distance += S * A;
    }
    if (X % (A + B) <= A){
        distance += X % (A + B) * S;
    }
    else {
        distance += A * S;
    }
    cout << distance << endl;
}