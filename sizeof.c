#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  int len;
  
  // Checkpoint 1 code goes here.
  len = sizeof(arr)/sizeof(double);
  printf("%i\n", len);

  // Checkpoint 2 code goes here.
  for(int i = 0; i < sizeof(arr)/sizeof(double); i++){
    printf("%.3f\n", arr[i]);
      }
}