//
// Created by Marty on 11/15/2017.
//

#ifndef LEXICAL_ANALYZER_C_FIRSTS_H
#define LEXICAL_ANALYZER_C_FIRSTS_H

#endif //LEXICAL_ANALYZER_C_FIRSTS_H

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

char** first(char* rule) {
    if(strcmp("program", rule) == 0) {
        return fProgram;
    }

    else if(strcmp("listofstatements", rule) == 0) {
        fLofStatements;
    }

    else if(strcmp("declaration", rule) == 0) {
        return fDec;
    }

    else if(strcmp("variable", rule) == 0) {
        return fVariable;
    }

    else if(strcmp("type", rule) == 0) {
        return fType;
    }

    else if(strcmp("statement", rule) == 0) {
        return fStatement;
    }

    else if(strcmp("cin", rule) == 0) {
        return fCin;
    }

    else if(strcmp("listofvariables1", rule) == 0) {
        return fLofVar1;
    }

    else if(strcmp("cout", rule) == 0) {
        return fCout;
    }

    else if(strcmp("listofexpressions", rule) == 0) {
        return fLofExp;
    }

    else if(strcmp("if", rule) == 0) {
        return fIf;
    }

    else if(strcmp("exp", rule) == 0) {
        return fExp;
    }

    else if(strcmp("logand", rule) == 0) {
        return fLogand;
    }

    else if(strcmp("bor", rule) == 0) {
        return fBor;
    }

    else if(strcmp("band", rule) == 0) {
        return fBand;
    }

    else if(strcmp("bop", rule) == 0) {
        return fBop;
    }

    else if(strcmp("comp", rule) == 0) {
        return fComp;
    }

    else if(strcmp("add", rule) == 0) {
        return fAdd;
    }

    else if(strcmp("mult", rule) == 0) {
        return fMult;
    }

    else if(strcmp("uop", rule) == 0) {
        return fUop;
    }

    else if(strcmp("prim", rule) == 0) {
        return fPrim;
    }

    else if(strcmp("assign", rule) == 0) {
        return fAssign;
    }

    else if(strcmp("listofvariables2", rule) == 0) {
        return fLofVar2;
    }

    else if(strcmp("while", rule) == 0) {
        return fWhile;
    }

}