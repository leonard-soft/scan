#include "scan.hpp"

Scan::Scan() = default;

/**
 * @brief scanShort
 */
short Scan::scanShort(std::string prompt) 
{
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    int temp;
    ss >> temp;

    if (ss.fail() || !ss.eof()) 
    {
        throw std::invalid_argument("InvalidArgumentException -> incorrect format, join a short number.");
    }

    if (temp < std::numeric_limits<short>::min() || 
        temp > std::numeric_limits<short>::max() )
    {
        throw std::out_of_range("OutOfRangeException -> the input is out of the range for a short number.");
    }

    return static_cast<short>(temp);
}

/**
 * @brief scanInt
 */
int Scan::scanInt(std::string prompt)
{
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    double temp;
    ss >> temp;

    if (ss.fail() || !ss.eof())
    {
        throw std::invalid_argument("InvalidArgumentException -> incorrect format, join a integer number.");
    }

    if (temp < std::numeric_limits<int>::min() ||
        temp > std::numeric_limits<int>::max())
    {
        throw std::out_of_range("OutOfRangeException -> the input is out of the range for a integer number.");
    }

    return static_cast<int>(temp);
}

long Scan::scanLong(std::string prompt) 
{
    
}