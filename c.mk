OBJS		:= $(SRCS:.c=.o)

CC		:= gcc
LD		:= gcc
RM		:= rm -rf

CFLAGS		:= -Wall -O0 -g
CFLAGS		+= $(EXTRA_CFLAGS)

LDFLAGS		:=
LDFLAGS		+= $(EXTRA_LDFLAGS)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	$(LD) -o $@ $^ $(LDFLAGS)

test: $(TARGET)
	@if [ -f golden.txt ]; then \
		./$(TARGET) < input.txt > output.txt; \
		diff -uwN golden.txt output.txt; \
	else \
		./$(TARGET) < input.txt; \
	fi

clean:
	$(RM) $(TARGET)
	$(RM) $(OBJS)
	$(RM) *.bak *~
	$(RM) output.txt
