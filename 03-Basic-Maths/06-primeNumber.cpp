/*
PRIME NUMBER : 

Any number who has only 2 divisors -> 1 and the number itself.


11 -> 1 and 11 -> 2 divisors -> hence prime 
4 -> 1 , 2 and 4 -> 3 divisors -> != 2 -> hence not prime 
*/

#include<bits/stdc++.h>
using namespace std;

bool checkPrimeNumber(int number) {
    int count = 0;
    for(int i = 1;i*i<=number;i++) {
        if(number % i == 0) {
            count++;

            if((number / i) != i) {
                count++; 
            }
        } 
    }

    if(count == 2) return true;
    else return false; 
}


int main() {
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n;

        bool isPrime = checkPrimeNumber(n);

        if(isPrime) {
            cout << "The number " << n << " is a prime number" << endl;
        } else {
            cout << "The number " << n << " is not a prime number" << endl;
        }
    }
    return 0;
}