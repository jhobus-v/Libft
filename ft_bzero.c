/*#include <stdio.h>*/

void    ft_bzero(void *s, size_t n)
{
    size_t  bolsonaro;
    
    bolsonaro = 0;
    unsigned char *lula = s;
    while (bolsonaro < n)
    {
        lula[bolsonaro] = 0;
        bolsonaro++;
    }
    return (lula);
}

/*int main(void)
{
    char fazol[] = "Gripezinha";
    ft_bzero(fazol, 4);
    printf("%s", fazol);
    return (0);
    }*/
