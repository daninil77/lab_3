#include "csvwriter.h"


CSVWriter::CSVWriter(const std::string& filename)
{
    fout.open(filename);
}

CSVWriter::~CSVWriter(){
    fout.close();
}

void CSVWriter::write(std::vector <Occupation> newzanytiya){
    for (const auto &z: newzanytiya)
    {
    fout<<z.n <<";" << z.predmet.toStdString()<< ";" <<z.tipe << ";" << z.aud<<std::endl;
    }

}
