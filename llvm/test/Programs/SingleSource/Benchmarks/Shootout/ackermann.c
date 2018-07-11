/* -*- mode: c -*-
 * $Id: ackermann.c,v 1.2 2002/01/22 15:20:21 lattner Exp $
 * http://www.bagley.org/~doug/shootout/
 */

int printf(const char *, int, int);
int atoi(const char *);

int 
Ack(int M, int N) {
    if (M == 0) return( N + 1 );
    if (N == 0) return( Ack(M - 1, 1) );
    return( Ack(M - 1, Ack(M, (N - 1))) );
}

int
main(int argc, char *argv[]) {
    int n = ((argc == 2) ? atoi(argv[1]) : 4);

    printf("Ack(3,%d): %d\n", n, Ack(3, n));
    return(0);
}

