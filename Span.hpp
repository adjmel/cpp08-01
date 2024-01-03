#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <ctime>

class Span
{
private:
    std::list<int> _list;
    unsigned int N;
    Span();

public:

    Span(unsigned int N);
    //Span(unsigned int N,  &a);
    Span(const Span& obj);
    Span& operator=(const Span&);
    ~Span();

    void addNumber(unsigned int N);
    void displayList();
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class ListTooShort : public std::exception
    {
    public:
        virtual const char* what() const  throw() 
        { 
            return "The list is too short to have a span";
        }
    };
};

#endif