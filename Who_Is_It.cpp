#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    char name[100];
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student top_student;
        for (int i = 0; i < 3; i++)
        {
            Student stdn;
            cin >> stdn.id >> stdn.name >> stdn.section >> stdn.marks;

            if (stdn.marks > top_student.marks || i == 0)
            {
                top_student = stdn;
            }
            else if (stdn.marks == top_student.marks)
            {
                if (stdn.id < top_student.id)
                {
                    top_student = stdn;
                }
            }
        }
        cout << top_student.id << " " << top_student.name << " " << top_student.section << " " << top_student.marks << endl;
    }
    return 0;
}