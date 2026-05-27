#ifndef STUDENT_H
#define STUDENT_H

#define NAME_SIZE 32
#define SUBJECT_COUNT 3

enum {
  SUBJECT_PROGRAMMING = 0,
  SUBJECT_MATH = 1,
  SUBJECT_ENGLISH = 2,
};

/**
 * @brief 프로그래밍, 수학, 영어 점수 묶음을 저장하는 구조체입니다.
 */
typedef struct {
  int programming;
  int math;
  int english;
} ScoreSet;

/**
 * @brief 학생 1명의 성적 정보를 저장하는 구조체입니다.
 */
typedef struct {
  char name[NAME_SIZE];
  int score[SUBJECT_COUNT];
  int total;
  double average;
  char grade;
} Student;

/**
 * @brief 평균 점수를 받아 학점을 계산하는 정책 함수 타입입니다.
 *
 * @param average 평균 점수
 * @return 계산된 학점 문자
 */
typedef char (*GradePolicy)(double average);

/**
 * @brief 두 학생의 정렬 우선순위를 비교하는 함수 타입입니다.
 *
 * @param left 비교 대상 1
 * @param right 비교 대상 2
 * @return left가 앞서면 음수, 동일하면 0, 뒤면 양수
 */
typedef int (*StudentCompare)(const Student* left, const Student* right);

/**
 * @brief 학생 구조체를 이름과 과목 점수로 초기화합니다.
 *
 * @param student 초기화할 학생 구조체 포인터
 * @param name 학생 이름
 * @param scores 과목 점수 구조체 포인터
 */
void init_student(Student* student, const char* name, const ScoreSet* scores);

/**
 * @brief 총점, 평균, 학점을 계산하여 학생 정보를 평가합니다.
 *
 * @param student 평가할 학생 구조체 포인터
 * @param policy 학점 계산 정책 함수 포인터
 */
void evaluate_student(Student* student, GradePolicy policy);

/**
 * @brief 비교 함수 포인터를 이용해 학생 배열을 정렬합니다.
 *
 * @param students 정렬할 학생 배열
 * @param count 학생 수
 * @param compare 학생 비교 함수 포인터
 */
void sort_students(Student students[], int count, StudentCompare compare);

/**
 * @brief 학생 배열을 표 형태로 출력합니다.
 *
 * @param students 출력할 학생 배열
 * @param count 학생 수
 * @param title 출력 제목
 */
void print_students(const Student students[], int count, const char* title);

/**
 * @brief 기본 학점 기준으로 평균 점수를 학점으로 변환합니다.
 *
 * @param average 평균 점수
 * @return 학점 문자
 */
char standard_grade_policy(double average);

/**
 * @brief 엄격한 학점 기준으로 평균 점수를 학점으로 변환합니다.
 *
 * @param average 평균 점수
 * @return 학점 문자
 */
char strict_grade_policy(double average);

/**
 * @brief 총점 내림차순(동점 시 이름 오름차순)으로 학생을 비교합니다.
 *
 * @param left 비교 대상 1
 * @param right 비교 대상 2
 * @return left가 앞서면 음수, 동일하면 0, 뒤면 양수
 */
int compare_by_total_desc(const Student* left, const Student* right);

/**
 * @brief 이름 오름차순으로 학생을 비교합니다.
 *
 * @param left 비교 대상 1
 * @param right 비교 대상 2
 * @return left가 앞서면 음수, 동일하면 0, 뒤면 양수
 */
int compare_by_name_asc(const Student* left, const Student* right);

#endif