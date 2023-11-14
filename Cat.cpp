// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Cat{
    public:
        string name;
        Cat(string name, int age){
            name = name;
            age = age;
        }
        void birthday() {
            this->age++;
        }; 
        void meow() {
            cout<<"meow!\n";
        }
    
    private:
        int age = 0;
};

int main() {
   
    Cat mincis("Mincis", 2);
    mincis.meow();
    
    return 0;
}
