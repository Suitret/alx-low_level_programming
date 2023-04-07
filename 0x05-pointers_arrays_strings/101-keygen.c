#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 26

/**
 * main - entry point
 * Return: int
 */

int main()
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int rand_num = rand() % 62;
        if (rand_num < 26) {
            password[i] = 'A' + rand_num;
        } else if (rand_num < 52) {
            password[i] = 'a' + rand_num - 26;
        } else {
            password[i] = '0' + rand_num - 52;
        }
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s", password);

    return 0;
}
