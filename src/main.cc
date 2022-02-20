#include<iostream>

int main(int argc, char **argv){
    int number =10;
    int *pointer2number=&number;
    std::cout<<pointer2number<<std::endl;
    return 0;
}