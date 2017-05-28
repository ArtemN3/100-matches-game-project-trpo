#include "progect.h"
#include "ctest.h"

CTEST(Getinput,input0matches0correct0){
	const int result = getinput(0,0,0);
	const int expected = 0;
	ASSERT_EQUAL(expected,result);
}
CTEST(Getinput,input2matches0correct1){
	const int result = getinput(2,5,1);
	const int expected = 1;
	ASSERT_EQUAL(expected,result);
}
CTEST(Getinput,input10matches10correct0){
	const int result = getinput(10,10,0);
	const int expected = 1;
	ASSERT_EQUAL(expected,result);
}