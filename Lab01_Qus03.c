#include<stdio.h>
#include <conio.h>
#define MAX 15
void main(){

     int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],i,j,k,m,n,r,s,ch;

     printf("Enter the size of a matrix (m X n) : \n");
     printf("Enter value fro n (less than 15) :");
     scanf("%d",&m);
     printf("Enter value for n (less than 15) :");
     scanf("%d",&n);
     printf("\nEnter the size of b matrix (r X s) : \n");
     printf("Enter value for r (less than 15) :");
     scanf("%d",&r);
     printf("Enter value for s (less than 15) :");
     scanf("%d",&s);
     printf("\nEnter your choice:\n");
     printf("1 for addition\n");
     printf("2 for subtraction\n");
     printf("3 for multiplication\n");

     scanf("%d",&ch);
     switch(ch)
     {
    case 1 :
    {
       if(m==r && n==s)
       {
        printf("Enter the first matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the second matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<s;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("You choose 1\n\n");
        printf("Addition:\n\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
       }
       else
       {
        printf("\nError404 : Condition for addition");
        printf(" Matrices is not Satisfied!");
       }
    break;
    }
    case 2 :
    {
       if(m==r && n==s)
       {
        printf("Enter the first matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the second matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<s;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
            }
        }
        printf("You choose 2\n\n");
        printf("Subtraction:\n\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
       }
       else
       {
        printf("\nError404 : Condition for substraction");
        printf(" Matrices is not satisfied!");
       }
    break;
    }
    case 3 :
    {
       if(n==r)
       {
        printf("Enter the first matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the second matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<s;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<s;j++)
            {
                c[i][j]=0;
                for(k=0;k<r;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("You choose 3\n\n");
        printf("Multiplication:\n\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<s;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
       }
       else
       {
        printf("\nError404 : Condition for multification");
        printf(" Matrices is not satisfied!");
       }
    break;
    }
    default:
    {
       printf("You entered wrong choice !!!");
    }
     }
     getch();
}

