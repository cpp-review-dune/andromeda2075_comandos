#include<iostream>

int main(int argc, char **argv){

     auto x =3+4;
    std::cout<<x<<std::endl;

    auto y=long{3+4};
    std::cout<<y<<std::endl;

    auto z{3+4};
    
    std::cout<<z<<std::endl;
    auto& a=x;
    decltype(auto) y2=a;
    std::cout<<"x= "<<a <<std::endl;
    std::cout<<"x= "<<y2 <<std::endl;

    decltype(auto) x2=a;
    decltype(a) x3=a;
    auto const& x4=x;
    std::cout<< x2<<" "<<x3 << " "<< x4<<std::endl;
    
    //auto z1={3+4};
    //std::cout<<z1<<std::endl;

    return 0;
}