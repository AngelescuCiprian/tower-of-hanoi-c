#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int moveCount = 0; // num?r? totalul mut?rilor

void towerOfHanoi(int n, char fromRod, char toDestinationRod, char auxRod)
{
	if (n == 1)
	{
		moveCount++;
		printf("Step %d: Move disk 1 from rod %c to rod %c\n", moveCount, fromRod, toDestinationRod);
		return;
	}
	towerOfHanoi(n - 1, fromRod, auxRod, toDestinationRod);
	moveCount++;
	printf("Step %d: Move disk %d from rod %c to rod %c\n", moveCount, n, fromRod, toDestinationRod);
	towerOfHanoi(n - 1, auxRod, toDestinationRod, fromRod);
}

int main()
{
	int n;
	char s, d, aux;

	printf("Enter the letter for the source rod: ");
	scanf(" %c", &s);

	printf("Enter the letter for the destination rod: ");
	scanf(" %c", &d);

	printf("Enter the letter for the auxiliary rod: ");
	scanf(" %c", &aux);

	printf("Enter the number of disks: ");
	scanf("%d", &n);

	printf("\nSteps to solve Tower of Hanoi:\n\n");
	towerOfHanoi(n, s, d, aux);

	printf("\nTotal number of moves: %d\n", moveCount);

	return 0;
}
