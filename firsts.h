//
// Created by Marty on 11/15/2017.
//

#ifndef LEXICAL_ANALYZER_C_FIRSTS_H
#define LEXICAL_ANALYZER_C_FIRSTS_H

#endif //LEXICAL_ANALYZER_C_FIRSTS_H

_Bool inFirst(char* firsts[], Token token);

char* fWhile[] = {"while"};
char* fLofVar2[] = {"IDENT"};
char* fAssign[] = {"IDENT"};
char* fPrim[] = {"INT", "CONSTCH", "IDENT", "("};
char* fUop[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fMult[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fAdd[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fComp[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fBop[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fBand[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fBor[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fLogand[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fExp[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fIf[] = {"if"};
char* fLofExp[] = {"!", "-", "~", "INT", "CONSTCH", "IDENT", "("};
char* fCout[] = {"cout"};
char* fLofVar1[] = {"IDENT"};
char* fCin[] = {"cin"};
char* fStatement[] = {"cin", "cout", "if", "IDENT", "while", "{", "return"};
char* fType[] = {"int", "char"};
char* fVariable[] = {"IDENT"};
char* fDec[] = {"int", "char"};
char* fLofStatements[] = {"cin", "cout", "if", "IDENT", "while", "{", "return", ""};
char* fProgram[] = {"int", "char", "cin", "cout", "if", "IDENT", "while", "{", "return", ""};

_Bool checkFirst(char* rule, Token token) {


    if(strcmp("program", rule) == 0) {
        return inFirst(fProgram, token);
    }

    else if(strcmp("listofstatements", rule) == 0) {
        return inFirst(fLofStatements, token);
    }

    else if(strcmp("declaration", rule) == 0) {
        return inFirst(fDec, token);
    }

    else if(strcmp("variable", rule) == 0) {
        return inFirst(fVariable, token);
    }

    else if(strcmp("type", rule) == 0) {
        return inFirst(fType, token);
    }

    else if(strcmp("statement", rule) == 0) {
        return inFirst(fStatement, token);    }

    else if(strcmp("cin", rule) == 0) {
        return inFirst(fCin, token);    }

    else if(strcmp("listofvariables1", rule) == 0) {
        return inFirst(fLofVar1, token);    }

    else if(strcmp("cout", rule) == 0) {
        return inFirst(fCout, token);    }

    else if(strcmp("listofexpressions", rule) == 0) {
        return inFirst(fLofExp, token);    }

    else if(strcmp("if", rule) == 0) {
        return inFirst(fIf, token);    }

    else if(strcmp("exp", rule) == 0) {
        return inFirst(fExp, token);    }

    else if(strcmp("logand", rule) == 0) {
        return inFirst(fLogand, token);    }

    else if(strcmp("bor", rule) == 0) {
        return inFirst(fBor, token);    }

    else if(strcmp("band", rule) == 0) {
        return inFirst(fBand, token);    }

    else if(strcmp("bop", rule) == 0) {
        return inFirst(fBop, token);    }

    else if(strcmp("comp", rule) == 0) {
        return inFirst(fComp, token);    }

    else if(strcmp("add", rule) == 0) {
        return inFirst(fAdd, token);    }

    else if(strcmp("mult", rule) == 0) {
        return inFirst(fMult, token);    }

    else if(strcmp("uop", rule) == 0) {
        return inFirst(fUop, token);    }

    else if(strcmp("prim", rule) == 0) {
        return inFirst(fPrim, token);    }

    else if(strcmp("assign", rule) == 0) {
        return inFirst(fAssign, token);    }

    else if(strcmp("listofvariables2", rule) == 0) {
        return inFirst(fLofVar2, token);    }

    else if(strcmp("while", rule) == 0) {
        return inFirst(fWhile, token);    }

}

_Bool inFirst(char* firsts[], Token token) {
    int arrSize = sizeof(firsts) / sizeof(firsts[0]);
    for(int i = 0; i < arrSize; i++) {
        if(strcmp(firsts[i], token.lexeme) == 0) {
            return 1;
        }
    }
    return 0;
}