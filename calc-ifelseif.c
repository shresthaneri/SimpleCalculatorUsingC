#include <stdio.h>  
int main()  
{  
    // local variables declaration
    char opt;  
    int num1, num2;   
    float res;  

    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &opt); 

    printf (" \n Enter the first number: ");  
    scanf(" %d", &num1); // take fist number  

    printf (" Enter the second number: ");  
    scanf (" %d", &num2); // take second number  

    if (opt == '+' )  
    {  
        res = num1 + num2; // add two numbers  
        printf (" Addition of %d and %d is: %.2f", num1, num2, res);  
           
    }  
    else if (opt == '-')  
    {  
        res = num1 - num2; // subtract two numbers  
        printf (" Subtraction of %d and %d is: %.2f", num1, num2, res);  
    }  
       
    else if (opt == '*')  
    {  
        res = num1 * num2; // multipy two numbers  
        printf (" Addition of %d and %d is: %.2f", num1, num2, res);   
    }  
    else if (opt == '/')  
    {  
        if (num2 == 0)   // if num2 == 0, take another number  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &num2);        
                }  
        res = num1 / num2; // divide two numbers  
        printf (" Division of %d and %d is: %.2f", num1, num2, res);  
    }    
    else
    {
        printf (" Something is wrong! Please check the options "); 
    }
    return 0;  
}  