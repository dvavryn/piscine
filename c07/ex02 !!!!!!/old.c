/*
			Create a function ft_ultimate_range which allocates and assigns an array of ints.
			This int array should contain all values between min and max.
		
		•	Min included - max excluded.
		
		• 	Here’s how it should be prototyped :
				int ft_ultimate_range(int **range, int min, int max);
		
		•	The size of range should be returned (or -1 on error).
		
		• 	If the value of min is greater or equal to max’s value, range will point on NULL
			and it should return 0.

*/

//	For function
#include <stdlib.h>


//	For main
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int min = 1;
	int max = 20;
	int *arr = NULL;
	int *pttoarr = &arr;

	int ret = ft_ultimate_range(pttoarr, min, max);
	printf("size of array is %i", ret);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min > max)
	{
		*range = NULL;
		return (0); 
	}
	*range = malloc((max - min) * sizeof(int));

	if (!range)
		return -1;
	return (sizeof(range));
}