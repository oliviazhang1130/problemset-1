#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //checking prompt
    int height , space, row, dot;
    do
    {
       height = get_int ("Height: \n"); 
    }
    while (height < 1 || height > 8);
    
    //make pyramid
    for(row = 1; row < height; row++)
 {
     for (dot = row; dot < height; dot++)
     {
             printf (".");
     }
     for (space = height - row ; space < height; space++)
     {
         printf ("#");
     }
     printf("\n"); 
 }

 }
