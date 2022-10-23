#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Decimal number: ";
    cin >> n;
    string binary = "";

    int i; 
    for(i=31; i>=0 && !(n&(1<<i)); i--);

    for(; i>=0; i--){
        binary += (n&(1<<i)) ? "1" : "0";
    }

    cout << "Binary representation: " << binary << endl;
}