#include <iostream>
using namespace std;
// printing fibinacci series till n terms
void print_series(int n){

    cout << "Fibonacci series : "<< 1 << " ";
    if (n == 1) return;
    cout << 1 << " ";
    if (n == 2) return;
    int i, j, x;
    i=1; j=1;
    for(int k=2; k<n; k++){
        x = i+j;
        i = j;
        j = x;
        cout << x << " ";
    }
    cout << endl;

}
int main(){
    int n;
    cout << "Enter no of terms: ";
    cin >> n;
    print_series(n);
}