#include<stdio.h>
int sum(int a, int b);
int difference(int a, int b);
int product(int a, int b);
float divident(int a, int b);
int remain(int a, int b);

int main()
{
    printf("Hello Everyone, it is a basic calculator model which can perform 5 bssics tasks atleast\n");
    int a, b, o;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Operation(1-sum/2-difference/3-product/4-divide/5-remainder) :  ");
    scanf("%d", &o);

    if(o == 1)
    {
        printf("Sum = %d\n", sum(a, b));
    }
    else if(o == 2)
    {
        printf("Difference = %d\n", difference(a, b));
    }
    else if(o == 3)
    {
        printf("Product = %d", product(a, b));
    }
    else if(o == 4)
    {
        printf("Divident = %f\n", divident(a, b));
    }
    else if(o == 5)
    {
        printf("Remainder = %d\n", remain(a, b));
    }
    else 
    {
        printf("ERROR");
    }
return 0;

}


int sum(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a-b;
}

int product(int a, int b)
{
    return a*b;
}

float divident(int a, int b)
{
    return (float)a/b;
}

int remain(int a, int b)
{
    return a%b;
}
