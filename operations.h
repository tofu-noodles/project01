#ifndef __OPERATIONS__H
#define __OPERATIONS__H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_MATRIX_ROWS				10
#define MAX_MATRIX_COLLUMNS			10

typedef struct Matrix {
	int num_rows;
	int num_collumns;
	int *entry;
} Matrix;

extern Matrix create_matrix(int row, int col, int *entries);

/*
 * Operations for matrices
 */
extern Matrix add(Matrix a, Matrix b);

extern Matrix dot_product(Matrix a, Matrix b);

extern Matrix transpose(Matrix a);

extern Matrix row_echelon_form(Matrix a);

extern Matrix reduced_row_echelon_form(Matrix a);


#endif // __OPERATIONS__H
