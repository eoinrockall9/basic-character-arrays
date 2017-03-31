// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <string.h>



void main()
{
	char string1[] = "9rWLK0gFoHZqNIj3DMkR";
	char string2[] = "q405IHl0sOx5BrmDTeoh";
	char string3[] = "95EkdriUzNFQTP5vuhR3";
	int i = 0;
	int x = 0; 
	int y = 0;
	int z = 0;
	

	printf("\nBEFORE:\n");
	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);
	printf("string3 = %s\n\n",string3);
	printf("AFTER:\n");

	for (i = 0; i < 20; i++)
	{
		if (string1[i] >= '0' && string1[i] <= '9')
		{
			string1[i] = ' ';
			x++;
		}
	}
	printf("string1 = %s  <%d digits replaced>\n", string1, x);

	for (i = 0; i < 20; i++)
	{
		if (string2[i] >= 'A' && string2[i] <= 'Z')
		{
			y++;
		}
	}
	_strlwr_s(string2);
	printf("string2 = %s  <%d characters converted to lowercase>\n", string2, y);

	for (i = 0; i < 20; i++)
	{
		if (string3[i] >= 'a' && string3[i] <= 'z')
		{
			z++;
		}
	}
	_strupr_s(string3);
	printf("string3 = %s  <%d characters converted to UPPERCASE>\n\n", string3, z);

}

