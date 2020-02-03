CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		nameSpace.o

LIBS =

TARGET =	nameSpace.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
