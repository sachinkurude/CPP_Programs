CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		subOfTwoNumbers.o

LIBS =

TARGET =	subOfTwoNumbers.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
