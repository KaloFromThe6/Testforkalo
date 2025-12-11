//
//  main.cpp
//  Hello world
//
//  Created by Kailon Rodriguez on 12/11/25.
//

#include <iostream>

int foobar(){
    std::cout << "this was written in vscode!!" << std::endl;
    return 0;
}
int addNumbers (int a, int b){

    return a + b;
}


int main(){
    std::cout << "Hello World" << std::endl;
    int x, y;


    foobar();
    std::cin >> x;
    std::cin >> y;
    std::cout << "the numbers inputted added together are: ";
    std::cout << addNumbers(x , y) << std::endl;

    return 0;
}
