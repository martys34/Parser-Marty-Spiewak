#include "tokenizer.c"
#include "firsts.h"

int counter = 0;
Token tokens[10000];
Token* currentT;

void declaration();
void listOfStatements();

int main(int argc, char *argv[]) {
    char* path;
    if(argc > 1) {
        path = argv[1];
    }
    else {
        path = "../TestFile.c";
    }
    loadFile(path);

    Token* t = nextToken();

    if((checkFirst("while", *t)) == 1) {
        printf("%s", "yay");
    }
    else {
        printf("%s", "darn");
    }

    return 0;
}

void program() {
    currentT = nextToken();

    if((checkFirst("declaration", *currentT) == 1)) {
        declaration();
    }
    else if((checkFirst("listofstatements", *currentT) == 1)) {
        listOfStatements();
    }
    else {
        printf("%s", "Error: Stopped in program.");
    }
}

void declaration() {

}

void listOfStatements() {

}

