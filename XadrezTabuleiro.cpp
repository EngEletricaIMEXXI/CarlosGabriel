#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int r, i, j;
	char* string[8][8];

	string[0][0] = "RB"; string[0][1] = "HB"; string[0][2] = "BB"; string[0][3] = "QB";
	string[0][4] = "KB"; string[0][5] = "BB"; string[0][6] = "HB"; string[0][7] = "RB";
	string[7][0] = "RW"; string[7][1] = "HW"; string[7][2] = "BW"; string[7][3] = "QW";
	string[7][4] = "KW"; string[7][5] = "BW"; string[7][6] = "HW"; string[7][7] = "RW";

	for (i = 1; i<7; i++) {
		for (j = 0; j<8; j++) {
			if (i == 1) {
				string[i][j] = "PB";
			}
			else if (i == 6) {
				string[i][j] = "PW";
			}
			else {
				string[i][j] = "  ";
			}
		}
	}

		for (i = 0; i<8; i++) {
			r = i % 2;
			printf("|------|------|------|------|------|------|------|------|\n");

			if (r == 0) {
				printf("|W     |B     |W     |B     |W     |B     |W     |B     |\n");
			}
			if (r == 1) {
				printf("|B     |W     |B     |W     |B     |W     |B     |W     |\n");
			}

			for (j = 0; j<8; j++) {
				printf("|  %s  ", string[i][j]);
			}
			printf("|\n");

			i = i++;
		}

	printf("|------|------|------|------|------|------|------|------|\n");

	return 0;
}
