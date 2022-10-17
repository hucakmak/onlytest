#include "string.h"
#include "stdio.h"


int kontrol(const char  *a, const char *b)
{
    size_t len;
    len = 0;

    while (b[len] == a[len])
        {
            printf("kontrolwhilegirdi\n");
            len++;
            if(b[len] == 0)
            {
                printf("kontrolet: 1\n");
                return (1);
            }

        }
    printf("kontrolet: 0\n");
    return (0);
}
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    i = 0;
    size_t j;
    j = 0;
    char * empty = (char*)"";
    if(haystack == empty)
        return (0);
    if(len == 0)
        return (0);
    while(haystack[i] != 0)
    {
        printf("1.while girdi\n");
        while (haystack[i+j] == needle[0])
        {
            printf("2. while girdi\n");
            if(kontrol(haystack + i, needle) == 1)
            {
                printf("if girdi\n");
                return (char*)(haystack + i);
            }
            j++;
        }
        i++;
    }
    printf("son returna geldi\n");
    return (char *)(haystack);
}

int main()
{
    char * empty = (char*)"";
    char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    printf("benim sonuç: %p \n",ft_strnstr(haystack,"cd",8));
    printf("sistem sonuç: %p \n",strnstr(haystack,"cd",8));

}
