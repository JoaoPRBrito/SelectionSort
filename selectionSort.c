#include <stdio.h>
#include <stdlib.h>

int main(void){
	int vet[5] = {4,8,1,5,9};
	int i,j,k;
	int size = sizeof(vet)/sizeof(int);
	int minIndex;
	for(i=0;i<size;i++){
		minIndex = i;
		for(j=(i+1);j<=size-1;j++){
			if(vet[minIndex]>vet[j]){
				minIndex = j;
			}
		}
    	int aux = vet[i];
    	vet[i] = vet[minIndex];
    	vet[minIndex] = aux;
    	
	}
	for(k=0;k<size;k++){
		printf("%d ",vet[k]);
	}

	return 0;
}
