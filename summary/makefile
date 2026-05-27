CC = gcc
CFLAGS = -Wall -Wextra -g

SRCS = main.c student.c
OBJS = $(SRCS:.c=.o)
TARGET = summary.out

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean