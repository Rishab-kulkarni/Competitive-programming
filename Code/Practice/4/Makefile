#the compiler - gcc/C or g++/C++
CC = g++

#compiler flags 
# -g adds debug info to the executable file
# -Wall for compiler warnings
# target should be generic

CFLAGS = -g -Wall -O2 -Wfatal-errors  -std=c++17
TARGET = a b c d e f g h

all : $(TARGET)
$(TARGET) : %: %.cpp
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	$(RM) $(TARGET)
	
	



