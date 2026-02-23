#include<bits/stdc++.h>
using namespace std;

void starSpace(int n) {
    
    for(int i = 0;i<n;i++) {
        //space
        for(int j = 0;j<n-i-1;j++) {
            cout << "_";
        }

        //star
        for(int j = 0;j<2*i+1;j++) {
            cout << "*" ;
        }
        //space 
        for(int j = 0;j<n-i-1;j++) {
            cout << "_";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n ; 
        cin >> n ; 
        starSpace(n);
    }
    return 0;
}