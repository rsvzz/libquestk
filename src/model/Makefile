all: stack.o queue.o
	clang -shared -o libquestk.so $^

#all: stack.o queue.o
#	ar rcs libquestk.a $^

#stack.o:
#	clang -fPIC -c stack.c

#queue.o:
#	clang -fPIC -c queue.c

stack.o:
	clang -c stack.c

queue.o:
	clang -c queue.c

check:
	ar t  libquestk.a
