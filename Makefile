ABC.exe:main.o big2.o big3.o fab.o pall.o rev.o sort.o sum2.o fact.o oddoreven.o
	gcc -o ABC.exe main.o big2.o fact.o big3.o fab.o pall.o rev.o sort.o sum2.o oddoreven.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
big3.o:big3.c
	gcc -c big3.c
fab.o:fab.c
	gcc -c fab.c
pall.o:pall.c
	gcc -c pall.c
rev.o:rev.c
	gcc -c rev.c
sort.o:sort.c
	gcc -c sort.c
sum2.o:sum2.c
	gcc -c sum2.c
oddoreven.o:oddoreven.c
	gcc -c oddoreven.c
