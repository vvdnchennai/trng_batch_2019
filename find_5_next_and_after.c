#include<stdio.h>

int check_next(int num) {
	if (num == 5)
		return 1;
	else
		return 0;
}



int main(void)
{
	int array[10], i, value = 0;
	printf("Enter the array numbers\n");
	for (i=0; i<10; i++) {
		printf("Enter element %d\n", i);
		scanf("%d", &array[i]);
	}
	printf("The array elements are \n");
	for (i=0; i<10; i++) {
		printf("%d \t", array[i]);
	}
	for (i=0; (i<9) && (value == 0); i++) {
		if (array[i] == 5)
			value = check_next(array[(i+1)]);
		if ((i!=8) && (value == 0))
			value = check_next(array[(i+2)]);
	}
	if (value == 1)
		printf("\nThe conditions are met in the array\n");
	else
		printf("\nThe array doesn't satisfies the condition\n");
	
	return 0;
}
			
