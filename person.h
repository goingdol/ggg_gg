# include <iostream>
# include <string>

class Person{
private:
    int age;
    bool gender;
    std::string name;

public:
    Person(){}
    Person(int _age, bool _gender, std::string _name): age(_age), gender(_gender), name(_name) {}

    void setAge(int _age){
        age = _age;
    }

    void setGender(bool _gender){
        gender = _gender;
    }

    void setName(std::string _name){
        name = _name;
    }

    void getPersonInfo(Person &person){
        person.age = age;
        person.gender = gender;
        person.name = name;
    }

    void showPersonInfo(){
        std::cout << "Age: " << age << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
};
