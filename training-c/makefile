#build an executable named myprog from main.c
#make -f makeFile to build
#make -f makeFile clean to remove *.o
#make -f makeFile mrproper to remove all project + exe

all: myprog

myprog: utils.o main.o
	gcc -o myprog utils.o main.o 

#hello.o: hello.c
#	gcc -o hello.o -c hello.c -W -Wall -ansi -pedantic

utils.o: utils.c
	gcc -o utils.o -c utils.c -W -Wall -ansi -pedantic

main.o: main.c
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o

mrproper: clean
	rm -rf myprog
