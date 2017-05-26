#include "progect.h"
#include "ctest.h"
#include <stdio.h>

CTEST(PlayerTurn,3inputs90matches){
	const int result = player_turn(3,90,1);
	const int expected = 87;
	ASSERT_EQUAL(expected, result);
}

CTEST(PlayerTurn,9inputs5matches){
	const int result = player_turn(9,5);
	const int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(CompTurn,5inputs60)
{
	int input = 5;
	const int result = Comp_turn(&input,60);
	const int expected = 55;
	ASSERT_EQUAL(expected, result);
}

CTEST(CompTurn,10inputs100matches)
{
    int input =10;
	const int result = Comp_turn(&input,100);
	const int expected = 90;
	ASSERT_EQUAL(expected, result);
}