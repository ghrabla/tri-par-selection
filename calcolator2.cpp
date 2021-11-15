#include <stdio.h>

int main(){
	int nume,T[100],aff;
	
	printf("donner le nombre des element: ");
	scanf("%d",&nume);
//scan element 
    for (int i=0;i<nume;i++){
    	scanf("%d",&T[i]);
	}
//premier case	
	for (int i=0;i<nume;i++){
//		comparer avec le premier case
		for (int j=i+1;j<nume;j++){
			if (T[i]<T[j]){
			aff = T[i];
			T[i] = T[j];
			T[j] = aff;
			}
		}
	}
	printf("resultat est: \n");
	for (int i=0;i<nume;i++){
		printf("%d \n",T[i]);
	}
	return 0;
}
	


