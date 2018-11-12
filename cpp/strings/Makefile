CC := g++
RM := rm -f
CFLAGS := -Wall -pedantic -std=c++14
APP := strings_test

OBJS := strings.o

all: $(APP)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(APP): $(OBJS)
	$(CC) -o $@ $^ 

clean:
	$(RM) $(APP) $(OBJS)

.PHONY: all clean
