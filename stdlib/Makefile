-include ../Makefile.config

#CC = clang
CC_OPT = -Wall -O3

default: libliml.a

.PHONY: libliml.a

SOURCES =\
	thread.c\
	array.c\
	print.c\
	math.c\
	string.c\
	share.c\
	debug.c

LML_SOURCES =\
	option.lml\
	pervasives.lml\
	array.lml \
	print.lml \
	string.lml \
	math.lml \
	thread.lml\
	share.lml\
	closure.lml\
	list.lml

OBJECTS = $(SOURCES:.c=.o)	

libliml.a: $(OBJECTS) $(LML_SOURCES)
	@rm -f libliml.a
	../compiler/limlc -no-stdlib $(LML_SOURCES) -lib libliml.lmli 
	$(AR) r libliml.a $(OBJECTS)

##############################################################################

%.o : %.c
	$(CC) $(CC_OPT) $(CC_ARCH) -c $<


###############################################################################

clean: 
	rm -f *.o *~ libliml.a \#*

