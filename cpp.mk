OBJS		:= $(SRCS:.cpp=.o)

CXX		:= g++
LD		:= g++
RM		:= rm -rf

CXXFLAGS	:= -Wall -O0 -g
CXXFLAGS	+= $(EXTRA_CXXFLAGS)

LDFLAGS		:=
LDFLAGS		+= $(EXTRA_LDFLAGS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c -o $@ $<

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
