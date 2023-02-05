//
//  main.cpp
//  ООП ДЗ 22 исправление кода
//
//  Created by Павел on 05.02.2023.
//

#include <iostream>
#include <vector>
class IVehicle {
public:
    virtual void printName() const = 0;
    virtual ~IVehicle() {}
};
class Car : public IVehicle {
public:
    void printName() const override {
        std::cout << "Car class" << std::endl;
} };
void foo(const std::vector<const IVehicle*>& vec) {
    for(size_t i = 0; i < vec.size(); i++) {
        vec[i]->printName();
    }
}



int main(int argc, const char * argv[]) {
    
     IVehicle *vehicle = new Car();//вместо IVehicle  указал  Car
    IVehicle *vehicle2 = new Car();
    const std::vector<const IVehicle*> &vec{vehicle2};//добавил const и &
    foo(vec);
    delete vehicle;//очистка памяти
    delete vehicle2;//очистка памяти





    return 0;
}
