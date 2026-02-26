#include<bits/stdc++.h>
using namespace std;

void checkArmStrongNumber(int number) {
    int temp = number; 
    int arm = 0;
    while(number > 0) {
        int lastDigit = number%10;
        arm += (lastDigit*lastDigit*lastDigit); 
        number/=10;
    }
    cout << "For the number " << temp << " the arm cube sum generated is : " << arm << endl; 
    cout << endl;
    if(temp == arm) {
        cout << "The number " << temp << " is an armstrong number " << endl;
    } else {
        cout << "The number " << temp << " is not an armstrong number " << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        checkArmStrongNumber(n);
    }
    return 0;
}