#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n,suma=0,elevacion=0;
	
	cout<<"Digite el numero de terminos a sumar: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		elevacion = pow(2,i);
		suma += elevacion;
	}
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
	return 0;
}
