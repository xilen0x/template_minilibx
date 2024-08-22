
#include "cub3d.h"
#include "window.h"

int	main(int ac, char *av[])
{
	t_game	game;

	(void)av;
	if (ac == 2)
	{
		init_game(&game);
		mlx_hook(game.mlx_win, X_EVENT_KEY_EXIT, 0, &exit_game, &game);
		mlx_loop(game.mlx);
	}
	else
		write(2, "Error...\n", 9);
	return (0);
}
