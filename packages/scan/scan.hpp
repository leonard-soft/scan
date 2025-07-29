#ifndef SCAN_HPP
#define SCAN_HPP

#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <stdexcept>

class Scan {
public:

    Scan();

    short scanShort(std::string prompt);
    int scanInt(std::string prompt);
    long scanLong(std::string prompt);

};


#endif // SCAN_HPP