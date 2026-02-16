#include<bits/stdc++.h>
using namespace std;
void invertedRightPyramid(int n ) {
    for(int i = 0;i<=n;i++) {
        for(int j = 0;j<n-i+1;j++) {
            cout << "*" ;
        }
        cout << endl;
    }
    cout << endl;
}
int main() {
    /*
    
    * * * * *
    * * * * 
    * * * 
    * * 
    * 

    */

    int t ; 
    cin >> t;
    while(t--) {
        int n ; 
        cin >> n ; 
        invertedRightPyramid(n); 
    }
    return 0;
}