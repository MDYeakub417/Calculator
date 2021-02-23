#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define KEY "\t\tEnter the Operator:"


void calculator_operations();
void new_display();
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();



void calculator_operations()
{

    printf("\n ***WELCOME TO MY CALCULATOR*** \n\n\n");
    printf("Important Information:\n");
    printf(".......................\n\n");
    printf("\t 1. Press for display or 'a'.\n");
    printf("\t 2. Press for exist  'o'.\n");
    printf("\t 3. Enter 'c' to clear the screen. \n\n");

    printf("Enter '+' symbol for Addition. \n");
    printf("Enter '-' symbol for Subtraction. \n");
    printf("Enter '*' symbol for Multiplication. \n");
    printf("Enter '/' symbol for Division. \n");
    printf("Enter '?' symbol for Modulus.\n");
    printf("Enter '^' symbol for Power. \n");
}

void new_display()
{
    printf("\n\n\tEnter '+' symbol for Addition. \n");
    printf("\tEnter '-' symbol for Subtraction. \n");
    printf("\tEnter '*' symbol for Multiplication. \n");
    printf("\tEnter '/' symbol for Division. \n");
    printf("\tEnter '?' symbol for Modulus.\n");
    printf("\tEnter '^' symbol for Power. \n");
}

void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    while(k<n)
    {
        printf("Please enter your number: ");
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("\nAnswer:\n.........\n\t\tSum= %d",total);
}

void subtraction()
{
    int a, b, c = 0;
    printf("\n[Note:You can only subtract two numbers]");
    printf("\nPlease enter  number  : ");
    scanf("%d", &a);
    printf("Please enter  number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\nSubtraction = %d\n", c);
}

void multiplication()
{
    int b, tota=1, a=0, numbe;
    printf("\nEnter the number of elements: ");
    scanf("%d",&b);
    while(a<b)
    {
        printf("Please enter your number: ");
        scanf("%d",&numbe);
        tota=tota*numbe;
        a=a+1;
    }
    printf("\nAnswer:\n.........\n\t\tMultiplication= %d\n",tota);
}

void division()
{
    int a, b, d=0;
    printf("\n[Note:You can only division two numbers]");
    printf("\nPlease enter your number  : ");
    scanf("%d", &a);
    printf("Please enter your number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision=%d\n",d);
}

void modulus()
{
    int a, b, d=0;
    printf("\n[Note:You can only modulus two numbers]");
    printf("\nPlease enter your number   : ");
    scanf("%d", &a);
    printf("Please enter your number  : ");
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus= %d\n",d);
}

void power()
{
    double a,num, p;
    printf("\n[Note: Enter number = 2 and power = 3. That means 2^3 so for then you get the perfectly result]\n");
    printf("Number: ");
    scanf("%lf",&a);
    printf("Power : ");
    scanf("%lf",&num);
    p=pow(a,num);
    printf("\n%lf To the power= %lf \n",a,p);
}
int main()
{
    int X=1;
    char Operator;
    calculator_operations();
    while(X)
    {
        printf("\n");
        printf("%s ", KEY);
        Operator=getche();
        switch(Operator)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '^': power();
                      break;

            case 'a': new_display();
                      break;

            case 'o': exit(0);
                      break;

            case 'C': system("cls");
                      break;

            default : system("cls");

    printf("\nYou have selected unavailable option. ");
    printf("Please Enter any one of below available options....");

                      new_display();
        }
    }
}

