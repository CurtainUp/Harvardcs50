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

//     Prompt the user for text to be encrypted
//     
        char *plaintext = get_string("plaintext: ");
        
        printf("encrypted: ");
            
        for (i = 0; i < strlen(plaintext); i++){
            char c = plaintext[i];
            
            if (isupper(c))
            {
                char newC = (((c - 65) + validKey) % 26) + 65;
                printf("%c", newC);
            }
            else if(islower(c))
            {
                char newC = (((c - 97) + validKey) % 26) + 97;
                printf("%c", newC);
            }
            else
            {
                printf("%c", c);
            }
        }
        printf("\n");
       
}
