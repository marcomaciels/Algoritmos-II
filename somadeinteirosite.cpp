#include <iostream>

using namespace std;

//Solução Iterativa

int somadeinteiros (int n){
int resp = 0 ;

	for(int i = 0; i <= n ; i++)
		resp += i;
	return resp ;



}

int main (){
	int n;
do{
	cin>> n;
}while (n<0);

int soma = somadeinteiros(n);

cout << soma ;

return 0 ;
}