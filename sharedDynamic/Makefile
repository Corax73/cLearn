test: main.c
	gcc -c -fPIC libtest.c -o libtest.o
	gcc -shared -o libtest.so libtest.o
	gcc main.c -L. -ltest -o test