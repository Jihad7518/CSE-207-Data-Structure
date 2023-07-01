#include<stdio.h>
int main(){
    int i,j,n,temp,count = 0,exchange = 0;
    int a[100];


    printf("Enter the numbers: ");
    scanf("%d",&n);


    printf("Enter the elements: ");
    for(i=0; i<n; i++ ){
        scanf("%d",&a[i]);
    }

    printf("The elements are = ");
    for(i=0; i<n; i++ ){
        printf("%d ",a[i]);

    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            count++;

            if(a[j]>a[j+1]){

                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                exchange++;

            }
        }
    }
    printf("\n");
    printf("Number of comparison = %d\n",count);
    printf("Number of exchange = %d\n",exchange);

    printf("Sorted Array = ");
    for(i=0; i<n; i++){
        printf(" %d",a[i]);
    }
}
