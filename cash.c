#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //prompt
    float change;
    int total, quarters, dimes, nickels, pennys;
    int quarter = 25, dime = 10, nickel = 5, penny = 1;
    
    do
    {
         change = get_float ("change $");
    }
    while (change < 0);
    
    //convert to cents 
    total =round ( change *100 );
    
    //calculate how many coins needed
    quarters = total/quarter;
    total = total%quarter;
    
    dimes = total/dime;
    total = total%dime;
    
    nickels = total/nickel;
    total = total%nickel;
    
    pennys = total/penny;
    
    printf ("%i\n", quarters+dimes+nickels+pennys);
}
