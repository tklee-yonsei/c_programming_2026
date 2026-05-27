#include "student.h"

#include <stdio.h>

/**
 * @brief 학생 성적 예제를 실행하는 프로그램의 진입점입니다.
 *
 * 학생 데이터를 초기화하고, 함수 포인터로 성적 정책을 적용한 뒤,
 * 서로 다른 비교 함수 포인터로 정렬 결과를 출력합니다.
 *
 * @return 정상 종료 시 0
 */
int main(void) {
  const ScoreSet score_a = {.programming = 95, .math = 88, .english = 91};
  const ScoreSet score_b = {.programming = 84, .math = 79, .english = 90};
  const ScoreSet score_c = {.programming = 72, .math = 85, .english = 68};
  const ScoreSet score_d = {.programming = 61, .math = 70, .english = 75};

  Student class_roster[4] = {0};

  init_student(&class_roster[0], "Kim", &score_a);
  init_student(&class_roster[1], "Lee", &score_b);
  init_student(&class_roster[2], "Park", &score_c);
  init_student(&class_roster[3], "Choi", &score_d);

  GradePolicy policy = standard_grade_policy;

  for (int i = 0; i < 4; i++) {
    evaluate_student(&class_roster[i], policy);
  }

  print_students(class_roster, 4, "[Original order]");

  sort_students(class_roster, 4, compare_by_total_desc);
  print_students(class_roster, 4, "[Sorted by total score]");

  sort_students(class_roster, 4, compare_by_name_asc);
  print_students(class_roster, 4, "[Sorted by name]");

  policy = strict_grade_policy;
  for (int i = 0; i < 4; i++) {
    evaluate_student(&class_roster[i], policy);
  }

  print_students(class_roster, 4, "[Strict grading policy]");

  return 0;
}