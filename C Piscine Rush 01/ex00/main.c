#include <unistd.h>
#include <stdlib.h>

char    *read_arguments(char *arguments);
int solve(int grid[4][4], char *clues, int row, int col);

int     main(int argc, char **argv)
{
    char* headers ;
    
    headers = read_arguments(argv[1]);

    int grid[4][4] = {0};

    if(!read_arguments(argv[1]) || argc != 2)
    {
        write(1, "Error: Too few o too many arguments!\n", 30);
        return 1;
    }
    /*
    if (!solve(grid, headers, 0, 0))
    {
        write(1, "Error: Imposible to print!\n", 30);
    }
    */
    int result;
    result = solve(grid, headers, 0, 0);
    write(1, &result, 1);
    free(headers);
    return(0);
}