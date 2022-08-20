#include<stdio.h>
#include<stdlib.h>

int max_four(int a, int b, int c, int d) {
    int ans;
    a = a > b ? a : b;
    c = c > d ? c : d;
    ans = a > c ? a : d;
    return ans;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_four(a,b,c,d);
    printf("The highest number is: %d", ans);
}