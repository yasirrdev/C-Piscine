int count_visible_left(int grid[4][4], int row);
int count_visible_right(int grid[4][4], int row);
int count_visible_up(int grid[4][4], int col);
int count_visible_down(int grid[4][4], int col);


int check_row(int grid[4][4], int row, char *clues)
{
    int left; 
    int right;

    left = clues[row] - '0';
    right= clues[4 + row] - '0';

    int left_visible;
    int right_visible;

    left_visible = count_visible_left(grid, row);
    right_visible = count_visible_right(grid, row);

    if(left_visible != left || right_visible != right)
        return 0; //No cumple
    return 1; //Cumple
}

int check_col(int grid[4][4], int col, char *clues)
{
    int up;
    int down;

    up = clues[col] - '0';
    down = clues[4 + col] - '0';

    int up_visible;
    int down_visible ; 
    
    up_visible = count_visible_up(grid, col);
    down_visible = count_visible_down(grid, col);;
    
    if(up_visible != up || down_visible != down)
        return 0; //No cumple
    return 1; //Cumple
}

int is_safe(int grid[4][4], int row, int col, char *clues)
{
    int result_row; 
    int result_col;

    result_row = check_row(grid, row, clues);
    result_col = check_col(grid, col, clues);

    if(result_row == 1 && result_col == 1)
        return 1; // Todo correcto.
    
    return 0; // Incorrecto, volver a checkear hasta que sea 1
}