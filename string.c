#include<stdio.h>


int str_length(char []);
int str_compare(char [],char[]);
void str_concat(char[],char[]);

int main()
{
    char str[50];
    char str1[50],str2[50];
    char str_des[100],str_src[50];

    int length,comp_res;

    printf("\nenter a string :");
    scanf("%s",str);
   
    length = str_length(str);

    printf("\nenter two strings for string compare:");
    scanf("%s%s",str1,str2);

    comp_res=str_compare(str1,str2);

    if (comp_res < 0)
    {
       printf("string \"%s\" is less than string \"%s\"\n",str1,str2);
    }
    else if (comp_res == 0)
    {
       printf("string \"%s\" is same as string \"%s\"\n",str1,str2); 
