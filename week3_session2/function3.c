#include <stdio.h>

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main()
{
    float y = 2.1;
    float z = sum(5, y); // calling our new function

    float x = sum(10,y);

    printf("The sum of 5 and %.2f is %.2f\n",y,z);
}

