CC = cc
LIBS = -lfl
LIBL = -lfl
LEX = flex
YACC = bison
CFLAGS = -DYYDEBUG=1
TARGET_LEX = go_lexar
TARGET_PARS = go_yacc
EXEC = result
.PHONY: run
.PHONY: clean


all: ${EXEC}
${EXEC}: ${TARGET_PARS}.tab.c lex.yy.c
	$(CC) -o ${EXEC} ${TARGET_PARS}.tab.c lex.yy.c $(LIBS)
${TARGET_PARS}.tab.c: $(TARGET_PARS).y
	$(YACC) -d $(TARGET_PARS).y
lex.yy.c : $(TARGET_LEX).l
	$(LEX) $(TARGET_LEX).l

lex: lex.yy.c
	$(CC) lex.yy.c -o ${EXEC} $(LIBL)


clean :
	rm -f lex.yy.c
	rm -f ${TARGET_PARS}.tab.c
	rm -f ${TARGET_PARS}.tab.h
	rm -f ${EXEC}

run :
	make
	./${EXEC}