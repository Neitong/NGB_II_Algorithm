//ex3.cpp

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
    int sum = {}; // meaaning: set of sum values is empty or sum values are 0
    for (int i {0}; i < students.size(); i++)
    {
        sum += student.scores[i];
    }

    float average(0); //direct-initialization (initial value in parenthesis) 
    average = static_cast<float>(sum)/5; //Reference: https://en.cppreference.com/w/cpp/language/static_cast
    return average;                       // @remark static_cast<target-type>(expression)	

    
    
    // return 0.0f;    // To change
}

/**
 * Calculate GPA based on average score
 * @param Student : the student
 * @return the average of students scores
 */
float calculateGPA(Student student) {
    // TODO
    float getAverageScore = calculateAverage(student);
    if (getAverageScore >= 90) return 4.0f; 
    else if (getAverageScore >= 80) return 3.0f; //f = floating type
    else if (getAverageScore >= 70) return 2.0f;
    else if (getAverageScore >= 60) return 1.0f;
    else return 0.0f;
    
    // return 0.0f;    // To change
}


/**
 * Calculate letter grade based on GPA
 * @param Student : the student
 * @return the average of students scores
 */
std::string calculatGrade(Student student) {

    // TODO
    float getGPA = calculateGPA(student);
    if (getGPA == (4.0)) return "A";
    else if (getGPA >= 3.0) return "B";
    else if (getGPA >= 2.0) return "C";
    else if (getGPA >= 1.0) return "D";
    else return "E";

    // return ""; // To change
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
    std::cout << std::fixed << std::setprecision(DECIMAL_DIGIT); // Set decimal precision for average and GPA  
    //References: https://en.cppreference.com/w/cpp/io/manip
    //Reference of setpercision: https://en.cppreference.com/w/cpp/io/manip/setprecision
    //setpercision == show n digits.

    //std::fixed : use decimal notation for the value
    std::cout << "------------------------------------------------------------\n";
    std::cout << "| Student ID | Name      | Average Score |  GPA | Grade |\n";
    std::cout << "------------------------------------------------------------\n";

    // Call the function printStudentStatistics for each student
    // TODO
    for (int i{}; i < students.size(); i++) {
        printStudentStatistics( students[i] );
    }

    
    std::cout << "------------------------------------------------------------\n";
    
    return 0;
}