all: Main

Main: Main.o
	gcc Main.o -o Main

Main.o: Main.cpp
	gcc -c Main.cpp 

clean:
	del *.o
	del Main.exe

doxygen:
	doxygen
	xcopy .\html ..\..\..\public_html\RREF_Calculator\html /s /e