#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>

class Replace
{
private:
    std::string filename;
    std::string s1;
    std::string s2;
public:
    Replace(const std::string &filename, \
        const std::string &s1, const std::string &s2);
    ~Replace();
    void    replace(void);
};

#endif