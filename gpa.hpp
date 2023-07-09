#ifndef GPA_H
#define GPA_H

#include <vector>

struct grade_t {
    int gpa_value;
    int credit_hours;
};

// equivalent to typedef std::vector<grade_t> semester_grades;
using semester_grades = std::vector<grade_t>;

float calculate_gpa(semester_grades grades); 

#endif