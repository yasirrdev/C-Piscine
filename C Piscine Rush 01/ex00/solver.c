void    ft_print(int grid[4][4]);
int is_safe(int grid[4][4], int row, int col, char *clues);
int check_row(int grid[4][4], int row, char *clues);
int check_col(int grid[4][4], int col, char *clues);

int solve(int grid[4][4], char *clues, int row, int col)
{

    if( row == 4 ) //Significa que estamos en la ultima fila y esta todo correcto
    {
        ft_print(grid); // Imprimimos
        return 1; // Todo correcto
    }

    int num = 1;
    while (num <= 4)
    {

        if(is_safe(grid, row, col, clues))
        {    
            grid[row][col] = num;
            int next_row = row;
            int next_col = col + 1;

            if(col == 3 && !check_row(grid, col, clues))
            {
                grid[row][col] = 0;
                num++;
            }
            if(row == 3 && !check_col(grid, col, clues))
            {    
                grid[row][col] = 0;
                num++;
            }

        


            if(next_col == 4){
                next_col = 0;
                next_row++;
            }
            if(solve(grid, clues, next_row, next_col))
            {
                    return 1;
            }

            grid[row][col] = 0;
        }
        num++;
    }
    return 0;
}
