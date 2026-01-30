#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<string> used;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        if (used.count(s) == 0) {
            cout << i + 1 << endl;
            used.insert(s);
        }
    }
}
