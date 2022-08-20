#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int sum(int x, int y) {
    return x + y;
}

int prod(int x, int y) {
    return x * y;
}

int main(int argc, char *argv[]) {
    srand(time(NULL));
    int a = rand() % 100;
    int b = rand() % 100;
    printf("The result of the operation between %d and %d is %d\n",
        a, b, sum(a,b));
    return 0;
}