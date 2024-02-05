#include<stdio.h>
#include<string.h>

int main()
{
            char str1[100];
            char str2[100];
                                                                                                                         

            printf("Enter the first string: ");
            gets(str1);

            printf("Enter the second string: ");
            gets(str2);

               int i = 0;
               int areEqual = 1;

               while(str1[i] != '\0' || str2[i] != '\0')
               {
                   if(str1[i] != str2[i])
                      {
                                 areEqual = 0;
                                      break;
                      }
                              i++;
               }
                  
                  if(areEqual)
                     {
                              printf("The two strings are exactly equal.\n");
                     }
                  else
                     {                 
                              printf("The two strings are not equal.\n");
                     }
                        return 0;
}