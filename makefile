diff: diff.o
	gcc -o diff diff.o
diff.o: diff.c header.h
	gcc -c diff.c