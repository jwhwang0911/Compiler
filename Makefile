CC = cc
LIBS = -ll
LEX = lex
YACC = yacc
CFLAGS = -DYYDEBUG=1
TARGET = example
RESULT = result
.PHONY: clean
.PHONY: run


all: ${RESULT}
${RESULT}: y.tab.c lex.yy.c
	$(CC) -o ${RESULT} y.tab.c lex.yy.c $(LIBS)
y.tab.c: $(TARGET).y
	$(YACC) -d $(TARGET).y
lex.yy.c : $(TARGET).l
	$(LEX) $(TARGET).l


clean :
	rm -f lex.yy.c
	rm -f y.tab.c
	rm -f ${RESULT}

run :
	./${RESULT}