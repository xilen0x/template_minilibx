
#ifndef CUB3D_H
# define CUB3D_H

# include "window.h"
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "mlx.h"


typedef struct s_game
{
	void	*mlx;
	void	*mlx_win;
}	t_game;

void	init_game(t_game *game);
int		exit_game(t_game *g);
int		ft_errors(char *msg);

#endif
