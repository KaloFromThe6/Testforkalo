//
//  main.cpp
//  Hello world
//
//  Created by Kailon Rodriguez on 12/11/25.
//

#include <iostream>
#include <string>



class testing {
    public:
        std::string name;
        int age;
        int weight;

}






int foobar(){
    std::cout << "this was written in vscode!!" << std::endl;
    return 0;
}
int addNumbers (int a, int b){

    return a + b;
}
int onWindows(){
    std::cout << "this was written on windows!!" << std::endl;
    return 0;
}




int main(){
    std::cout << "Hello World" << std::endl;
    int x, y;


    foobar();
    std::cin >> x;
    std::cin >> y;
    std::cout << "the numbers inputted added together are: ";
    std::cout << addNumbers(x , y) << std::endl;
    onWindows();


    testing kalo;
    kalo.age = 26;
    kalo.weight = 170;
    kalo.name = "Kalo";

    testing pierre;
    pierre.age = 19;
    pierre.weight = 100;
    pierre.name = "Pierre";

    std::cout << "Profile 1 contains info for: " << kalo.name << std::endl;
    std::cout << "Other Details as follows: VVV" << std::endl;
    std::cout << "Weight: " << kalo.weight << std::endl;
    std::cout << "Age: " << kalo.age << std::endl;

    std::cout << "Profile 2 contains info for: " << pierre.name << std::endl;
    std::cout << "Other Details as follows: VVV" << std::endl;
    std::cout << "Weight: " << pierre.weight << std::endl;
    std::cout << "Age: " << pierre.age << std::endl;






    return 0;
}
