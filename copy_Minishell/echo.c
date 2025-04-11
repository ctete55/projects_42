#include<unistd.h>
#include<stdio.h>

typedef struct t_main
{
    char    *var;
    int     i;
} t_main;


void    ft_echo(t_main *ms, char **cmd)
{
    int     i;
    int     j;
    char   new_line;
    while(cmd && cmd[i] && !ft_strncmp(cmd[i], "-n", 2))
    { 
        new_line = 1;
        i = 1;
        while(cmd[i][j] == 'n')
            j++;
        if(cmd[i][j] != '\0')
            break ;
        new_line = 0;
        i++;
    }
    while(cmd && cmd[i])
    {
        printf("%s", cmd[i]);
        if(new_line)
            ft_putchar(' ', 1);
    }
    if(new_line)
        ft_printf("\n");
    ms -> error = 0; 
    


}