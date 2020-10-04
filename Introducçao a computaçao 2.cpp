#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int binario[20], decimal, casas;
	cout<< "Digite um numero de casas do numero escolhido: ";
	cin>> casas;
	
	for(int i=0; i<=casas-1; i--){
		cout<< "binario: ";
		cin>>binario[i];
	}
	
	for( int i=casas-1;i>=0; i--){
		if(binario[i]!=0){
			decimal+= pow((binario[i]*2),i);
		}
	}
	cout<< "decimal"<< decimal;
	
}
