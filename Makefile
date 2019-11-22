CC = gcc
CPPFLAGS = -W -Wall
TARGET = Push_BOX
SOURCES = Push_BOX.cpp\
	levList.cpp
	
LDPFLAGS= -lncurses

all:
	$(CC) $(SOURCES) -o $(TARGET) $(LDPFLAGS) $(CPPFLAGS)
clean:
	rm -rk *.o $(TARGET)



