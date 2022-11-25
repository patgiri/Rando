#include <time.h>
#include "murmur.h"
#define size 32

unsigned long int genRando()
{
	int i=0,d;
	int *binary=(int *)malloc(64*sizeof(int));
	char key[1024],c;
	int m=64;
	int p,q,j,k=1;
	unsigned long int rand=0;
	q=clock()^15485867;
	while(i<m)
	{
		p=clock();
		sprintf(key,"%d",p);
		for(j=0;key[j]!='\0';j++);
		q=q^p;
		d=murmur2(key,j,q);
		d=d&1;
		binary[i]=d;
		rand+=d*(k<<i);
		i++;
		
	}
	/*for(i=0;i<64;i++)
		printf("%d",binary[i]);*/
	return rand;
}

