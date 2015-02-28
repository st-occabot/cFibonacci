#include <stdio.h>

// Class to output the fibonacci sequence via the C programming language.
// Made this for the lulz. - occabot

int main(int argc, char *argv[]) {
	int sequenceSize;
        int firstValue = 1;
	int secondValue = 1;
	
	//Grabs the amount of values of the sequence to print out
	printf("Please enter how many values of the fibonacci sequence you would like: ");
	scanf("%d", &sequenceSize);
	//printf("You entered: %d.\n", sequenceSize);

	//Print out values until the size inputted has been reached
	for (int count = 0; count < sequenceSize; count++) {
		//Print out 1 for the first 2 values of the sequence
		if (count == 1) {
			printf("1 "); 
		} else if (count == 2) {
			printf("1 ");
		} else {	
		}
	}

	return 0;
}
