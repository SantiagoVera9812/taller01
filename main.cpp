#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void randomizar(int *A,int size){

srand(time(NULL));

for(int i=0;i<size;i++){

int numeroAleatorio = rand() % 25;
A[i] = numeroAleatorio;


}
}

void imprimir(int *A,int size){

for(int i=0;i<size;i++){

    printf("%d\n",A[i]);
}

}
int main()
{
    int size;
    int A[]={0,0,0,0,0,0,0,0,0,0};

    size = sizeof(A)/sizeof(A[0]);

    randomizar(A,size);
    imprimir(A,size);

    return 1;
}