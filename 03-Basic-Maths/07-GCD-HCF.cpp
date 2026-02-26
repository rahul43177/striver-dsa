# include<bits/stdc++.h>
using namespace std;

int findHCF(int number1 , int number2) {
    while(number1 > 0 && number2 > 0) {
        if(number1 > number2) number1 = number1%number2;
        else number2 = number2%number1; 

    }
    if(number1 == 0 ) return number2;
    else return number1;
}

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n1 ;
        int n2; 
        cin >> n1;
        cin >> n2;

        int hcf = findHCF(n1, n2);
        cout << "The hcf of "<< n1 << " " << n2 << " is " << hcf << endl;
    }
    return 0;
}