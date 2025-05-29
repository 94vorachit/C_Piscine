#include <unistd.h>

void	ft_last_word(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    	i++;
    i--;
    while(str[i] == ' ' || str[i] == '\t')
    	i--;
    while(i>0 && str[i] != ' ' && str[i] != '\t')
    	i--;
    i++;
    while(str[i] != ' ' && str[i] != '\t' && str[i])
    {
    	write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
    if(argc == 2)
    	ft_last_word(argv[1]);
    else
    	write(1, "\n", 1)
}