int count_visible_left(int grid[4][4], int row){
    int count = 0;
    int max = 0;
    int i = 0;

    while(i < 4)
    {
        if(grid[i][row] > max)
        {
            count++;
            max = grid[i][row];
        }
        i++;
    }
    return(count);
}
int count_visible_right(int grid[4][4], int row){
    int count = 0;
    int max = 0;
    int i = 3;

    while(i >= 0)
    {
        if(grid[row][i] > max)
        {
            count++;
            max = grid[row][i];
        }
        i--;
    }
    return(count);
}
int count_visible_up(int grid[4][4], int col)
{
    int count = 0;
    int max = 0;
    int i = 0;

    while(i < 4)
    {
        if(grid[i][col] > max)
        {
            count++;
            max = grid[i][col];
        }
        i++;
    }
    return(count);
}
int count_visible_down(int grid[4][4], int col){
    int count = 0;
    int max = 0;
    int i = 3;

    while(i >= 0)
    {
        if(grid[i][col] > max)
        {
            count++;
            max = grid[i][col];
        }
        i--;
    }
    return(count);
}