#include<bits/stdc++.h>
using namespace std;

void printAllDivisors(int num) {
    int count = 0;
    for(int i = 0;i<=num;i++) {
        
        if(num%i == 0) {
            count++;
            cout << i << " ";
        }
    }
    cout << "The total count is : "  << count;
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        printAllDivisors(n);
    }
    
    return 0;
}