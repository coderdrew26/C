#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and1, or1, xor1;
  and1 = or1 = xor1 = 0;
  for(int a = 1; a < n; a++) {
      for(int b = a + 1; b <= n; b++){
         and1 = (a & b) > and1 && (a & b) < k ? a & b : and1;
          or1 = (a | b) >  or1 && (a | b) < k ? a | b :  or1;
         xor1 = (a ^ b) > xor1 && (a ^ b) < k ? a ^ b : xor1;
      }
  }
  printf("%d\n", and1);
  printf("%d\n",  or1);
  printf("%d\n", xor1);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
