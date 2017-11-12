CC  = g++
OBJ = Population.o Chromosome.o Gene.o main.o Algorithme.o 

all : $(OBJ)
	$(CC) -Wall $(OBJ) -o projet.exe

main.o : main.cc header/Gene.h header/Chromosome.h header/Population.h
	$(CC) -c main.cc

Gene.o : source/Gene.cc header/Gene.h
	$(CC) -c source/Gene.cc

Chromosome.o : source/Chromosome.cc header/Chromosome.h
	$(CC) -c source/Chromosome.cc

Population.o : source/Population.cc header/Population.h
	$(CC) -c source/Population.cc

Algorithme.o : source/Algorithme.cc header/Algorithme.h
	$(CC) -c source/Algorithme.cc

clean :
	rm -f *~ *.o
