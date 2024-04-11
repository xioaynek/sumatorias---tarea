#include<iostream>
using namespace std;

int main(){
    int n, suma = 0;
    
    cout << "Digite el total de numeros a sumar: "; 
    cin >> n;
    
    for(int i = 1; i <= n; i++){ 
        suma += i;
        cout << i;
        if(i < n){
            cout << " + ";
        } else {
            cout << " = ";
        }
    }	
    
    cout << suma << endl;

    return 0;
}
