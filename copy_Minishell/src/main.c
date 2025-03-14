#include "../include/minishell.h"

static char *get_input(t_main *ms, const char *prompt)
{
    char    *input;
    (void) prompt;
    input = readline (GREEN "╭─" RESET CYAN "[bocal@time7/] " RESET
			YELLOW "──►" RESET "\n" GREEN "╰─$ " RESET);
    if(input && input[0])
        add_history(input);
    else if (!input)
        exit_handler(ms, EXIT_MSG, 0);
    


}

