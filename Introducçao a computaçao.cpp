#include <iostream>
using namespace std;

int main()
{
	int binario[8], decimal;
	cout<< "Digite um numero decimal";
	cin>> decimal;
	
	for(int i=0; i<=7; i++){
		binario[i]=decimal%2;
		decimal/=2;
	}
	for(int i=7; i>=0; i--){
		cout<< i;
	}
	
}
