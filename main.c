#include <stdio.h>
#include <string.h>
#include "operations.h"

int *parse_string_matrix(char *matrix) {
	return null;
}

Matrix create_matrix(int row, int col, int *entries) {
	return null;
}

void print_matrix(Matrix m) {
	int rows = m.num_rows;
	int collumns =  m.num_collumns;
	char *row_str = (char *)malloc((collumns + 1) * sizeof(char));

	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < collumns; c++) {
			row_str[c] = *(m.entry + r*rows + c);
		}
		row_str[collumns] = '\0';
		printf("%s\n", row_str);
	}
}
/*
* >> ./main <operation> <operands>1..
* >> ./main add -m1 2 2 [[0,0],[1,1]] -m2 2 2 [[1,2],[2,1]]
* >> ./main transpose -m 2 2 [[0,0],[1,1]]
*/

int main(int argc, char **argv) {
    if (argc != 10 || argc != 6) {
        printf("Usage:\n\main <operation> <operands>\n");
        return 0;
    }
	
	if (strcmp(argv[1], "add") == 0) {
		Matrix a = create_matrix(argv[3], argv[4], parse_string_matrix(argv[5]));
		Matrix b = create_matrix(argv[7], argv[8], parse_string_matrix(argv[9]));
		Matrix result = add(a, b);
	} else if (strcmp(argv[1], "dot_product") == 0) {

	} else if (strcmp(argv[1], "transpose") == 0) {

	} else if (strcmp(argv[1], "row_echelon_form") == 0) {

	} else if (strcmp(argv[1], "reduced_row_echelon_form") == 0) {

	}

    return 0;
}

