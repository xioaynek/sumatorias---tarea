#include<iostream>

using namespace std;

int main(){
	int num,x=0,y=1,z=1;
	
	do{
		cout<<"Digite una cantidad: ";
		cin>>num;
	}while(num<=0);
	
	cout<<"1 ";
	for(int i=1;i<num;i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;		
	}
	
	return 0;
}
