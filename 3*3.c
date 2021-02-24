#include<stdio.h>
int main()
{
int a[3][3],i,j;
printf("Input elements in the matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("element-[%d],[%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d ",a[i][j]);
}
printf("\n");
}
int sum=0;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j)
        {
            sum=sum+a[i][j];
            }
             printf("Sum of the diagnol elements is:%d",sum);
    }
}
return 0;
}
