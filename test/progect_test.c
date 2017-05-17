#include "func.h"
#include "ctest.h"

CTEST(PlayerTurn,3inputs90matches){
	const int result = player_turn(3,90);
	const int expected = 87;
	ASSERT_EQUAL(expected, result);
}
CTEST(PlayerTurn,9inputs5matches){
	const int result = player_turn(9,5);
	const int expected = -1;
	ASSERT_EQUAL(expected, result);
}
CTEST(CompTurn,15inputs5matches){
	const int result = Comp_turn(15,5);
	const int expected = -1;
	ASSERT_EQUAL(expected, result);
}
CTEST(CompTurn,5inputs5matches){
	const int result = Comp_turn(5,5);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}