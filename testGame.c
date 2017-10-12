#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main (int argc, char *argv[]) {

	printf ("Hello and welcome to GROUP_NAME's Game ADT tests!\n");

	// Call your various tests here.

	// So far, we just have the one test:
	basicCurrentPlayerAndTurn ();

	printf ("All tests passed, you are Awesome!\n");

	return EXIT_SUCCESS;
}
	value values[50];
	suit suits[50];
	color colors[50];

	int i = 0;
	while (i < 50) {
		values[i] = 1;
		suits[i] = CLUBS;
		colors[i] = BLUE;
		i++;
	}

    // We now have our arrays prepared, time to make a new game!
    Game game = newGame (50, values, colors, suits);
