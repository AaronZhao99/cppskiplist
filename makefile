main:main.o
	g++ -o main main.o

main.o:main.cpp skiplist.h
	g++ -c main.cpp

clean: 
	rm -f ./*.o
