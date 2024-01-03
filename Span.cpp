#include "Span.hpp"


Span::Span(unsigned int n) : _list(0), N(n) 
{

}

// Span::Span() : _list(0), N(0) 
// {
//     std::cout << "coucou" << std::endl;
// }


Span::Span(const Span &obj) : _list(obj._list), N(obj.N) 
{
    
}

// Opérateur d'assignation
Span& Span::operator=(const Span& obj) 
{
    if (this != &obj)
    {
        _list = obj._list;
        N = obj.N;
    }
    return *this;
}


Span::~Span()
{

}

void Span::addNumber(unsigned int n)
{
    _list.push_back(n);
    // if blabla
    //int i = _list.back();
    //std::cout << "add: " << i << std::endl;
}


void Span::displayList()
{

    std::cout << "List: " << std::endl;
    for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
    {
        std::cout << *it << ' ';
    }
}

unsigned int Span::longestSpan()
{
    if(_list.size() < 2)
    {
        throw ListTooShort();
        return -1;
    }
    _list.sort();
    return (_list.back()) - *(_list.begin());
}

unsigned int Span::shortestSpan()
{
    if(_list.size() < 2)
    {
        throw ListTooShort();
        return -1;
    }
    _list.sort();
    std::list<int>::iterator it = _list.begin();
    int _span = 0;
    int _span_prev = (_list.back()) - *(_list.begin());
    std::list<int>::iterator it_prev = _list.begin();
    while (++it != _list.end())
    {
        _span = *it - *it_prev;
        if(_span_prev > _span)
            _span_prev = _span;
        //std::cout << "span btw " << *it << " and " << *it_prev << " is: "<< _span << std::endl;
        //std::cout << "shortest span is: "<< _span_prev << std::endl;
        it_prev++;
    }
    return _span_prev;
}