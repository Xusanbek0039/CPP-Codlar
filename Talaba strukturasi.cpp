#include <iostream>
using namespace std;

struct Student {
  int id;
  string name;
  string faculty;
  int course;
};

int main() {

  Student s1;
  s1.id = 101;
  s1.name = "John";
  s1.faculty = "CS"; 
  s1.course = 2;

  cout << s1.name << " talabaning fakulteti " << s1.faculty;

  return 0;
}
