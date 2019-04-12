#include <stdio.h>

int stringCompare(char mj1[], char mj2[]);
int main()
{
    char aj1[100], aj2[100];
    int compare;

    printf("Enter 1st string: ");
    scanf("%s", aj1);

    printf("Enter 2nd string: ");
    scanf("%s", aj2);

    compare = stringCompare(aj1, aj2);  
    
    if(compare == 1)
        printf("Strings' length are equal");
     else
        printf("1 string bigger than 2");

    return 0;

}

int stringCompare(char mj1[], char mj2[])  
{
    int i = 0, flag = 0;
    while(mj1[i] != '\0' && mj2[i] != '\0') 
    {
        
        if(mj1[i] != mj2[i]) 
        {
            flag = 1;
            break;
        }
        i++;
    }

   
    if(flag == 0 && mj1[i] == '\0' && mj2[i] == '\0')
        return 1;
    else
        return 0;
}
