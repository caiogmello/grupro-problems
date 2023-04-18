#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n, l, i;
    float x;
    
    vector<float> v;
    cin >> n >> l;

    for(i=0;i<n;i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    float r = max(v[0], l - v[n-1]);
    for(i=1;i<n;i++){
        r = max(r, (v[i] - v[i-1])/2);
    }

    cout << fixed << setprecision(9) << r;

}