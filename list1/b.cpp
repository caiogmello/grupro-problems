#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, x, v;
    map<int, int> m;

    cin >> n >> x;

    for(int i = 0; i<n; i++) {
        cin >> v;
        
        if(m.count(x-v)){
            cout << m[x-v] << " " << i+1;
            return 0;
        }
        m.insert(make_pair(v,i+1));
    }

    cout << "IMPOSSIBLE";

}
