#include <cstdlib>
#include <iostream>
#include <fstream>
#include "ReadFile.h"


using namespace std;

int main(int argc, char** argv) {

    cout << "Image Program ... " << endl;
    ReadFile * readFile = new ReadFile();
    readFile->process();
    delete readFile;
    
    return 0;

}

