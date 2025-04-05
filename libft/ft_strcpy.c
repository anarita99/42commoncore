char	*ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
/* #include <stdio.h>

int main(void)
{
    char src[] = "Hello";
    char dest[] = " ";
    printf("%s\n", ft_strcpy(dest, src));
}
 */
