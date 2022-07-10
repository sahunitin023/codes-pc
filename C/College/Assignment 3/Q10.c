/* Q10) Read the age of a candidate and determine whether it is eligible for
casting his/her own vote.*/

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else
    {
        printf("Sorry, You are not eligible to vote.");
    }

    return 0;
}