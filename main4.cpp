#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string password="123456";
	string input;
/*	do{
		cout<<"please enter your password:";
		cin>>input;
		if(input!=password){
			cout<<"you entered wrong password: "<<input<<endl;
		}
	}while(input!=password);
	cout<<"successful login ";*/
	
/*	for(int i=1;i<10;i+=3){
		cout<<"i : "<<i<<endl;
	}*/
	
	int sayi;
	int faktoriel=1;
	int faktoriyel=1;
	cout<<"sayi :";
	cin>>sayi;
	 for(int i=sayi;i>=1;i--){
		faktoriel*=i;
		
	 }
	cout<<"faktoriyel: "<<faktoriel<<endl;
	for(int j=1;j<=sayi;j++){
		faktoriyel*=j;
	}
	cout<<faktoriyel<<endl;
	return 0;
}
