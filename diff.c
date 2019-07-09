#include <stdio.h>
#define DIFF(a,b) ((a)-(b))

int main()
{
	int x, y;
	int diff=0;
	printf("differnce of two numbers\n");
	scanf("%d%d",&x,&y);
	diff= DIFF(x,y);
	(diff>0)?(printf("x is larger")):(printf("y is larger"));
	return 0;
}