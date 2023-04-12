#include <iostream>
using namespace std;


void sN(int n);

void sN(int n) {
    if(n == 1){
        cout << 1 << " ";
    } else {
        sN(n-1);
        cout << n << " ";
        sN(n-1);
    }
}

int main() {
    int n;

    cin >> n;

    sN(n);
}

