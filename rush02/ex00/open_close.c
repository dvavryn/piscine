// Write the whole dict one line after another
#include <fcntl.h> // open()
#include <unistd.h> // read(), close()
#include <stdio.h>

int main(void)
{
	int dict;

	dict = open("numbers.dict", O_RDONLY);
	if (dict == -1)
	{
		printf("Error opening file");
		return 1;
	}
	printf("File opened successfully!");
	close(dict);
	return 0;
}

