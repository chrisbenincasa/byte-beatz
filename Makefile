all: $(patsubst src/%.c, %.out, $(wildcard src/*.c))

%.out: src/%.c
	gcc $< -o obj/$@
