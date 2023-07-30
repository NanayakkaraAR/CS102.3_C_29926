#include <stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],matsum[3][3],r,c,i=1;

//void takeinputs(int arr[3][3])


    printf("Enter elements for Array 1\n");
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            printf("Enter element %d in row %d: ",c+1,r+1);
            scanf("%d",&arr1[r][c]);
        }
    }

    printf("\nEnter elements for Array 2\n");
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            printf("Enter element %d in row %d: ",c+1,r+1);
            scanf("%d",&arr2[r][c]);
        }
    }

    printf("\nMatrix sum\n");
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {

            printf("%d\t",arr1[r][c]+arr2[r][c]);

        }
        printf("\n");

    }

}
