#include <stdio.h>
#include <string.h>
int main()
{
    char email[100];
    int i;
    printf("Enter email:");
    scanf("%s",&email);
    for(i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
        {
            break;
        }
        printf("%c",email[i]);
    }
    return 0;
}