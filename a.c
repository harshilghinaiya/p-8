#include <stdio.h>
#include<string.h>
int main() 
{
    char s[100];
    char *ptr;
    int length;

    printf("Enter any string: ");
    gets(s); 

    ptr = s;

    for (length = 0; *ptr != '\0' && *ptr != '\n'; ptr++, length++);

    printf("The length of a string is: %d\n", length);

}
/*
Enter any string: hello world
The length of a string is: 11
*/
