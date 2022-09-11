#include<iostream>
#define MAX_SIZE 10

enum Grade{A, Am, Bp, B, Bm, Cp, C, Cm, D, F};

class Student{
    private:
        std::string name;
        long books[MAX_SIZE];
        int currentIndex;
        Grade studentGrade;
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
        void setGrade(Grade grade){
            studentGrade = grade;
        }
        Grade getGrade(){
            return studentGrade;
        }
};