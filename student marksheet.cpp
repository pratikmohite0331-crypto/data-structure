#include <iostream>
int main() 
{
    float marks;      
    float* ptr;        
    ptr = &marks;
    
    std::cout << "Enter the mark of the student: ";
    std::cin >> *ptr;      
    std::cout << "\n--- Student Details ---\n";
    std::cout << "Student Mark: " << *ptr <<std::endl;

    return 0;
}

