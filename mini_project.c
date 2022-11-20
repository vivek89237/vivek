#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void show();
void choose(int x);
float add();
float sub();
float divi();
float avg();
void is_prime(int X);
int Is_a_perfect_no(int X);
float Exponential();
double fact(int X);
void Pattern();
void create_matrix();

int main()
{
    int k=1;
    printf("Playing with no.:\n\n");
    show();
    
   printf("\n\n");
   while(k<11){
    switch (k)
    {
    case 1:
        choose(k);
        printf("Addition: %f\n", add());
        break;

    case 2:
        choose(k);
        printf("Substraction: %f\n", sub());
        break;

    case 3:
        choose(k);
        printf("Average: %f\n", avg());
        break;

    case 4:
        choose(k);
        printf("Division is %f\n", divi());
        break;

    case 5:
        choose(k);
        printf("Enter any digit:\n");
        int n;
        while (n != -1)
        {
        scanf("%d", &n);
        is_prime(n);
        }   
        break;

    case 6:
        choose(k);
        Pattern();
        break;

    case 7:
        choose(k);
        printf("Enter any digit:\n");
        int l;
        scanf("%d", &l);
        Is_a_perfect_no(l);
        break;

    case 8:
       choose(k);
       printf("We get: %f\n",Exponential()) ;
        break;

    case 9:
        choose(k);
        create_matrix();
        break;
    case 10:
         choose(k);
         printf("Enter any digit:\n");
        int g;
        scanf("%d", &g);
         printf("Factorial of %d is %lf\n", g, fact(g));
         break;
         
    default:
         printf("\n\nEnd.\n");
    }
    k++;
    printf("\n\n");
    }
    return 0;
}
void show(){
    printf("1.Adiition:\n");
    printf("2.Substraction:\n");
    printf("3.Average:\n");
    printf("4.Division:\n");
    printf("5.Is prime or not until '-1':\n");
    printf("6.Print pattern:\n");
    printf("7.Is a perfect no. or not:\n");
    printf("8.Exponential of no.s:\n");
    printf("9.Create matrix:\n");
    printf("10.Factorial:\n");
    printf("\n\n");
    }
void choose(int x){
switch (x)
    {
    case 1:
        printf("1.Adiition:\n");
        break;

    case 2:
        printf("2.Substraction:\n");
        break;

    case 3:
        printf("3.Average:\n");
        break;

    case 4:
      printf("4.Division:\n");
        break;

    case 5:
        printf("5.Is prime or not until '-1':\n");
        break;

    case 6:
         printf("6.Print pattern:\n");
        break;

    case 7:
        printf("7.Is a perfect no. or not:\n");
          break;

    case 8:
       printf("8.Exponential of no.s:\n");
         break;

    case 9:
         printf("9.Create matrix:\n");
        break;

    case 10:
         printf("10.Factorial:\n");
         break;
        
    }
}
float add()
{
    float X, sum = 1;
    printf(" -1 to terminate:\n");
    while (X != -1)
    {
        scanf("%f", &X);
        sum = sum + X;
    }

    return sum;
}
float sub()
{
    float sum = 0, X, Y;
    printf("Enter any two digits:\n");
    scanf("%f\n %f", &X, &Y);
    sum = X - Y;

    return sum;
}
float avg()
{
    float X, count = 0, sum = 1, avg = 0;
    printf(" -1 to terminate:\n");
    while (X != -1)
    {
        count++;
        scanf("%f", &X);
        sum = sum + X;
    }
    avg = sum / (count - 1);
    return avg;
}
float divi()
{
    float X, Y;
    printf("Enter any two digits:\n");
    scanf("%f\n %f", &X, &Y);
    return X / Y;
}
void is_prime(int X)
{
    int flag = 0;
    for (int i = 2; i <= X - 1; i++)
    {
        if (X % i == 0)
        {
            flag = 1;
        }
    }
    if ( flag == 1 )
    {
        printf("%d is not a prime no.\n", X);
    }
    else if ( X == -1)
    {   
        printf("Exit\n");
        
        
    }
    else {
        printf("%d is a prime no.\n", X);
        printf("Enter next:\n");
        }
}
void Pattern()
{
    int X, Y;
    printf("Enter no. of rows and column:\n");
    scanf("%d\n %d", &X, &Y);
    for (int i = 1; i < X; i++)
    {
        for (int j = i; j < Y; j++)
        {
            printf("** ");
        }
        printf("\n");
    }
}
double fact(int X)
{
    if(X==0 || X== 1){
        return 1;
    }
    else{
        return (X*fact(X-1));
    }
}
int Is_a_perfect_no(int X)
{

    int rem, sum = 0, i;

    for (i = 1; i < X; i++)
    {
        rem = X % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == X)
        printf(" %d is a Perfect Number", X);
    else
        printf("\n %d is not a Perfect Number", X);

    return 0;
}
void create_matrix()
{   int X, Y;
    printf("Enter no. of column and rows:\n");
    scanf("%d\n %d", &X, &Y);
    printf("Enter the elemrnts:\n");
    int num, arr[X][Y];
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }
    printf("\n ");
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n ");
    }
}
float Exponential()
{   float X, Y;
    printf("Enter base and exponent:\n");
    scanf("%f\n %f", &X, &Y);
    float exp = pow(X, Y);
    return exp;
}