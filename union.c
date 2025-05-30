#include<unistd.h>

int	ft_check_appeared(char *str, char c, int len)
{
    int i= 0;
    while(i < len)
    {
        if(str[i] == c)
            return (1);
        i++;
        }
        return(0);
    }
}

int	ft_check_appeared_other_string(char *str, char c)
{
	int i=0;
    while(str[i])
    {
        if


void ft_union(char *s1, char *s2)
{
    int i = 0;
    while(s1[i])
    

int main(int argc, char **argv)
{
	if(argc == 3)
    	ft_union(arg[1], arg[2]);
    else
        write(1, "\n", 1);
}