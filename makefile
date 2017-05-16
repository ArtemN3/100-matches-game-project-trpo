CC = gcc
CFLAGS = -I lib -I src -c -Wall -Werror
EXECUTABLE = igra
SOURCES = main.c progect.c 
DIR = build/src
DAR = src
DUR = bin

EXECUTABLE_TEST = testik
SOURCES_TEST = progect_test.c main.c validation_test.c
DIT = build/test
DAT = test
DUT = bin

all: $(DUR)/$(EXECUTABLE) TEST
$(DIR)/main.o: $(DAR)/main.c 
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)" ; mkdir build ; mkdir build/src ; fi
	$(CC) $(CFLAGS) -c $(DAR)/main.c -o $(DIR)/main.o 

$(DIR)/progect.o: $(DAR)/progect.c
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)" ; mkdir build ; mkdir build/src ; fi
	$(CC) $(CFLAGS) -c $(DAR)/progect.c -o $(DIR)/progect.o 

$(DUR)/$(EXECUTABLE): $(DIR)/main.o $(DIR)/progect.o
	@if [ ! -d $(DUR) ] ; then echo "creating $(DUR)" ; mkdir bin ; fi
	$(CC) $(DIR)/main.o $(DIR)/progect.o -o $(DUR)/$(EXECUTABLE) 

TEST: $(DUR)/$(EXECUTABLE_TEST)
	$(DIT)/main.o: $(DAT)/main.c
	@if [ ! -d $(DIT) ] ; then echo "creating $(DIT)" ; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DAT)/main.c -o $(DIT)/main.o

$(DIT)/progect_test.o: $(DAT)/progect_test.c
	@if [ ! -d $(DIT) ] ; then echo "creating $(DIT)" ; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DAT)/progect_test.c -o $(DIT)/progect_test.o

$(DIT)/validation_test.o: $(DAT)/validation_test.c
	@if [ ! -d $(DIT) ] ; then echo "creating $(DIT)" ; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DAT)/validation_test.c -o $(DIT)/validation_test.o

$(DUR)/$(EXECUTABLE_TEST): $(DIT)/main.o $(DIT)/progect_test.o $(DIT)/validation_test.o $(DAR)/progect.o
	@if [ ! -d $(DUR) ] ; then echo "creating $(DUR)" ; mkdir bin; fi
	$(CC) $(DIT)/main.o $(DIT)/progect_test.o $(DIT)/validation_test.o $(DIR)/progect.o -o $(DUT)/$(EXECUTABLE_TEST)

	./$(DUR)/$(EXECUTABLE_TEST)


.Phony: clean
clean:
	rm -rf build/src/*.o build/test/*.o bin* 
