CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		basicSalaryCalNetSal.o

LIBS =

TARGET =	basicSalaryCalNetSal.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
