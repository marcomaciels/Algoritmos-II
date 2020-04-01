#include <iostream>

using namespace std;

int fatorial (int n){
if(n>0)
	return n* fatorial (n-1);
else 
	return 1;

}




int main(){
int n;
do{
cin >> n;
}while (n<0);

int fatn = fatorial(n);

cout << n << "! = " << fatn;
return 0 ;
	
}