#include <bits/stdc++.h>
using namespace std;

int main(){
    //方針:5つずつかけて7で割るをforで繰り返す
    int N,P,Q;
    int product = 1;
    int cases = 0;
    cin >> N >> P >> Q;
    vector<int> A(N);

    for (int i = 0; i < N; i++){
        shuffle(A.begin(), A.end(), mt19937(random_device{}()));
        for (int j = 0; j < 5; j++) {
            product *= A[j];
        }
        if (product % P == Q){
            cases++;
        }
        product = 1;
    }
    cout << cases << endl;

}