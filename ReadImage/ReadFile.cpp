#include "ReadFile.h"
/*----------------------------------------------------------------------------*/
ReadFile::ReadFile() {
}
/*----------------------------------------------------------------------------*/
ReadFile::ReadFile(const ReadFile& orig) {
}
/*----------------------------------------------------------------------------*/
ReadFile::~ReadFile() {
}
/*----------------------------------------------------------------------------*/
void ReadFile::process() {
    cout << "Reading DateFile.dat" << endl;

    string line;
    ifstream infile("DataFile.dat");
    
    while (getline(infile, line)) {
        istringstream iss(line);
        int a, b;
        
        if (!(iss >> a >> b)) {
            break;
        } // error

        cout << a << "\t" << b << endl;
    }
/*----------------------------------------------------------------------------*/

}

