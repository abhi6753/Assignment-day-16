//6. Write a program in C to find the sum of rows and columns of a Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col;
    printf("Enter number of row and column:\n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter %d elements:\n",row*col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Sum of total row = %d",sum);
}