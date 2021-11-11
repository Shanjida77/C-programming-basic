#include<stdio.h>

void printInitials(char name[])
{
    char s[50];
    int p=0;
    for (int i = 0; i < strlen(name); i++)
    {

        if (name[i] != ' '){
            s[p]=name[i];
            p++;
    }
    else
    {
        s[p]='\0';
        s[0]=toupper(s[0]);

        if(name[i+1]=='\0')
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c",s[0]);
        }
        s[0]='\0';
    }
    }
}

int main()
{
    char name[50];
    printf("Enter name:");
    gets(name);
    printInitials(name);
    return 0;
}
