#ifndef MINISHELL_H
#define MINISHELL_H
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define YELLOW "\033[33m"
#define STR_PROMPT RESET CYAN "[bocal@time7/]" RESET YELLOW "──►" RESET
#define PROMPT GREEN "╭─" STR_PROMPT "\n" GREEN "╰─$ " RESET

#ifndef ERROR_MSG
#define ERROR_MSG "\033[1;32mERROR\n\033[0m"
#endif

# ifndef EXIT_MSG
#  define EXIT_MSG " "
# endif

# ifndef PROMPT_MSG
#  define PROMPT_MSG PROMPT
# endif

# ifndef INVALID_USAGE
#  define INVALID_USAGE "invalid usage"
# endif

# ifndef SEP
#  define SEP -1
# endif

#include <readline/history.h>
#include <readline/readline.h>
#include <signal.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <unistd.h>
#include "../libft/header/libft.h"

typedef struct s_token
{
    char            *cmd;
    int             type;
    struct s_token  *next;
    struct s_token  *prev;

}   t_token;

typedef struct s_main
{
    char        *input;
    char        *prompt;
    char        **envp;
    t_token     *token;
    char        error;
    char        exit;
} t_main;

typedef struct s_expand
{
    char        **hold_str;
    int         ex;
    int         start;
    int         end;

    int         quotes;
    int         ex_n;
    int         i;
} t_expand;

typedef struct s_executor
{
    t_token     *temp;
    char        **cmd;
    int         **fd;
    int         status;
    pid_t       *pit;
    int         n_pros;
}   t_executor;










#endif