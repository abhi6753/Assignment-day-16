//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
#include<conio.h>
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
void transpose(int r,int c,int a[][c])
{
    int i,j,k;
    printf("\n\nTranspose of given matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int row,col;
    printf("Enter row and column:\n");
    scanf("%d%d",&row,&col);
    int a[row][col];
    printf("Enter %d elements:\n",row*col);
    input(row,col,a);
    print(row,col,a);
    transpose(row,col,a);
    getch();
    return 0;
}