#ifndef STUDENTNODE_H
#define STUDENTNODE_H
#include "Student.h"

#include <string>
using namespace std;

namespace model
{
class StudentNode
{
    public:
        StudentNode(Student* student);
        virtual ~StudentNode();
        StudentNode* getNext() const;
        void setNext(StudentNode* nextStudentNode);

    protected:

    private:
        Student* currentStudent;
        StudentNode* nextNameStudentNode;
};
}


#endif // STUDENTNODE_H
