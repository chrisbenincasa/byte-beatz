all: $(patsubst %.c, %.out, $(wildcard *.c))

%.out: %.c
	gcc $< -o obj/$@
