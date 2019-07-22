CC=gcc
CFLAGS?=-Wall -std=c11

MODS = mods/time-format

OBJS = \
       src/export.o  \
	   src/main.o    \
	   src/patcher.o \
       src/key.o

OUT=bin/winmm.dll

%.c: %.h

%.o: %.c
	$(CC) $(CFLAGS) -O2 -c -o $@ $<

$(OUT): $(OBJS) export.def
	$(CC) -shared $(CFLAGS) -o $@ $^ export.def

strip: 
	strip $(OUT)

all: bin $(OUT) $(MODS)

bin:
	mkdir -p bin
	mkdir -p bin/mods

release: $(OUT) strip

.PHONY: clean
clean:
	rm -f src/*.o $(OUT)
