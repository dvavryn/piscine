#ifndef FT_STOCK_H
# define FT_STOCK_H

typedef struct s_stock_str
{
	int		size;	// str_len *str
	char	*str;	// *str
	char	*copy;	// stcpy *str
}	t_stock_str;

#endif