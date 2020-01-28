CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Test_Program.o

LIBS =

TARGET =	Test_Program.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
