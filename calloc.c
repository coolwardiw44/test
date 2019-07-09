#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, n, sum = 0, *tmp;
	int *ptr;
	printf("enter the elements:");
	scanf("%d",&n);
	ptr= (int *) calloc(4, sizeof(int));

	if (ptr==NULL){
		printf("memory is not sufficient\n");
		return 1;
	} else {
		printf ("memory is enough\n");
		for (i=0; i<n; i++) {
		printf("enter");
		scanf("%d",ptr);
		sum += *(ptr);
		}

		printf("sum:%d\n",sum);
		free(ptr);
		return 0;

	}

}