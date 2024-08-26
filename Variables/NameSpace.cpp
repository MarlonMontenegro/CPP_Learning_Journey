
#include <iostream>


namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    
    //NameSpace = provides a solution for preventing name conflicts
    //            in large projects. Each entity needs a unique name
    //            a Namespace allows for identically named entities.
    //            as long as the namespaces are different.


    //using namespace first;
    
    int x = 0;
    

    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;

    return 0;
}
