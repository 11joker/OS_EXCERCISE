//*****************************************************************************
// strcat.c : string function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stddef.h>

//=============================================================================
// append S to D
//=============================================================================
char* GO_strcat (char *d, char *s)
{
	char *tmp = d;

	while ('\0' != *d)
		d++;

	while ('\0' != *s)
		*d++ = *s++;

	*d = '\0';

	return tmp;
}
