#include<stdio.h>
#include<string.h>
 
// Funtion removing spaces from string
char  *removespace(char *string)
{
    int non_space_count = 0;
 
   
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')
        {
            string[non_space_count] = string[i];
            non_space_count++;
        }    
    }
    
    //Finally placing final character at the string end
    string[non_space_count] = '\0';
    return string;
}
 
int main()
{
    char string[100];
    printf("Enter the string :");
	gets(string);
    printf("%s",strrev(removespace(string)));

    return 0;
}
