#include<bits/stdc++.h>
using namespace std;

void palindromeCheck(int num) {
    int temp = num;
    int rev = 0;
    while(num>0) {
        int lastDigit = num % 10;
        rev = (rev*10)+lastDigit;
        num /= 10;
    }

    if(temp == rev) {
        cout << "number : " << temp << " is a palindrome number" << endl;
    } else {
        cout << "number : " << temp << " is not a palindrome number" <<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n ;

        palindromeCheck(n);
    }
    return 0;
}