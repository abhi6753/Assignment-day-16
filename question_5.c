//5. Write a program in C to find the sum of left diagonals of a matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j,sum=0;
    printf("Enter number row and col of matrix:\n");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    printf("Enter %d elements of matrix:\n",row*col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if((i==0&&j==col-1)||(i==1&&j==1)||(i==row-1&&j==0))
            sum= sum+arr[i][j];
        }
    }
    printf("Sum of left diagnonals of matrix is %d",sum);
    getch();
    return 0;
}