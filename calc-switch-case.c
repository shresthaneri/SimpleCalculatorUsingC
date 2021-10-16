#include <stdio.h>  
int main()  
{  
    // local variables declaration
    char opt;  
    int num1, num2;   
    float res;  

    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &opt); 
    if (opt == '+' )  
    {  
        printf (" You have selected Addition");  
    }  
    else if (opt == '-')  
    {  
        printf (" You have selected Subtraction");  
     }  
       
    else if (opt == '*')  
    {  
        printf (" You have selected Multiplication");  
     }  
    else if (opt == '/')  
    {  
        printf (" You have selected Division");  
    }    

    printf (" \n Enter the first number: ");  
    scanf(" %d", &num1); // take fist number  

    printf (" Enter the second number: ");  
    scanf (" %d", &num2); // take second number  
      
    switch(opt)  
    {  
        case '+':  
            res = num1 + num2; // add two numbers  
            printf (" Addition of %d and %d is: %.2f", num1, num2, res);  
            break;  
          
        case '-':  
            res = num1 - num2; // subtract two numbers  
            printf (" Subtraction of %d and %d is: %.2f", num1, num2, res);  
            break;  
              
        case '*':  
            res = num1 * num2; // multiply two numbers  
            printf (" Multiplication of %d and %d is: %.2f", num1, num2, res);  
            break;            
          
        case '/':  
            if (num2 == 0)   // if num2 == 0, take another number  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &num2);        
                }  
            res = num1 / num2; // divide two numbers  
            printf (" Division of %d and %d is: %.2f", num1, num2, res);  
            break;  

        default:  /* use default to print default message if any condition is not satisfied */  
            printf (" Something is wrong! Please check the options ");               
    }  
    return 0;  
}  