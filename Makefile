CC = cc
LIBS = -ll
LEX = lex
YACC = yacc
CFLAGS = -DYYDEBUG=1
TARGET_LEX = example
TARGET_PARS = example
EXEC = result
.PHONY: run
.PHONY: clean


all: ${EXEC}
${EXEC}: y.tab.c lex.yy.c
	$(CC) -o ${EXEC} y.tab.c lex.yy.c $(LIBS)
y.tab.c: $(TARGET_PARS).y
	$(YACC) -d $(TARGET_PARS).y
lex.yy.c : $(TARGET_LEX).l
	$(LEX) $(TARGET_LEX).l


clean :
	rm -f lex.yy.c
	rm -f y.tab.c
	rm -f y.tab.h
	rm -f ${EXEC}

run :
	make
	./${EXEC}