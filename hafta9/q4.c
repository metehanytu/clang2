#include<stdio.h>
#include <stdlib.h>
int main()
{
	int *array,n=2,k=0,a,i;
	array=(int *) calloc(n,sizeof(int));
	if(array==NULL) exit(1);
	while(1)
	{
		scanf("%d",&a);
		if(a==0) break;
		if(k>=n)
		{
			n++;
			array=(int *) realloc(array,n*sizeof(int));
			if(array==NULL) exit(1);
			array[k]=a;
		} 
		else array[k]=a;
		k++;
	}

	double ortalama = 0;
	
	for(i=0;i<k;i++) {
	    printf("%d %d \n", array[i], k);
		ortalama += (double) array[i] / k;
	}
	
	free(array);

	printf("ortalama = %f", ortalama);
	return 0;
}
