#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = atoi(argv[1]);
		switch (i)
		{
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;			
			case 5:
				printf("five ");
				break;
		}
		printf("\n");
	}
}


