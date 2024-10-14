#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    float r, p, a;
    const float pi = (3.14);

    std::cout << "on vas commencer par determiner l aire et le perimetre du cercle" << std::endl;
    std::cout << "entrer le rayon du cercle" << std::endl;
    std::cin >> r;

    p = 2 * pi * r ;

    std::cout << "le perimetre du cercle est " << p << std::endl;

    std::cout << "calculons maintenant l aire du cercle " << std::endl;

    a = pi * r * r ;

    std::cout << "l aire est " << a << std::endl;


    return 0;
}