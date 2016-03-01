//
// Created by lina_a on 18/01/16.
//

#ifndef EX00_PICTURE_H
#define EX00_PICTURE_H

#include <iostream>
#include <string>

class Picture
{
public:
    Picture(const std::string &filename = "");
    ~Picture();
    bool getPictureFromFile(const std::string & file);
    std::string data;
};

#endif //EX00_PICTURE_H
