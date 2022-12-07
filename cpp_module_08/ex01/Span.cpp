#include "Span.hpp"

Span::Span(): _n(0) {}

Span::Span(unsigned int n): _n(n) {}

Span::Span(Span const &other) {
    *this = other;
}
Span &Span::operator=(Span const &other) {
    if (this != &other)
    {
        _n = other.getN();
        _vec = other.getVec();
    }
    return *this;
}

Span::~Span() {}

unsigned int    Span::getN(void) const {
    return _n;
}

std::vector<int>    Span::getVec(void) const {
    return _vec;
}

const char *Span::NoSpanException::what() const throw() {
    return "Error: No Span";
}

const char *Span::AlreadyFullException::what() const throw() {
    return "Error: Already full";
}

const char *Span::InsufficientNumberOfComponentException::what() const throw() {
	return "Error: Insufficient number of components";
}

void    Span::print(unsigned int start, unsigned int n) {
    for (unsigned int i = start; i < start + n; i++) {
        if (i > _n)
            throw AlreadyFullException();
        std::cout << _vec[i] << std::endl;
    }
}

void    Span::addNumber(int n) {
    if (_n == 0)
        throw NoSpanException();
    if (_vec.size() + 1 > _n)
        throw AlreadyFullException();
    _vec.push_back(n);
}

void	Span::fill(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (_n == 0)
        throw NoSpanException();
    _vec.insert(_vec.begin(), begin, end);
}

int Span::shortestSpan(void) {
    if (_n == 0)
        throw NoSpanException();
    if (_vec.size() < 2)
        throw InsufficientNumberOfComponentException();

    std::vector<int>    vec = getVec();
    std::sort(vec.begin(), vec.end());
    int d = vec[1] - vec[0];

    for (unsigned int i = 1; i < vec.size() - 1; i++) {
        if (vec[i + 1] - vec[i] < d)
            d = vec[i + 1] - vec[i];
    }
    return (d);
}

int Span::longestSpan(void) {
    if (_n == 0)
        throw NoSpanException();
    if (_vec.size() < 2)
        throw InsufficientNumberOfComponentException();

    return *std::max_element(_vec.begin(), _vec.end()) \
            - *std::min_element(_vec.begin(), _vec.end());
}

std::ostream &operator<<(std::ostream &out, const Span &span) {
    std::vector<int> vec = span.getVec();
    std::vector<int>::iterator i;
    for (i = vec.begin(); i != vec.end(); i++)
        out << *i << std::endl;
    return out;
}
