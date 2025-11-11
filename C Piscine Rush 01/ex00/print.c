#include <unistd.h>
void    ft_print(int grid[4][4])
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(i < 4)
    {
        j = 0;
        while(j<4)
        {
            write(1, &grid[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}