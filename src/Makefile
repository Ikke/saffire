.SILENT :

# Standard applications
BISON=bison
LEX=lex
CC=gcc
LD=gcc
RM=rm

# Additional inker libraries
LIBS =

# Standard flags for C compiler
INCLUDES  =
USR_FLAGS =
CFLAGS   = -std=gnu99 $(CC_DEBUG_FLAGS) $(INCLUDES) $(USR_FLAGS)

# Bison flags
BISON_FLAGS = -d $(BISON_DEBUG_FLAGS)

# Lex flags
LEX_FLAGS = $(LEX_DEBUG_FLAGS)

# Linker flags
LDFLAGS = $(LIBS) $(LD_DEBUG_FLAGS)


# Main target application
TARGET = saffire


all:
	echo "Usage: make <target>"
	echo 
	echo "Targets:"
	echo "  saffire   Build a complete build"
	echo "  debug     Build a debug build"
	echo "  clean     Clean temporary objects and files"
	echo "  test      Execute tests"

## Default make target
#saffire:	$(TARGET)

# Additional debug flags (will be added when "make debug")
debug: CC_DEBUG_FLAGS = -ggdb
debug: BISON_DEBUG_FLAGS = -v
debug: LEX_DEBUG_FLAGS = -d
debug: build


# Our objects that needs to be compiled
OBJS =	main.o \
	lex.yy.o \
	parser.tab.o \
	hashtable/hashtable.o

# Main target
saffire: $(OBJS)
	$(LD) $(LDFLAGS) -o $(TARGET) $(OBJS)

# depends on parser.tab.c (actually, parser.tab.h)
main.o:	lex.yy.c parser.tab.c

# Bison the parser from our saffire.y
parser.tab.c:
	echo [BISON] $@
	$(BISON) $(BISON_FLAGS) -o $@ saffire.y

# Lex our lexer from saffire.l
lex.yy.c: saffire.l
	echo [LEX] $<
	$(LEX) $(LEX_FLAGS) $<

# Compile .c files into .o objects
.c.o:
	echo [CC] $<
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean up old data
clean:
	echo [RM] $@
	$(RM) parser.tab.c parser.tab.h lex.yy.c || true
	$(RM) $(OBJS) || true
	$(RM) $(TARGET) || true

# run Tests
test: 
	./saffire tests/001.sf
	./saffire tests/002.sf
	./saffire tests/003.sf
