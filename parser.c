#include "tokenizer.c"
#include "firsts.h"

int counter = 0;
Token tokens[10000];
Token currentT;

int main(int argc, char *argv[]) {
    char* path;
    if(argc > 1) {
        path = argv[1];
    }
    else {
        path = "../TestFile.c";
    }
    loadFile(path);

    //for testing
    char** test;
    test = first("exp");
    for(int i = 0; i < 7; i++) {
        printf("%s", test[i]);
    }
    return 0;
}


