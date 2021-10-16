#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
      
// function declarations   
int addition();  
int subtract();  
int multiply();  
int divide();  
void exit();  
  
int main()  
{  
    // declaration a local variable op;  
    int opt;  
    do  
    {  
        // displays the multiple operations of the C Calculator  
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Exit \n \n Please, Make a choice ");      
          
        scanf ("%d", &opt); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (opt)  
    {  
        case 1:  
            addition(); 
            break; 
              
        case 2:  
            subtract(); 
            break; 
              
        case 3:  
            multiply(); 
            break; 
              
        case 4:  
            divide(); 
            break; 
                 
        case 5:  
            exit(0); 
            break;  
              
        default:  
            printf(" Something is wrong! Please check the options ");  
            break;                        
    }  
    printf (" \n \n -----------------------------------------\n ");  
    } while (opt != 5);   
  
    return 0;        
}  
  
    
// function definition  
int addition()  
{  
    int i, sum = 0, num, f_num; // declare a local variable   
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
  
// use subtract() function to subtract two numbers  
int subtract()  
{  
    int num1, num2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    res = num1 - num2;    
    printf (" The subtraction of %d - %d is: %d", num1, num2, res);  
}  
  
// use multiply() function to multiply two numbers  
int multiply()  
{  
    int num1, num2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    res = num1 * num2;    
    printf (" The multiply of %d * %d is: %d", num1, num2, res);  
}  
  
// use divide() function to divide two numbers  
int divide()  
{  
    int num1, num2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
      
    if (num2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &num2);        
    }  
    res = num1 / num2;    
    printf (" \n The division of %d / %d is: %d", num1, num2, res);  
}  
  

