all:main.c
	gcc main.c -o main.out
clean:
	rm -f main.out