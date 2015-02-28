#include <stdio.h>

// Class to output the fibonacci sequence via the C programming language.
// Made this for the lulz. - occabot

int main(int argc, char *argv[]) {
	int sequenceSize, currentValue;
        int firstValue = 1;
	int secondValue = 1;
	
	//Grabs the amount of values of the sequence to print out
	printf("Please enter how many values of the fibonacci sequence you would like: ");
	scanf("%d", &sequenceSize);
	
	//Prevents integer overflows or sequences less than at least 1.
	while ((sequenceSize < 1) || (sequenceSize > 46)) {
		printf("Incorrect value! Please enter a number between 1 and 46 inclusive: ");
		scanf("%d", &sequenceSize);
	}

	//Print out values until the size inputted has been reached
	for (int count = 0; count < sequenceSize; count++) {
		if (count == 0) { //Prints out 1 for the first value of the sequence
			printf("1 "); 
		} else if (count == 1) { //Prints out 1 for the second value
			printf("1 ");
		} else { // Prints out the next value of the sequence
			currentValue = firstValue + secondValue; // The next value is the previous two added together
			printf("%d ", currentValue); // Prints out the combined value
			firstValue = secondValue; // firstValue becomes the value before currentValue
			secondValue = currentValue; // secondValue becomes the next value in the sequence
		}
	}

	return 0;
}
