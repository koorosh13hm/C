#include <stdio.h>
//#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter a name: ");
    scanf("%s", &name);

    int counter = 0;
    char selechar = name[counter];
    while (1)
    {
        selechar = name[counter];

        if (selechar == '\0')
        {
            break;
        }
        else
        {
            printf("Character %c: No. %d\n", selechar, counter + 1);
            counter++;
        }

    };

    printf("%s has %d characters.", name, counter);

    return 0;
//	return EXIT_SUCCESS;
}
