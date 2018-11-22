CC = gcc
CFLAGS = -g -std=c99 -Wall -Wtype-limits -pedantic -Wconversion -Wno-sign-conversion 
VFLAGS = --leak-check=full --track-origins=yes --show-reachable=yes

CFILES = main.c comandos.c strutil.c procesamiento.c abb.c hash.c pila.c

HFILES = comandos.h strutil.h procesamiento.h abb.h hash.h pila.h
EXEC = pruebas

build: $(CFILES) 
	$(CC) $(CFLAGS)  -o $(EXEC) $(CFILES) 

run: build
	 ./$(EXEC) $(CARCH)

valgrind: build
	valgrind $(VFLAGS) ./$(EXEC) $(CARCH)
	
gdb: build
	gdb $(GDBFLAGS)./$(EXEC) $(CARCH) 

zip: build
	zip $(EXEC).zip $(CFILES) $(HFILES)

clean:
	rm -f *.o $(EXEC)
