#include <stdio.h>

int main() {
    int n;
    printf("value of n\n");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", n , i, n*i);
    }
    
    return 0;
}