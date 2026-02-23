#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int temp = num;
    int count = 0;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit != 0 && num % digit == 0) {
            count++;
        }

        temp /= 10;
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int digits = countDigits(n) ;
        cout << digits << endl; 
    }

    return 0;
}
