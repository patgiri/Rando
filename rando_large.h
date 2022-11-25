#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include"murmur.h"

#define size 32

void genRando(int m)
{
    int i=0,d;
    char *binary;
    char key[1024],c;
    //int m=10000000;
    int p,q,j;
    clock_t s,e;
    FILE *fp=fopen("rando.txt","w");
    binary=(char *)malloc(m*sizeof(char));
    if(fp==NULL)
    {
        printf("Unable to open file!");
        return;
    }
    i=0;
    q=clock()^15485867;
    s=clock();
    while(i<m)
    {
        p=clock();
        sprintf(key,"%d",p);
        for(j=0;key[j]!='\0';j++);
        q=q^p;
        d=murmur2(key,j,q);
        d=d&1;
        binary[i]=d;
        i++;
    }
    e=clock();
    int count=0;
    j=0;
    for(i=0;i<m;i++)                                //Writing the created binary to file.
    {
        if(count==63)
        {
            fprintf(fp,"\n");
            count=0;
        }
        fprintf(fp,"%d\n",binary[i]);
        count++;
    }
    fclose(fp);
    double t=(double)(e-s)/CLOCKS_PER_SEC;
    printf("Times in second: %lf\n",t);
}

int main()
{
    int m=10000000;
    
    genRando(m);
    
    //fclose(fp2);
    return 0;
}
