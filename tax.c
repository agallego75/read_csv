#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* getfield(char* line, char num)
{
	/* const char indicates char cant change */
    const char* tok;
    /* strtok: breaks strings using the delim*/
    for (tok = strtok(line, ",");
            tok && *tok;
            tok = strtok(NULL, ","))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

char main()


int data[10]
{
    FILE* stream = fopen("test.csv", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 2));
        // NOTE strtok clobbers tmp
        free(tmp);
    }
}
