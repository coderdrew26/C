#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct Person {
  char name[40];
  int age;
};

int main(void) {
  struct Person person1 = {"A"};
  struct Person person2 = {"B"};
  // Write your code below
  person1.age = 27;
  person2.age = 28;

  printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
  printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
}