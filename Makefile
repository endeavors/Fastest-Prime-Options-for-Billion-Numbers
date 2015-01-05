
HEADERS		= pamt2.h

C_SRCS		= is_prime.cpp main.cpp 

C_OBJS		= is_prime.o main.o

OBJS		= ${C_OBJS}

EXE		= isPrime


GCC		= g++

GCC_FLAGS	= -g -O3 -lpthread -c -Wall -std=c++11
LD_FLAGS	= -g -lpthread -Wall


.cpp.o:
	@echo "Compiling each C source file separately ..."
	$(GCC) $(GCC_FLAGS) $<
	@echo ""


$(EXE):	$(OBJS)
	@echo "Linking all object modules ..."
	$(GCC) -o $(EXE) $(LD_FLAGS) $(OBJS)
	@echo ""
	@echo "Done."

${C_OBJS}:      ${HEADERS}

clean:
	@echo "Cleaning up project directory ..."
	rm -f *.o $(EXE) *.ln core a.out
	@echo ""
	@echo "Clean."

new:
	make clean
	make

