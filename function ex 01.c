///Problem 01: Write a function that simply prints a messages "Hello!! I am from inside of a function".
/*
#include<stdio.h>
void hello_func ()
{
    printf("Hello!! I am from inside of a function");
}

int main()
{
    hello_func();

    return 0;

}*/


///Problem 02:  W a Func that takes an int as input and prints EVEN if the number is divisible by 2, otherwise prints ODD.

/*#include<stdio.h>

void func (int a)
{
    if (a%2==0){
        printf("EVEN");
        }
    else{
    printf("ODD");
    }
}


int main()
{
    func(5);
    return 0;
}*/


///problem 03:  W a func that takes an int as input and prints all of its divisosrs.

/*#include<stdio.h>

void divisors (int n)
{
    int i;
    for(i=1;i<=n;i++)
        if (n%i==0)
            printf("%d\n",i);
}
int main()
{
    divisors(50);
    return 0;

}*/



///problem 04:  Suppose you are a planning to make a simple calculator. Your calculator
//has four func- add(), substract(), multiply(), and divide(). Each of these func takes two
//floating nmbrs as input and returns the result after applying the corresponding operation.
//Scan diff values from the user and test these four func  with these input.

/*#include<stdio.h>

float add_cal (float a, float b)
{
    float add = a+b;
    return add;
}

float sub_tract (float a, float b)
{
    float sub = a-b ;
    return sub;
}

float mul_ti_ple (float a, float b)
{
    float mul = a*b;
    return mul;
}

float divi_des (float a,float b)
{
    float div = a/b;
    return div;
}

int main()
{
    float a,b;
    printf("ENTER TWO VALUE: ");
    scanf("%f %f", &a, &b);
    float add = add_cal(a,b);
    float sub= sub_tract (a,b);
    float mul = mul_ti_ple(a,b);
    float div= divi_des(a,b);

    printf(" ADD:%f\n SUBTACT:%f\n MULTIPLY:%f\n DIVIDE:%f\n", add,sub,mul,div);
    return 0;
}*/


///problem 05: Write a program in C to find the square of any number using the function.

/*#include<stdio.h>
int square (int a)
{
    int sqr=a*a;
    return sqr;
}

int main()
{
    int value;
    printf("ENTER A VALUE FOR SQUARE: ");
    scanf("%d",&value);
    int sqr = square(value);
    printf("%d",sqr);

    return 0;

}*/


///problem 06:
























