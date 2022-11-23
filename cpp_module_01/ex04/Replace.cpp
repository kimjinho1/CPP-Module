#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, \
    std::string s2) : filename(filename), s1(s1), s2(s2) {}

Replace::~Replace() {
    ;
}

void    Replace::replace(void) {
    std::ifstream   ifs(this->filename);
    std::ofstream   ofs;
    std::string     line;
    std::string     res;
    size_t          i;

    if (ifs.fail())
    {
        std::cout << "Error: Can't open input file" << std::endl;
        return ;
    }
    if (!s1.length())
    {
        std::cout << "Error: Wrong replace input" << std::endl;
        ifs.close();
        return ;
    }
    while (getline(ifs, line)) {
        i = line.find(s1);
        while (i != std::string::npos) {
            line.erase(i, s1.length());
            line.insert(i, s2);
            i = line.find(s1);
        }
        res.append(line);
        res.append("\n");
    }
    ofs.open(filename.append(".replace"), std::ios::out);
    if (ofs.fail())
    {
        std::cout << "Error: Can't open output file" << std::endl;
        ifs.close();
        return ;
    }
    ofs << res;
    ifs.close();
    ofs.close();
}