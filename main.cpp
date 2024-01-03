#include "Span.hpp"

// int main()
// {
//     Span sp = Span(5);
//     std::vector<int> vect = {1, 2, 3, 4, 5};
    
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);

//     sp.displayList();
//     std::cout << std::endl;
    
//     try
//     {
//         std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
//         std::cout << "longest span: " << sp.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     return 0;
// }

// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }


#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

// Foncteur (functor) pour générer des nombres dans la plage [1, 10000]
struct RandomNumberGenerator 
{
    int operator()() const 
    {
        return std::rand() % 10000;
    }
};

int main() 
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    std::list<unsigned int> beg(1);
    std::list<unsigned int> en(10000);
    RandomNumberGenerator rng;  // Créer un objet foncteur


    std::cout << "le plus petit " << *beg.begin() << std::endl;
    std::cout << "le plus grand " << *en.end() << std::endl;
    for (std::list<unsigned int>::iterator it = en.begin(); it != en.end(); it++) 
    {
        *it = rng();  // Appeler l'opérateur () du foncteur pour obtenir un nombre aléatoire
    }

    // Span span( l.size() );

        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;

    // for (std::list<unsigned int>::const_iterator it = en.begin(); it != en.end(); ++it)
    // {
    // std::cout << *it << " ";
    // }

    std::cout << std::endl;

    return 0;
}


// int main( void )
// {
//     std::cout << "---- TEST #1 -----" << std::endl;

//     Span sp = Span( 5 );

//     sp.addNumber( 6 );
//     sp.addNumber( 3 );
//     sp.addNumber( 9 );
//     sp.addNumber( 17 );
//     sp.addNumber( 11 );

//     // std::cout << "sp: " << sp << std::endl;

//     std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
//     std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;

//     std::cout << "\n---- TEST #1 -----" << std::endl;

//     try 
//     {





//     std::srand(static_cast<unsigned int>(std::time(NULL)));

//     std::list<unsigned int> l(10000);
//     // Utiliser std::rand() % (max - min + 1) + min pour générer des nombres dans une plage donnée
//     std::generate(l.begin(), l.end(), std::rand()) { return std::rand() % 10000 + 1; });
//     // std::generate(l.begin(), l.end(), std::rand)
//     // { 
//     //     return std::rand() % 10000 + 1; 
//     // }
//     // for (auto num : l) 
//     // {
//     //     std::cout << num << " ";
//     // }
//     std::cout << std::endl;



//         // std::srand(static_cast<unsigned int>(std::time(NULL)));

       
//         // std::list<unsigned int>    l( 10000 );
//         // std::srand( time ( NULL ) );
//         // //  std::rand() % 10000;
//         // std::generate( l.begin(), l.end(), std::rand );

//         std::cout << "ici 1 " << *l.begin() << std::endl;
//         std::cout << "ici 2 " << *l.end() << std::endl;

//         Span span( l.size() );

//         //span.addNumber( l.begin(), l.end() );
//         span.addNumber(static_cast<unsigned int>(*l.begin()));
//         span.addNumber(static_cast<unsigned int>(*l.end()));

//         std::cout << "Longest span: " << span.longestSpan() << std::endl;
//         std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        
//     } 
//     catch (std::exception &e) 
//     {
//         std::cout << e.what() << std::endl; 
//     }

//     return 0;
// }