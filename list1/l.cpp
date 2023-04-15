#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, a, i;
    deque<int>d;

    cin >> n;

    if(n%2==0){
        for(i=0;i<n;i++){
            cin >> a;
            if(i%2==1){
                d.push_front(a);
            } else{
                d.push_back(a);
            }
        }
    } 
    else {
        for(i=0;i<n;i++){
            cin >> a;
            if(i%2==1){
                d.push_back(a);
            } else{
                d.push_front(a);
            }
        }
    }

    for(i=0;i<n;i++){
        cout << d.front() << " ";
        d.pop_front();
    }
}