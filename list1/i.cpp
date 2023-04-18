#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, m, i;
    string s, t;
    cin >> n >> m;
    set<string>c;
    vector<string>v;

    for(i=0;i<n;i++) {
        cin >> s;
        v.push_back(s);
    }

    for(i=0;i<m;i++) {
        cin >> t;
        c.insert(t);
    }

    for(i = 0; i<n;i++) {
        if(c.count(v[i])) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
}