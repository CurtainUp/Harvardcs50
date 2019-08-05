#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char c);

int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Usage: ./vigenere keyword\n");
    }
    
    //     Check that each char in key is a letter
    
    string keyword = argv[1];
    int i = 0;

    while (i < strlen(keyword)) {
        if (isalpha(keyword[i])) {
            i++;
        } else {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    
//     Prompt the user for text to be encrypted
    
        char *plaintext = get_string("plaintext: ");
    
        printf("encrypted: ");
    
            for (i = 0; i < strlen(plaintext); i++){
                char c = plaintext[i];
                
                if (isupper(c))
                {
                    char newC = (((c - 65) + shift(keyword[i % strlen(keyword)])) % 26) + 65;
                    printf("%c", newC);
                }
                else if(islower(c))
                {
                    char newC = (((c - 97) + shift(keyword[i % strlen(keyword)])) % 26) + 97;
                    printf("%c", newC);
                }
                else
                {
                    printf("%c", c);
                }
            }
            printf("\n");
}

// Function for finding the char int of each letter in the keyword. This becomes the number that is added to the plaintext for encryption

int shift(char c) {
    if (isupper(c)) {
            int keyC = ((c - 65) % 26);
            return keyC;
    }
    else if (islower(c)) {
            int keyC = ((c - 97) % 26);
            return keyC;
    }
    return 0;
}
