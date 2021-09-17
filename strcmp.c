#include <stdio.h>

int strcm(char str1[], char str2[])
{
    return (*str1 == '\0' && *str2=='\0' ? 0 : *str1 ==*str2 ? strcm(++str1, ++str2) : (*str1-*str2)) ; 
}

int main()
{
     int res ;
     char str1[] = "gfg";
     char str2[] = "gfga";
     res = strcm(str1, str2);
     
     if (res==0)
        printf("Strings are equal");
    else 
        printf("Strings are unequal");
      
    printf("\nValue returned by strcmp() is:  %d" , res);
    return 0;
    

    return 0;
}
