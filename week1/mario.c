#include <cs50.h>
#include <stdio.h>

int main(void)
{    
    int height;
        
    do
    {
        height = get_int("Height: ");
    }
    
    while (height < 1 || height > 8);
    
    for (int line = 1; line <= height; line++)
    {
        for (int spaces = height - line; spaces > 0; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 1; hashes <= line; hashes++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int hashes = 1; hashes <= line; hashes++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}
