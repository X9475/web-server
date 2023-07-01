PROJ   = ../bin/webserver
LPRJ   = ../lib/libweb.a
OBJS   = $(patsubst %.c, %.o, $(wildcard *.c))
LOBJ   = $(filter-out %main.o, $(OBJS)) 	#去除${OBJS}返回值中的 main.o
CC     = gcc
LINK   = gcc
AR     = ar rv
RM     = rm -rf
CFLAGS = -c -Wall
LIBS   = -lpthread

all: $(PROJ) $(LPRJ)

$(PROJ): $(OBJS)
		$(LINK) $^ $(LIBS) -o $@

$(LPRJ): $(LOBJ)
		$(AR) $@ $^

.c.o:
		$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(PROJ) $(LPRJ) $(OBJS)
