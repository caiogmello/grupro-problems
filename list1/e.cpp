#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int n, x, i;

    cin >> n;
    
    vector<int> v;
    vector<int>::iterator it;

    for(i=0;i<n;i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(i = 0;i<n;i++) {

    }

    it = upper_bound(v.begin(), v.end(), 3);
    cout << (it - v.begin());
    
}