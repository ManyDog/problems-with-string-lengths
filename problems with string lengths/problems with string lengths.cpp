// problems with string lengths.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char movie[20];
	char * pMovie = movie;

	fgets(pMovie, 20, stdin);
	puts(pMovie);
    return 0;
}

