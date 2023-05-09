#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
      clock_t start_t, end_t;
     double total_t;
    int array[100],n,i,j,temp;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("\nEnter the elements of array:");
    for(i=0;i<n;i++)
     scanf("%d",&array[i]);

    for(i=0; i<n-1; i++){

        for(j=0; j<n-1-i; j++){

            if(array[j]>array[j+1]){
                temp       = array [j];
                array[j]   =array[j+1];
                array[j+1] =temp;
            }
        }
    }
    printf("\nAfter Sorting :");
    for(i=0;i<n;i++)
     printf("%d ",array[i]);

     end_t = clock();

   total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f s\n", total_t  );

    return 0;
}

