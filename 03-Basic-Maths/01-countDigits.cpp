/*
Description : 
Count the number of digit in an integer 

input : 12345
output : 5 
*/
#include<bits/stdc++.h>
using namespace std;

void countDigits(int n){
    int count = 0;
    int temp = n;
    while(n>0) {
        count++;
        cout << "The last digit is : " << n%10 << endl;
        n = n/10;
    }
    cout << "The count in " << temp << " is " << count << endl;
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n;

        countDigits(n);
    }
    return 0;
}