#include "gpa.hpp"

float calculate_gpa(semester_grades grades) {
    int total_grade_point = 0;
    int total_credits = 0;

    for (int i = 0; i < grades.size(); i++) {

        grade_t current_grade = grades[i];

        total_grade_point += current_grade.gpa_value * current_grade.credit_hours;
        total_credits += current_grade.credit_hours;
    }

    return (float)total_grade_point / (float)total_credits;
}