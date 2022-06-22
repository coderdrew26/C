#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for (int i = 1; i <= n+1; ++i) {
      for (int j = 1; j <= n+1; ++j) {
      printf("%d ", n);
      }
    
      printf("\n");
    }
    return 0;
}