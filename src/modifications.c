#include <modifications.h>

void modificationmenu()
{
	bool finished = false;

	printf("Menu Launched:");

	while (finished == false)
	{
		int choice = 0;

		printf("Choose options:\n");
		printf("1 - ARP Flooding\n");
		printf("0 - Close Menu\n");

		if (choice == 0)
		{
			finished = true;
		}
	}

	return 0;
}