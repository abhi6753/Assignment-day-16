//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
#include<conio.h>
void input(int r,int c,int arr[][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void print(int r,int c,int arr[][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
}
void product(int r,int c,int a[][c],int b[][c],int d[][c])
{
    int i,j,k;
    for(i=0;i<r;i++) // denote row of a 
    {
        for(j=0;j<c;j++) // denote col of a
        {
            d[i][j]=0;
            for(k=0;k<3;k++) // denote row of b
            {
                d[i][j]=d[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}
int main()
{
    int row,col;
    //1st Matrix
    printf("Enter row and col:\n");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    printf("Enter %d elements of 1st matrix:\n",row*col);
    input(row,col,a);
    printf("1st matrix elements are:\n");
    print(row,col,a);
    //2nd Matrix
    printf("Enter %d elements of 2nd matrix:\n",row*col);
    input(row,col,b);
    printf("2nd matrix elements are:\n");
    print(row,col,b);
    //product
    product(row,col,a,b,c);
    printf("Product of 1st and 2nd matrix:\n");
    print(row,col,c); //3 Matrix
    getch();
    return 0;
}