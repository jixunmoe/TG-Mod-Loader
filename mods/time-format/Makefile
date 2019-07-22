CC=gcc
CFLAGS?=-Wall -std=c11

MODS = mods/time-format

OBJS = \
	   src/main.o

OUT=../../bin/mods/time-format.dll

%.c: %.h

%.o: %.c
	$(CC) $(CFLAGS) -O2 -c -o $@ $<

$(OUT): $(OBJS)
	$(CC) -shared $(CFLAGS) -o $@ $^

strip: 
	strip $(OUT)

all: $(OUT) $(MODS)

release: $(OUT) strip

.PHONY: clean

clean:
	rm -f src/*.o $(OUT)
