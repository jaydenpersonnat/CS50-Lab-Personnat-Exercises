// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool contains_upper = false;
    bool contains_lower = false;
    bool contains_number = false;
    bool contains_symbol = false;

    // iterate through each char in password
    for (int i = 0; i < strlen(password); i++)
    {
        // check for uppercase, lowercase, number, and symbol
        if (isupper(password[i]))
        {
            contains_upper = true;
        }
        else if (islower(password[i]))
        {
            contains_lower = true;
        }
        else if (isdigit(password[i]))
        {
            contains_number = true;
        }
        else
        {
            contains_symbol = true;
        }
    }

    // if string contains each element return false
    if (contains_upper && contains_lower && contains_number && contains_symbol)
        return true;

    return false;

}
