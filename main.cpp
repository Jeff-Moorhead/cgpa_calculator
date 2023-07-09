#include <iostream>
#include "gpa.hpp"

// TODO: take grades from stdin or a file
int main() {

    grade_t math, english, history;

    math.gpa_value = 4;
    math.credit_hours = 3;

    english.gpa_value = 2;
    english.credit_hours = 3;

    history.gpa_value = 3;
    history.credit_hours = 3;

    semester_grades grades = { math, english, history };

    float gpa = calculate_gpa(grades);

    std::cout << "GPA: " << std::to_string(gpa) << std::endl;
}



