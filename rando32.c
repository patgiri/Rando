#include <stdio.h>
#include <time.h>
#include "murmur.h"

unsigned int genRando()
{
	int i=0,d;
	int *binary=(int *)malloc(32*sizeof(int));
	char key[1024];
	int m=32;
	int p,q;
	unsigned int rand=0;
	q=clock()^15485867;
	while(i<m)
	{
		p=clock();
		sprintf(key,"%d",p);
		for(j=0;key[j]!='\0';j++);
		d=murmur2(key,j,q);
		q=d;
		d=d&1;
		binary[i]=d;
		rand+=d*(1<<i);
		i++;
		
	}
	/*for(i=0;i<32;i++)
		printf("%d",binary[i]);*/
	return rand;
}

int main()
{ 
    int i,n=1000;
    printf("\nGenerating random number ...\n");
    for(i=0;i<n;i++)
    	printf("%u\t",genRando());
    printf("\nDone!\n");
    return 0;
}
