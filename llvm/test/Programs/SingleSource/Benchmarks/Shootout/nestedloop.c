/* -*- mode: c -*-
 * $Id: nestedloop.c,v 1.1 2001/12/14 16:13:39 lattner Exp $
 * http://www.bagley.org/~doug/shootout/
 */

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[]) {
    int n = ((argc == 2) ? atoi(argv[1]) : 4);
    int a, b, c, d, e, f, x=0;
	
    for (a=0; a<n; a++)
	for (b=0; b<n; b++)
	    for (c=0; c<n; c++)
		for (d=0; d<n; d++)
		    for (e=0; e<n; e++)
			for (f=0; f<n; f++)
			    x++;

    printf("%d\n", x);
    return(0);
}


