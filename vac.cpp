#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int h, w;
    cin >> h >> w;
    for(int i = 0; i < w + 2; i++) {
        cout << "#";
    }
    cout << endl;
    for(int i = 0; i < h; i++) {
        string s;
        cin >> s;
        cout << "#" << s << "#" << endl;
    }
    for(int i = 0; i < w + 2; i++) {
        cout << "#";
    }
    cout << endl;
    return 0;
}
