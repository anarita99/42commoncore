char *ft_strncpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while(src[i] != '\0' && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    while(i < size)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
/* #include <stdio.h>
int main(void)
{
    unsigned int size = 2;
    char dest[100];
    char src[] = "HEllo";
    printf("%s\n", ft_strncpy(dest, src, size));
} */