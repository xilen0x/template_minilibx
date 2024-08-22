
#include "cub3d.h"
#include "window.h"

// /*Funcion que inicializa minilibx, crea una ventana*/
void	init_game(t_game *game)
{
	game->mlx = mlx_init();
	if (!game->mlx)
		ft_errors("Error: mlx_init\n");
	game->mlx_win = mlx_new_window(game->mlx, 800, 600, "so_long or cub3D");
}

// /*Funcion que cierra la ventana y libera la memoria*/
int	exit_game(t_game *g)
{
	write (1, "####################\n", 21);
	write (1, "     End Game!\n", 15);
	write (1, "####################\n", 21);
	mlx_destroy_window(g->mlx, g->mlx_win);
	free(g->mlx);
	exit(0);
}

int	ft_errors(char *msg)
{
	write (2, "Error\n", 6);
	write (2, msg, ft_strlen(msg));
	exit(1);
}
