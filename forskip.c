#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {

  int i = 0;

  for (i = 0; i < 10; i++) {
    // Figure out how to skip the print of 5 here
    if (i == 5){    
      continue;
    }

    printf("%d\n", i);
  
  }
}