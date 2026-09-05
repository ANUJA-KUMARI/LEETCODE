#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {

    int len = strlen(s);

    // If only one row, no zigzag is needed
    if (numRows == 1 || numRows >= len) {
        char* result = malloc((len + 1) * sizeof(char));
        strcpy(result, s);
        return result;
    }

    // Create an array of rows
    char** rows = malloc(numRows * sizeof(char*));

    for (int i = 0; i < numRows; i++) {
        rows[i] = malloc((len + 1) * sizeof(char));
        rows[i][0] = '\0';
    }

    int row = 0;
    int direction = 1;

    // Put every character into the correct row
    for (int i = 0; i < len; i++) {

        int currentLength = strlen(rows[row]);

        rows[row][currentLength] = s[i];
        rows[row][currentLength + 1] = '\0';

        // Change direction at top and bottom
        if (row == numRows - 1) {
            direction = -1;
        }
        else if (row == 0) {
            direction = 1;
        }

        row += direction;
    }

    // Create final result
    char* result = malloc((len + 1) * sizeof(char));
    result[0] = '\0';

    for (int i = 0; i < numRows; i++) {
        strcat(result, rows[i]);
        free(rows[i]);
    }

    free(rows);

    return result;
}

int main() {

    char s[] = "PAYPALISHIRING";
    int numRows = 3;

    char* result = convert(s, numRows);

    printf("%s\n", result);

    free(result);

    return 0;
}