#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    do{
       sum += i;
        i++;
    } while (i<=10);
    
    printf("The sum of first 10 natural num is %d", sum);
    return 0;
}