#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, a, i;
    cin >> n >> x;
    vector<pair<int,int>> v;

    for(i = 0; i<n; i++) {
        cin >> a;
        v.push_back(make_pair(a,i));
    }


    sort(v.begin(), v.end());


}