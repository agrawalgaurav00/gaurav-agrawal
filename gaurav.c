/*Write a program to print sum of the following series:

      1 3 5 7 9 11......

      up to n numbers taking only an integer n as input.*/


    #include <stdio.h>
     
    int main()
    {
      int n, sum = 0, c, value;
     
      printf("How many numbers you want to add?\n");
      scanf("%d", &n);
     
      printf("Enter %d integers\n", n);
     
      for (c = 1; c <= n; c++)
      {
        scanf("%d", &value);
        sum = sum + value;
      }
     
      printf("Sum of the integers = %d\n", sum);
     
      return 0;
    }
