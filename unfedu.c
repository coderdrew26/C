#include<stdio.h>
#include<float.h>

int main(){
    printf("Storage size for the float: %d \n", sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN);
    printf("Maximum float positive value: %E\n", FLT_MAX);
    printf("Precision value: %d\n", FLT_DIG);
}