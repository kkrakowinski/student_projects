#include <iostream>

using namespace std;

int main(){
	cout<<"Podaj temperature: "<<endl;
int x;
	cin>>x;
	if(x>=20){
	cout<<"Jest cieplo"<<endl;
	}
	else{
		int t=20-x;
		for(int i=0; i<t ; i++){
		cout<<"dodaje wegiel - temperature wzrasta o 1 stopien"<<endl;
		}
	}
	return 0;
}
