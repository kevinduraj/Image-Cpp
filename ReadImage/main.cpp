#include <cstdlib>
#include <iostream>
#include "MImage.cpp"
#include "ReadFile.h"
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

    cout << "Image Program ... " << endl;
    ReadFile * readFile = new ReadFile();
    readFile->process();
    
    return 0;

}

