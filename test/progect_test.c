#include "progect.h"
#include "ctest.h"
#include <stdio.h>

CTEST(PlayerTurn,3inputs90matches)
{
	const int result = player_turn(3,90,1);
	const int expected = 87;
	ASSERT_EQUAL(expected, result);
}

CTEST(PlayerTurn,9inputs5matches)
{
	const int result = player_turn(9,5);
	const int expected = -1;
	ASSERT_EQUAL(expected, result);
}
CTEST(PlayerTurn,9inputs9matches)
{
	const int result = player_turn(9,9);
	const int expected = -1;
	ASSERT_EQUAL(expected, result);
}
CTEST(CompTurn,10inputs5matches)
{
	int input = 10;
	const int result = Comp_turn(&input,25);
	const int expected = 15;
	ASSERT_EQUAL(expected,result);
}

CTEST(CompTurn,0inputs10matches)
{
	int input = 0;
	const int result = Comp_turn(&input,10);
	const int expected = 10;
	ASSERT_EQUAL(expected,result);
}

CTEST(CompTurn, 100inputs100matches)
{
	const int result = player_turn(100,100,0);
	const int expected = -1;
	ASSERT_EQUAL(expected,result);
}