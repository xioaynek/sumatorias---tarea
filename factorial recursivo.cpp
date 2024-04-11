#include<iostream>
using namespace std;

int main(){
    int n, factorial = 1;
    
    cout << "Digite un número: "; 
    cin >> n;
    
    cout << "\n";
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i; j--){
            cout <<"("<<j<<")";
    
        }
        cout << "!" << endl;
        factorial *= i;
    }
    
    cout << "\n" << n << "! = " << factorial << endl;
    
    return 0;
}
