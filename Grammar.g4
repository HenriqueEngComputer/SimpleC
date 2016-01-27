grammar SimpleC;

progr: general;

general: MAIN ID BEGIN body END;
body:(declaration_variable) (atribuittion|operationIO|in_case_that|repeat)* ;

declaration_variable: VAR BEGIN escope END;

escope: (tipe ID ENDLINE)*;

operationIO:write|read;
repeat:repeat_for|repeat_while;

tipe: (INTEGER|REAL|BOOLEAN|TEXT);
atribuittion: ID ATRIB ((expr)|bool|phrase) ENDLINE;

phrase: DELIMITER string DELIMITER;

string: (STRING)+;
write: PRINT (LPARENT(ID|(ID SEPARATOR ID)*)RPARENT) ENDLINE;


read: SCAN (LPARENT(DELIMITER tipe DELIMITER SEPARATOR ID)* RPARENT)ENDLINE;


repeat_for: FOR LPARENT (initial_condition ENDLINE conditional ENDLINE final_condition ) RPARENT BEGIN action END;

initial_condition: (ID|factor)|atribuittion;
final_condition: (ID ATRIB expr);

repeat_while: WHILE LPARENT ((conditional)|(conditional logical conditional)*) RPARENT BEGIN action END;

in_case_that: IF LPARENT ((conditional)|(conditional logical conditional)*) RPARENT BEGIN action END;

logical: OR|AND;
conditional: (ID|factor|bool) comparator (ID|factor|bool)  ;

action: (atribuittion|operationIO|in_case_that|repeat)* ;
expr: subexpr((PLUS|MINUS) subexpr)*;

subexpr: atom(DIV|MULT)*;

atom: (NUMBER|ID)
    | LPARENT expr RPARENT;
 


 store: ID;  
 factor: NUMBER;
 
OPERATOR: PLUS|MINUS|MULT|DIV;

NUMBER: (FLOAT|INT);

bool: TRUE|FALSE;

comparator: MORE|FEWER|IQUAL|MORE_IQUAL|FEWER_IQUAL|DIFFERENCE;

PLUS:	'+';
MINUS:	'-';
MULT:	'*';
DIV:	'/';
MORE:'>';
FEWER:'<';
ATRIB:'=';
MORE_IQUAL: '>=';
FEWER_IQUAL:'<=';
DIFFERENCE: '!=';
AND: '&&';
OR:'||';
BEGIN:'{';
END:'}';
LPARENT:'(';
RPARENT:')';
VAR:'variable';
IQUAL:'==';
ENDLINE:';';
IF:'if';
WHILE:'while';
FOR:'for';
PRINT:'print';
SCAN:'scan';
SEPARATOR:',';
MAIN:'main()';
INTEGER:'int';
REAL:'float';
BOOLEAN:'bool';
TEXT:'string';
TRUE:'true';
FALSE:'false';
DELIMITER:'"';





ID  :	('a'..'z'|'A'..'Z'|'_') ('a'..'z'|'A'..'Z'|'0'..'9'|'_')*
;

INT :	'0'..'9'+
    ;


FLOAT
    :   ('0'..'9')+ '.' ('0'..'9')* EXPONENT?
    |   '.' ('0'..'9')+ EXPONENT?
    |   ('0'..'9')+ EXPONENT
    ;
    
 
STRING:('a'..'z'|'A'..'Z'|'0'..'9'|'_')+;


fragment
EXPONENT : ('e'|'E') ('+'|'-')? ('0'..'9')+ ;
