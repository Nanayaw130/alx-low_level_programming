#include <string.h>
char *_strcat(char *dest, char *src);

char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return dest;
}

