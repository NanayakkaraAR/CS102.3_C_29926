#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the arrays:");
    scanf("%d",&size);

    int array1[size],array2[size],vector_sum[size],scaler_sum=0,i;
    printf("Enter %d integer value for array1:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Enter %d integer value for array2:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array2[i]);
    }
    for(i=0;i<size;i++)
    {
        scaler_sum += array1[i];
    }
    for(i=0;i<size;i++)
    {
        vector_sum[i] += array2[i];
    }
    printf("Scaler sum :%d\n",scaler_sum);
    
    printf("Vector sum:\n");
    for(i=0;i<size;i++)
    {
        printf("%d",vector_sum[i]);
    }
    printf("\n");
    return 0;
}