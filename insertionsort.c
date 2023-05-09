#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   clock_t start_t, end_t;
     double total_t;

  int n, array[1000], i, j, temp, flag = 0;

  printf("Enter number of elements:");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 1 ; i < n ; i++) {
    temp = array[i];

    for (j = i - 1 ; j >= 0; j--) {
      if (array[j] > temp) {
        array[j+1] = array[j];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      array[j+1] = temp;
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }
  end_t = clock();
   total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f s\n", total_t  );

  return 0;
}
