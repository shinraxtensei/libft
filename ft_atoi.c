#include"libft.h"
//#include<stdio.h>
int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result=0 ;
    while(str[i] <= 32)
        i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] =='+')
        i++;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            result = result * 10 +(str[i] - '0');
        else
            break;
            i++;
    }
return(result*sign);
}
/*int main ()
{
printf("%i \n",ft_atoi("---15s6"));
printf("%i",atoi("---15s6"));
}*/