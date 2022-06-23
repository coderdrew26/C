#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    float avgProfit;
    int priceOfPumpkins = 50;
    int sales = 35;
    int daysWorked = 7;

    avgProfit = ((float)priceOfPumpkins * sales) / daysWorked;
    printf("Average daily profit:P%.2f", avgProfit);


}