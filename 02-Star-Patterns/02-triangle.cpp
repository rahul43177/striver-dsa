#include<bits/stdc++.h>
using namespace std;

void printTriangle(int n) {
    for(int i = 0;i<n;i++) { //number of rows ; 
        for(int j = 0;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    /*
    
    *
    **
    ***
    ****
    *****
    
    */


    int t ;
    cin >> t ;
    while(t--) {
        int n ; 
        cin >> n ; 
        printTriangle(n);
    }
    return 0;
}