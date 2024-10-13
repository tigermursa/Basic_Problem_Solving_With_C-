#include <stdio.h>

int main()
{

  int n, numbers, sum = 0;

  printf("How many number you gonna add ?");
  scanf("%d", &n);

  for (int i = 0; i < n ; i ++ ){
     scanf("%d", &numbers);
     sum += numbers;

  }
  printf("%d",sum);

    return 0;
}