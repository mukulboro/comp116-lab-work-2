#include<iostream>
#define MAX_SIZE 10

class Student{
    private:
        std::string name;
        long books[MAX_SIZE];
        int currentIndex;
    public:
        Student(){
            currentIndex = 0;
        }
        std::string getName(){
            return name;
        }
        void setName(std::string userName){
            name = userName;
        }
        void issueBook(long bookID){
            books[currentIndex] = bookID;
            currentIndex++;
        }
        long* getIssuedBooks(){
            return books;
        }
};