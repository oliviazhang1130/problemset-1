#include <cs50.h>
#include <stdio.h>

int main(void)
{
 //checking prompt
    int height , hash, row, space, hash2;
    do
    {
       height = get_int ("Height: \n"); 
    }
    while (height < 1 || height > 8);
    
    //make pyramid
    for(row = 1; row < height; row++)
 {
     for (space = row; space < height; space++)
     {
             printf (" ");
     }
     for (hash = height - row ; hash < height; hash++)
     {
         printf ("#");
     }
     printf (" ");
     for (hash2 = height - row ; hash2 < height; hash2++)
     {
         printf("#");
     }
     printf("\n"); 
 }
}
