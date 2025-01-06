.PHONY: run compile clean
compile texteditor: main.o
	@gcc -o texteditor main.o
run: texteditor
	./texteditor $(ARGS)
main.o: main.c
	@gcc -c main.c
clean:
	rm -f *.o texteditor
