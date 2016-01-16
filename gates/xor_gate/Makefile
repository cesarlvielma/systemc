#-----------------------------------------------------------------------------------------
# Makefile model to compile design files coding using SystemC library
#----------------------------------------------------------------------------------------

# .cpp files
SRCS = xor_gate.cpp testbench.cpp main.cpp

# executable name
TARGET = xor_gate

# SystemC folder name
SYSTEMC = /usr/lib/systemc-2.3.1

INCDIR = -I. -I.. -I$(SYSTEMC)/include
LIBDIR = -L. -L.. -L$(SYSTEMC)/lib-linux64
LIBS   = -lsystemc -lm

CC     = g++
CFLAGS = -g -Wno-deprecated -Wall
OBJS   = $(SRCS:.cpp=.o)


EXE    = $(TARGET)

.SUFFIXES: .cpp .o  

$(EXE): $(OBJS) $(SRCH)  
	$(CC) $(CFLAGS) $(INCDIR) $(LIBDIR) -o $@ $(OBJS) $(LIBS) 2>&1 | c++filt

all: $(EXE)
	
.cpp.o:
	$(CC) $(DEBUG) $(CFLAGS) $(INCDIR) -c $<

clean:
	rm -f $(OBJS) *~ $(EXE) *.bak $(TARGET).stackdump *.vcd
