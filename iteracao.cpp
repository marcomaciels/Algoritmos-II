#include <iostream>

using namespace std;

int fatorial (int n){
int fatn = 1 ;

if (n==0)
return 1 ;

else {
	for (int i = 0 ; i < n ; i ++)
		fatn *= (n-i);
}

return fatn;
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