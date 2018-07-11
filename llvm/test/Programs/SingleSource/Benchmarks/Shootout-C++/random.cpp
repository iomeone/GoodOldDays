// -*- mode: c++ -*-
// $Id: random.cpp,v 1.1 2003/10/07 01:11:33 lattner Exp $
// http://www.bagley.org/~doug/shootout/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

#define IM 139968
#define IA 3877
#define IC 29573

inline double gen_random(double max) {
    static long last = 42;
    last = (last * IA + IC) % IM;
    return( max * last / IM );
}

int main(int argc, char *argv[]) {
    int N = ((argc == 2) ? atoi(argv[1]) : 1);
    double result = 0;
    
    while (N--) {
	result = gen_random(100.0);
    }
    cout.precision(9);
    cout.setf(ios::fixed);
    cout << result << endl;
    return(0);
}

