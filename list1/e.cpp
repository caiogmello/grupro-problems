#include <iostream>
#include <map>
#include <algorithm>


using namespace std;

int main()
{
    int n, x, count = 0, i;

    cin >> n;
    
    map<int, int> m;
    map<int, int>::iterator it;

    for(i=0;i<n;i++) {
        cin >> x;
        if(m.count(x))
            m[x] ++;
        else 
        m.insert(make_pair(x, 1));
    }

    for(it = m.begin();it != m.end(); it++) {
            if(it->first > it->second)
                count += it->second;
            else if(it->first < it->second) 
                count += it->second - it->first;
            
    }

    cout << count;
}