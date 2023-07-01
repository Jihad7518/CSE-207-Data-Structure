#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>

int main(){

    int n,a[50],i,Fmin=32767,Smin=32767,Fmax=0,Smax=0;  //declare array and variables

    first:printf("Enter no. of elements: ");  //Enter number of elements
    scanf("%d",&n);

    //n should be greater than 1

    if(n<2){
        printf("No. of elements should be greater than 2.\n");
        goto first;
    }
    printf("Enter %d array elements:\n",n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //first find first minimum and maximum

    for(i=0;i<n;i++){
        if(a[i]<Fmin){
            Fmin=a[i];
        }
        if(a[i]>Fmax){
            Fmax=a[i];
        }
    }


    //now by using first maximum and minimum find second maximum and minimum
    for(i=0;i<n;i++){
        if(a[i]>Fmin && Smin>a[i]){
            Smin=a[i];
        }
        if(a[i]<Fmax && Smax<a[i]){
            Smax=a[i];
        }
    }

    //print second maximum and minimum

    printf("Second Maximum: %d\nSecond Minimum: %d",Smax,Smin);
}
