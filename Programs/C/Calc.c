#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
  
int main()  
{  
    // declaration of local variable op;  
    int op, n1, n2;  
    float res;  
    char ch;  
    do  
    {  
        // displays the multiple operations of the C Calculator  
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");      
          
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (op)  
    {  
        case 1:  
            // Add two numbers  
            printf (" You chose: Addition");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 + n2; // Add two numbers  
            printf (" Addition of two numbers is: %.2f", res);  
            break; // break the function  
              
        case 2:  
            // Subtract two numbers  
            printf (" You chose: Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 - n2; // subtract two numbers  
            printf (" Subtraction of two numbers is: %.2f", res);  
            break; // break the function  
              
        case 3:  
            // Multiplication of the numbers  
            printf (" You chose: Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 * n2; // multiply two numbers  
            printf (" Multiplication of two numbers is: %.2f", res);  
            break; // break the function  
              
        case 4:  
            // Division of the numbers  
            printf (" You chose: Division");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            if (n2 == 0)  
                {  
                    printf (" \n Divisor cannot be zero. Please enter another value ");  
                    scanf ("%d", &n2);        
                }  
            res = n1 / n2; // divide two numbers  
            printf (" Division of two numbers is: %.2f", res);  
            break; // break the function  
              
        case 5:  
            // getting square of a number  
            printf (" You chose: Square");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
  
            res = n1 * n1; // get square of a number  
            printf (" Square of %d number is: %.2f", n1, res);  
            break; // break the function  
              
        case 6:  
            // getting the square root of the number  
            printf (" You chose: Square Root");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
              
            res = sqrt(n1); // use sqrt() function to find the Square Root   
            printf (" Square Root of %d numbers is: %.2f", n1, res);  
            break; // break the function  
              
        case 7:  
            printf (" You chose: Exit");  
            exit(0);   
            break; // break the function  
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (op != 7);  
  
    return 0;        
}  
