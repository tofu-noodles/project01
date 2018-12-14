#include "operations.h"

Matrix add(Matrix a, Matrix b) {
	if (a.num_rows != b.num_rows || a.num_collumns != b.num_collumns) 
		return NULL;

	int rows = a.num_rows;
	int collumns = a.num_collumns;
	int *result = (int *)malloc(collumns * rows * sizeof(int));

	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < collumns; c++) {
			*(result + r*rows + c) = *(a.entry + r*rows + c) + *(b.entry + r*rows + c);
			// result[r*rows + c]
		}
	}

	return create_matrix(rows, collumns, result);
}

Matrix dot_product(Matrix a, Matrix b) {
	return NULL;
}

Matrix transpose(Matrix a) {
	return NULL;
}

Matrix row_echelon_form(Matrix a) {
	return NULL;
}

Matrix reduced_row_echelon_form(Matrix a) {
	return NULL;
}
