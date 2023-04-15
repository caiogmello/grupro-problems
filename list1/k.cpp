#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, i;
    set<int> s;
    cin >> n;

    for(i=0;i<n;i++) {
        cin >> a;
        if(s.count(a))
            s.erase(a);
        else
            s.insert(a);
    }

    cout << s.size();
}