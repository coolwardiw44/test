#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("memmory allocation\n");
	int sum= 0, i;
	int *ptr, tmp;

	ptr = (int *) malloc (6*sizeof(ptr));
	printf("size:%d\n", *ptr);

	if (ptr==NULL) {
		printf("TERMINATE THE PGM\n");
		return -1;
	}

	for (i=0,tmp=ptr;i<7;i++,tmp++) {
		printf("enter");
		scanf("%d",&tmp);
		sum += tmp;
		printf("sum:%d\n",sum);
	}
	free(ptr);



	return 0;
	
}