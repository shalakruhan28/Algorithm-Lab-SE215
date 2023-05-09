#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{  clock_t start_t, end_t;
     double total_t;
  int i, first, last, middle, n, x, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("\nEnter the %d elements of array:\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("\nEnter a number to search:\n");
  scanf("%d", &x);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < x)
      first = middle + 1;
    else if (array[middle] == x) {
      printf("Searching element %d found at %d index. ", x, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
   if (first > last)
    printf("Searching element %d not found at any index.", x);

    end_t = clock();
   total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f s\n", total_t  );

  return 0;
}
