#ifndef READFILE_H
#define	READFILE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
/*----------------------------------------------------------------------------*/
class ReadFile {
public:
    
    ReadFile();
    ReadFile(const ReadFile& orig);
    virtual ~ReadFile();
    void process();

private:

};
/*----------------------------------------------------------------------------*/
#endif	/* READFILE_H */

