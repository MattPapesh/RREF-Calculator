SRC_DIR := \src
SRCS := $(wildcard *.cpp) $(wildcard **/*.cpp)
SRC_OBJS := $(subst src/,, $(subst .cpp,.o, $(SRCS)))

all: Main

Main: $(SRC_OBJS)
	g++ $(SRC_OBJS) -o Main

$(SRC_OBJS): $(SRCS)
	g++ -c $(SRCS)

clean:
	del *.o
	del Main.exe

doxygen:
	doxygen
	xcopy .\html ..\..\..\public_html\RREF_Calculator\html /s /e