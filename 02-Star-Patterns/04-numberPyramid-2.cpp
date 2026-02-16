#include<bits/stdc++.h>
using namespace std;
/*

1
22
334
4444
55555

*/

void numberPyramid2(int n) {
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<=i;j++) {
            cout << i+1 <<" ";
        }
        cout << endl;
    }
    cout <<endl;
}
int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        numberPyramid2(n);
    }
    return 0;
}