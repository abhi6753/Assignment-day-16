//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
#include<conio.h>
int sumOfRightDiagonal(int r,int c,int a[][c])
{
    int i,j,sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum = sum+a[i][j];
            }
        }
    }
    return sum;
}
void print(int r,int c,int a[][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void input(int r,int c,int a[][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int main()
{
    int row,col,sum=0;
    printf("Enter number of row and column:\n");
    scanf("%d%d",&row,&col);
    int a[row][col];
    printf("Enter %d elements of matrix:\n",row*col);
    input(row,col,a);
    //print matrix
    printf("Entered matrix are:\n");
    print(row,col,a);
    sum = sumOfRightDiagonal(row,col,a);
    printf("Sum of Right diagnoals of given matrix is %d",sum);
    getch();
    return 0;
}
