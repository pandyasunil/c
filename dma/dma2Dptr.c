#include<stdio.h>
#include<stdlib.h>
void main()
{
int **p;
int i,j,r,c;
printf("enter raw and coloum \n");
scanf("%d %d ",&r,&c);
for(i=0;i<r;i++)
p=malloc(sizeof(int *)*r);
for(i=0;i<c;i++)
p[i]=malloc(sizeof(int *)*c);
printf("enter 2d array ele \n");

for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&p[i][j]);

for(i=0;i<r;i++)
for(j=0;j<c;j++)
printf("%d ",p[i][j]);
printf("\n");

}
