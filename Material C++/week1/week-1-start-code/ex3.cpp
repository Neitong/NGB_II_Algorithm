#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#define DECIMAL_DIGIT 2

struct Student {
    int id;
    std::string name;
    std::vector<int> scores;
};

std::vector<Student> students  = {
    {1, "Alice", {85, 92, 78, 94, 88}},
    {2, "Bob", {76, 81, 72, 85, 79}},
    {3, "Charlie", {93, 89, 84, 91, 95}},
    {4, "David", {65, 70, 75, 60, 80}},
    {5, "Eve", {54, 68, 72, 77, 65}}
};

/**
 * Calculate the average score of the given student
 * @param Student : the student
 * @return the average of students scores
 */
float calculateAverage(Student student) {
    // TODO
    return 0.0f;    // To change
}

/**
 * Calculate GPA based on average score
 * @param Student : the student
 * @return the average of students scores
 */
float calculateGPA(Student student) {
    // TODO
    return 0.0f;    // To change
}


/**
 * Calculate letter grade based on GPA
 * @param Student : the student
 * @return the average of students scores
 */
std::string calculatGrade(Student student) {
    // TODO
    return ""; // To change
}

/**
 * Compute and print students statistic (average, GPA, grade letter) on console
 * @param Student : the student
 */
void printStudentStatistics(const Student& student) {
        float average = calculateAverage(student);
        float gpa = calculateGPA(student);
        std::string grade = calculatGrade(student);

        std::cout << "| " << std::setw(10) << student.id << " | "
                  << std::setw(10) << student.name << " | "
                  << std::setw(12) << average << " | "
                  << std::setw(4) << gpa << " | "
                  << std::setw(5) << grade << " |\n";

}

void newPrintStudent(const Student& student)
{
    float average = calculateAverage(student);
    float gpa = calculateGPA(student);
    std::string grade = calculatGrade(student);

    std::cout << "Student ID Name Score GPA Grade";
    for (int i(0); i < students.size(); i++)
    {
        std::cout << students[i].name << " "  << average << gpa << grade ;
    }
}

int main() {
    
    //or std::showpoint
    std::cout << std::fixed << std::setprecision(DECIMAL_DIGIT); 
    // Set decimal precision for average and GPA  
    //setpercision == show n digits.

    //std::fixed : use decimal notation for the value
    std::cout << "------------------------------------------------------------\n";
    std::cout << "| Student ID | Name      | Average Score |  GPA | Grade |\n";
    std::cout << "------------------------------------------------------------\n";

    // Call the function printStudentStatistics for each student
    // TODO
    
    std::cout << "------------------------------------------------------------\n";
    
    return 0;
}