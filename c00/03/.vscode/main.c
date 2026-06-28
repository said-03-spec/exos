#include <unistd.h>

void ft_is_negative(int n)
{
    if (n >= 0){
        write(1, "P", 1);
    }
    else {
        write(1, "N",1);
    }
}
int main()
{
   char c ;
   write(1,"entrer un nomber ",18);
   read(0, &c, 1);
   ft_is_negative(c - '0');
    return 0;
}