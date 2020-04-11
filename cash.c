
#include <cs50.h>
#include <stdio.h>
#include <math.h>
   
int main(void)
{
    float Change; //amount of change
    int cents;
    do
    {  
        Change = get_float("Change owed: "); //asking the user for the change owed 
        cents = round(Change * 100);
    }
    while (Change < 0);
    if (cents < 5) // if the value is less than 5
    { 
        printf("%i \n", cents); 
    }
    int Q;
    int i;
    if (cents >= 25)//if the value is 25 or more
    {  
        Q = cents / 25 ; //calculating the number of quarters
        i = cents % 25;
        if (i == 0)
        {  
            printf("%i \n", Q); //if quarters suffice
        }
        int D;
        int j;
        if (i != 0)
        {  
            D = (i / 10);
            j = (i % 10);
            if (j == 0)
            { 
                printf("%i \n", Q + D); //if quarters+dimes suffice
          
            }
            int K;
            int P;
            if (j != 0)
            {  
                K = (j / 5);
                P = (j % 5);
                if (P == 0)
                { 
                    printf("%i \n", Q + D + K); //if quarters+dimes+knickles suffice 
                }     
                if (P != 0)
                { 
                    printf("%i \n", Q + D + K + P); //if you need all 4 coins types
                }  
            } 
        }
    }
    int A;
    int a;
    if (cents < 25 && cents >= 10) // if the value is less than 25
    { 
        A = cents / 10;
        a = cents % 10;
        if (a == 0)
        { 
            printf("%i \n", A); //if dimes suffice 
        }
        int a2;
        int a3;
        if (a != 0)
        {  
            a2 = (a / 5);
            a3 = (a % 5);
            if (a3 == 0)
            { 
                printf("%i \n", A + a2); //if dimes+knickles suffice
            }
            if (a3 != 0)
            { 
                printf("%i \n", A + a2 + a3);
            }
        }
    }
 
    int B;
    int b;
    if (cents < 10 && cents >= 5) // if the value is less than 10
    { 
        B = cents / 5;
        b = cents % 5;
        if (b == 0)
        { 
            printf("%i \n", B); //if Knickles suffice 
        }
        int b2;
        int b3;
        if (b != 0)
        {  
            b2 = (b / 5);
            b3 = (b % 5);
            if (b3 == 0)
            { 
                printf("%i \n", B + b3); //if dimes+knickles suffice
            }
            if (b3 != 0)
            { 
                printf("%i \n", B + b2 + b3); //if you need 3 types of coins
            }
        }
    }  
}
