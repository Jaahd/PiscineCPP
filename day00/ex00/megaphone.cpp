#include <cctype>
#include <iostream>
#include <locale>

int         main(int ac, char **av) {

    std::locale     loc;
    std::string     upper;

    if (ac == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    else {
        upper = av[1];
        for (std::string::size_type i=0; i < upper.length(); ++i)
            std::cout << std::toupper(upper[i], loc);
        std::cout << std::endl;
    }

    return 0;
}
