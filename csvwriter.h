#ifndef CSVWRITER_H
#define CSVWRITER_H

#include "csvreader.h"
#include <iostream>

#include <occupation.h>


class CSVWriter
{
    std:: ofstream fout;

public:

    ~CSVWriter();

    void write(std::vector <Occupation> newles);
    bool is_open() const {return fout.is_open();};
    CSVWriter(const std::string& filename);
};

#endif // CSVWRITER_H
