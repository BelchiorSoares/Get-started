#include <stdio.h>
#include <string.h>

int main(void)
{
    int myNum;
    char myChar;
    char firstName[30];
    char fullName[30];

    printf("Type a number: ");
    scanf("%d", &myNum);
    printf("Type a number AND a character and press enter: ");
    scanf("%d %c", &myNum, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);
    printf("Your character is: %c\n", myChar);

    // Entrada de uma unica palavra
   // printf("Enter your first name: ");
    //scanf("%s", firstName);

    // Entrada de varias palavras
    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);


    // Output the text
    printf("Hello %s", firstName);
    printf("Hello %s", fullName);
    return 0;
}
