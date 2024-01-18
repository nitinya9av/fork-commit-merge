#include <stdio.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (int i = 0; i <= num; i++) {
    /*
     * 1
     * 2
     * 3
     * 4
     * 5
     */
    for (int j = 0; j < i; j++) {
      printf("*");
      /*
       * *
       * **
       * ***
       * ****
       * *****
       */
    }
    printf("\n");
  }

  for (int i = 1; i <= num; i++) {
    /*
     * 1
     * 2
     * 3
     * 4
     * 5
     */
    for (int j = 1; j <= i; j++) {
      /*
       * 1
       * 12
       * 123
       * 1234
       * 12345
       */
      printf("%d", j);
    }
    printf("\n");
  }

  /*
   * A
   * AB
   * ABC
   * ...
   */
  for (int i = 'A'; i <= 'Z'; i++) {
    for (int j = 'A'; j <= i; j++) {
      printf("%c", j);
    }
    printf("\n");
  }
  printf("\n");

  /*
   * 12345
   * 1234
   * 123
   * 12
   * 1
   */
  int num1 = 5;
  for (int i = num1; i > 0; i--) {
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }

  int num2;
  printf("Enter a number: ");
  scanf("%d", &num2);
  for (int i = 1; i <= num2; i++) {
    for (int sp = (num2 - i); sp >= 1; sp--) {
      printf(" ");
    }
    /*
     * =
     * =
     * =
     * =
     * =
     * =
     * Space decrease as go down
     */
    /*
     * =*
     * =* *
     * =* * *
     * =* * * *
     * =* * * * *
     * =* Increase as go down
     */
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\t\tspace= %d\tj= %d\t", num2 - i, i);
    printf("\n");
  }
  for (int i = num2 - 1; i > 0; i--) {
    /*
     * Increase no. of space
     * =
     * =
     * =
     * =
     * Space descrease as we go down
     */
    for (int sp = num2 - i; sp >= 1; sp--) {
      printf(" ");
    }
    /*
     * Below loop prints * with decreasing No.
     * =* * *
     * =* *
     * =*
     */
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\t\tspace=%d\t\tj=%d\n", num2 - i, i);
  }
  /*
   * Next Task
   * 1      1
   * 12    21
   * 123  321
   * 12344321
   */

  int limit;
  printf("Enter a number: ");
  scanf("%d", &limit);
  for (int i = 1; i <= limit; i++) {
    /*
     * 1
     * 12
     * 123
     * 1234
     */
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    /*
     * puts 2 spaces
     * =      =
     * =    =
     * =  =
     * ==
     * Try to highlight the area after = sign,
     * 6 space, 4 space, 2 space, 0 space
     */
    for (int space = limit - i; space > 0; space--) {
      printf("  ");
    }
    /*
     * 1
     * 21
     * 321
     * 4321
     * Row no incearse but elements in decresing order
     */
    for (int j = i; j > 0; j--) {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}
