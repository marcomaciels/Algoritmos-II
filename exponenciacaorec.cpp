#include <iostream>

using namespace std;

//Solução Recursiva

int exponenciacao (int b,int e){

if (e==0)
	return 1 ;
else
	return b*exponenciacao(b,e-1);


}

int main (){
	int b,e;
cin >> b >> e;

int potencia = exponenciacao(b,e);

cout << potencia ;

return 0 ;
}