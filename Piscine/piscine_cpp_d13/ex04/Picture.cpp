//
// Created by lina_a on 18/01/16.
//

#include <fstream>
#include <sstream>
#include "Picture.h"

Picture::Picture(const std::string &filename)
{
    getPictureFromFile(filename);
}

Picture::~Picture() {

}

bool Picture::getPictureFromFile(const std::string &file) {
    std::ifstream is(file.c_str(), std::ios::in);
    std::ostringstream out;
    if (!file.empty() && !is)
    {
        data = "ERROR";
        return false;
    }
    out << is.rdbuf();
    data = out.str();
    is.close();
    return true;
}

Picture::Picture(const Picture & file) {
    data = file.data;
}

Picture& Picture::operator=(const Picture &fl) {
    if (&fl != this)
    {
        data = fl.data;
    }
    return *this;
}