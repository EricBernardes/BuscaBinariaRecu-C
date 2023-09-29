#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int encontraItem(int *vet, int v, int meio){
meio= MAX/2;
if(vet[meio]==v])
    return vet[meio];
else{
    if(v<vet[meio])
        encontraItem(vet, v, meio-1);
    else{
        if
}
}


}

int encontraItem(int *vet, int v){
int esquerda=1;
int direita= MAX;
    while(esquerda<=direita){
        int meio=(esquerda+direita)/2;
        if(v<vet[meio])
            direita=meio-1;
        else{
            if(v>vet[meio])
                esquerda=meio+1;
            else
                return vet[meio];
        }
    }
    return -1;
}


void main(){
int vet[MAX]={0,1,2,3,4,5,6,7,8,9};
for(int i=0; i<MAX; i++)
    printf("%d ", vet[i]);
    printf("\n");
    printf("Encontrou o elemnto: %d\n", encontraItem(vet, 11));
}
