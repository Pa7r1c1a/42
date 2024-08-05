#include <unistd.h>

// Fonction pour écrire un caractère sur la sortie standard
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// Fonction pour vérifier si la position est sûre pour placer une dame
int     is_safe(int board[10], int row, int col)
{
    int i;

    i = 0;
    while (i < col)
    {
        if (board[i] == row || i - board[i] == col - row || i + board[i] == col + row)
            return (0);
        i++;
    }
    return (1);
}

// Fonction récursive pour résoudre le puzzle
void    solve(int board[10], int col, int *solutions)
{
    int i;

    if (col == 10)
    {
        i = 0;
        while (i < 10)
        {
            ft_putchar(board[i] + '0');
            i++;
        }
        ft_putchar('\n');
        (*solutions)++;
        return ;
    }
    i = 0;
    while (i < 10)
    {
        if (is_safe(board, i, col))
        {
            board[col] = i;
            solve(board, col + 1, solutions);
        }
        i++;
    }
}

int	ft_ten_queens_puzzle(void)
{
	int board[10];
	int solutions;

	solutions = 0;
	solve(board, 0, &solutions);
	return(solutions);	
}

int	main(void)
{
	ft_ten_queens_puzzle();
	return(0);
}
