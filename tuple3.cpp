#include <iostream>
#include <stdexcept>
#include <string>
#include <tuple>

//using namespace std; 
std::tuple<double,char,std::string> get_id(int id)
{
    switch (id)
    {
    case 0: return{3.4,'A',"Lisa"};
    case 1: return{2.9,'C',"Bart"};
    case 2: return{1.7,'D',"Ralph"};
    case 3: return{0.6,'F',"Dexter"};
        break;
    
    default:
        break;
    }
    throw std::invalid_argument("id");

}

    std::tuple<char, int, float> greek(20,'h',54.5);
using namespace std;
int main()
{


    //Use of size to find tuple size
    std::cout<<"The size of tuple: ";
    std::cout<<tuple_size<decltype(greek)>::value <<'\n';
 
 
 const auto student0 = get_id(0);
    std::cout << "ID: 0, "
              << "GPA: " << std::get<0>(student0) << ", "
              << "grade: " << std::get<1>(student0) << ", "
              << "name: " << std::get<2>(student0) << '\n';
 

    double gpa2;
    char grade2;
    std::string name2;
    std::tie(gpa2,grade2,name2)= get_id  (2);
    std::cout<<"ID: 2, "
        <<"GPA: " <<gpa2<<" , "
        <<"grade: "<<grade2<< " , "
        <<"name: "<<name2<<'\n';

    const auto [gpa3,grade3,name3] = get_id(3);
    std::cout<<"ID: 3, "
              << "GPA: " << gpa3 << ", "
              << "grade: " << grade3 << ", "
              << "name: " << name3 << '\n';

    //Initialize tuple
 


return 0;
}