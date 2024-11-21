/*Nandha is learning programming and wants to write a program to reverse a given string. 



Help him write a program that takes a string as input and outputs its reverse.

Input format :
The input consists of a string.

Output format :
The output displays the reversed string on a single line.

*/

#include <stdio.h>
int main()
{
    int i,len=0;
    char str[50];
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
        len++;
    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);
    
    return 0;
}
