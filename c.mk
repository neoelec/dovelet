OBJS		:= $(SRCS:.c=.o)

CC		:= gcc
LD		:= gcc
RM		:= rm -rf

CFLAGS		:= -Wall -O3
CFLAGS		+= $(EXTRA_CFLAGS)

LDFLAGS		:=
LDFLAGS		+= $(EXTRA_LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $^

test: $(TARGET)
	./$(TARGET) < input.txt

clean:
	$(RM) $(TARGET)
	$(RM) $(OBJS)
	$(RM) *.bak *~
