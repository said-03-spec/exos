#include <unistd.h>
#include <stdio.h>
#include <string.h>
void ft_is_negative(int n){
   if (n >= 0)
   {
    write(1, "P", 1);
   }
   else {
        write(1, "N", 1);
   }
   
}
int main()
{
    ft_is_negative(-9);

    return 0;
}   