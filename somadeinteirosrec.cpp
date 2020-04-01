#include <iostream>

using namespace std;

//Solução Recursiva

int somadeinteiros (int n){

if  (n==0)
	return 0;
else
	return n + somadeinteiros(n-1);



}

int main (){
	int n;
do{
	cin>> n;
}while (n<0);

int soma = somadeinteiros(n);

cout << soma ;


}