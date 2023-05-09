#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
      clock_t start_t, end_t;
     double total_t;
    int array [100],n,i,x;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("\nEnter the elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nEnter a number to search:");
    scanf("%d", &x);
    for(i=0;i<n;i++){
    if(x== array[i]){
        printf("\nElements %d found at %d index.",x,i+1);
        break;
     }
    }
    if(i==n){
        printf("\nElements %d not found at any index.",x);
    }
      end_t = clock();
   total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f s\n", total_t  );
     return 0;
}
