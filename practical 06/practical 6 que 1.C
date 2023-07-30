#include<stdio.h>
int main()
{
    int arr[10],min,max,tot=0,i;
    float avg;
    for(i=0;i<=9;i++)
    {
        printf("enter %d number:",i);
        scanf("%d",&arr[i]);
        tot+=arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<=9;i++)
    {
        if(arr[i]>max){max=arr[i];}
        if(arr[i]<min){min=arr[i];}
    }
    avg=tot/10;
    printf("%d is the maximum value. \n %d is the minimun value. \n %f is the average value.\n",max,min,avg);

    for(i=9;i<=9;i--)
    {
        printf("%d\n",arr[i]);
    }


}