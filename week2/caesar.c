#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
//     Checks number of arguments passed in commant line. 
//     Expected: ./caesar (desired key)

    if (argc != 2) {
        printf("Usage: ./caesar key\n");
    } 
    
//     Check that each char in key is a decimal digit
    
        string keyInput = argv[1];
        int i = 0;
        
        while (i < strlen(keyInput)) {
            if (isdigit(keyInput[i])) {
                i++;
            } else {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
//     Once key is validated, convert to integer and give feedback to user
    
        int validKey = atoi(keyInput);
        printf("Success\n%i\n", validKey);
}

