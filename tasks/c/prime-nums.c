#include <stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int not_divisible = 1;
  for (int j = 2; j <= num / 2; j++)
  {
    if (num % j == 0)
    {
      not_divisible = 0;
    }
  }
  if (not_divisible)
  {
    printf("%d is a prime number\n", num);
  }
  else
  {
    printf("%d is not a prime number\n", num);
  }
  return 0;
}