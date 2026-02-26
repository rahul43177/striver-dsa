#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;

    while(num > 0) {
        int lastDigit = num % 10;

        rev = (rev * 10) + lastDigit;

        num = num/10; 
    }
    return rev; 
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n;
        int reverse = reverseNumber(n);
        cout << "The reverse of << " << n << " is : " << reverse << endl; 
    }
    return 0;
}