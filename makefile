myprogram: main.o
	clang -o myprogram main.o

main.o: main.c
	clang -c main.c

.PHONY: clean

clean:
	rm -f *.o myprogram
