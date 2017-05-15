CC = gcc
CFLAGS = -I src -c -Wall -Werror
EXECUTABLE = igra
SOURCES = main.c progect.c 
DIR = build
DAR = src
DUR = bin

all: $(DUR)/$(EXECUTABLE) #Testpr
$(DIR)/main.o: $(DAR)/main.c 
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)" ; mkdir build ; fi
	$(CC) $(CFLAGS) -c $(DAR)/main.c -o $(DIR)/main.o 

$(DIR)/progect.o: $(DAR)/progect.c
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)" ; mkdir build ; fi
	$(CC) $(CFLAGS) -c $(DAR)/progect.c -o $(DIR)/progect.o 

$(DUR)/$(EXECUTABLE): $(DIR)/main.o $(DIR)/progect.o
	@if [ ! -d $(DUR) ] ; then echo "creating $(DUR)" ; mkdir bin ;  fi
	$(CC) $(DIR)/main.o $(DIR)/progect.o -o $(DUR)/$(EXECUTABLE) 

.PHONY : clean
clean:
	rm -rf build/*.o  bin/* 
