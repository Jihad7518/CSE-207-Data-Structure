#include <stdio.h>

int main(){


    int a[100];

    int n,i,pos=-1,item,pass = 0,swp = 0;

    printf("Enter number of elements: ");

    scanf("%d",&n);

    printf("Enter your data : ");

    for(i = 0; i < n; i++){

    scanf("%d",&a[i]);

        printf("Your array :");
    }

    for(i = 0; i < n; i++){

        printf("%d\t",a[i]);
    }

    int temp,j;

    for(i = 0; i < n; i++){

        for(j = 0; j < n-1-i; j++){

                //comparing if jth element is greater than (j+1) th element

                if(a[j] > a[j+1]){

                    //swapping case : swap j th and j+1 th elements

                    temp = a[j];

                    a[j] = a[j+1];

                    a[j+1] = temp;

                    swp++;//increment the count of swappings by 1

                }

            }

            pass++;//increase count of passes after j reaches n-1-i

    }



    printf("\nPasses : %d and swaps : %d",pass,swp);

    printf("\nYour array :");

    for(i = 0; i < n; i++){

        printf("%d\t",a[i]);
    }

    return 0;

}
