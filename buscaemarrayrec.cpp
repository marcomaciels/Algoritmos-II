#include <iostream>



using namespace std;




void selectionSort(int *V, int N){

   

    int menor, aux;

    for (int i = 0; i < N - 1; i++){

        menor = i; 

        for(int j = i + 1; j < N; j++){

            if(V[j] < V[menor]){

                menor = j;

            }

        }

        if(menor != i){ 

            aux = V[i]; 

            V[i] = V[menor];

            V[menor] = aux;

        }

    }

}
int main(){
int array[25];
int N;
cin >> N;
for (int i = 0; i < N;i++)
    cin >> array[i];

selectionSort(array,N);

cout << array[N-1];

return 0 ;








}
