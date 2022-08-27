// =================================================================
//
// File: activity.h
// Author: Diego Iturbe Bravo - A01708272
// Date: 25/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int contador = 0;
	int suma=0;
	while (contador<n){
		contador ++;
		suma=suma + contador;
	}
	return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	int suma = 0;
	if (0 == n){
		return suma;
	}
	else {
		suma = suma + n;
		return (sumaRecursiva(n-1)+ suma);
	}
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int sum=(n*(n+1))/2;
	return sum;
}

#endif /* ACTIVITY_H */
