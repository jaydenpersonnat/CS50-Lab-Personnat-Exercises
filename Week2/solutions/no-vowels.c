// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

string replace(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./novowels word\n");
        return 1;
    }

    // printf("%c\n", toupper('a'));
    printf("%s\n", replace(argv[1]));
}

// replaces vowels in string with numbers
string replace(string str)
{
    // iterate thru each character in string
    for (int i = 0; i < strlen(str); i++)
    {
        // if character is vowel, change char to number
        switch (toupper(str[i]))
        {
            case 'A':
            {
                str[i] = '6';
                break;
            }
            case 'E':
            {
                str[i] = '3';
                break;
            }
            case 'I':
            {
                str[i] = '1';
                break;
            }
            case 'O':
            {
                str[i] = '0';
                break;
            }
        }

    }
    return str;
}