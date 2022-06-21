#include<stdio.h>
#include<string.h>

int main() {
  char s[] = "What's the password?";
  char p[] = "poolloop";  
  // Checkpoint 1 code goes here
  for(int i = 0; i < strlen(s); i++) {
    s[i] = '*';
  printf("%s\n", s);
  }
  // Checkpoint 2 code goes here
  for(int j = 0; j < strlen(p)/2; j++)
  p[j] = '#';
  printf("%s", p);
}