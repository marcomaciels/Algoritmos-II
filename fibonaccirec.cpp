#include <iostream>
#include<locale>
using namespace std;



int fibonaccirec (int N){
if (N==0)
	return 0 ;
else if (N==1)
	return 1 ;
else
	return (fibonaccirec(N-1)+fibonaccirec(N-2));
}


int main(){
	int N;
 setlocale(LC_ALL, "Portuguese");
cin >> N;
int resp = fibonaccirec(N);
cout << resp;


	return 0;
}