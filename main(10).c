#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//1.student name//
struct student_name {
char first_name[100];
char middle_name[100];
char last_name[100];
};
void names(struct student_name name[],int n){
int i;
    for(i=0;i<n;i++){
        printf("enter the first name: ");
        scanf("%s",name[i].first_name);
        printf("enter the second name: ");
        scanf("%s",name[i].middle_name);
        printf("enter the third name: ");
        scanf("%s",name[i].last_name);
        printf("\n");
    }}
//2.Student registration number//
struct Student_reg_num{
char reg_num[100];
};
void store_registration_number(struct Student_reg_num reg[],int n){ //function to store registration number
    int i;
    for(i=0;i<n;i++){      //display more details(year,term,student number)
      printf("enter the registration number: ");
      scanf("%s",reg[i].reg_num);
      printf("year: 20%c%c\n", *(reg[i].reg_num),*(reg[i].reg_num+1));
      printf("term: %c\n",*(reg[i].reg_num+2));
      printf("student number: %c%c%c%c",*(reg[i].reg_num+3),*(reg[i].reg_num+4),*(reg[i].reg_num+5),*(reg[i].reg_num+6));
      printf("\n");
    }
}
//3.Student nationality//
struct Student_nationality{
char nationality[100];
};
void Student__nationality(struct Student_nationality N[],int n){
int i;
for(i=0;i<n;i++){       //storing Student nationality
    printf("enter the Student nationality: ");
    scanf("%s",N[i].nationality);
    }
}
//4.student ID//
struct ID_validity{
int current_year;
int last_year;        //ID __ validity is one year//
};

struct student_ID{
char type_ID[100];
char ID_num[100];
struct ID_validity IDv;
};
void student__ID(struct student_ID ID[],int n){
int i;
for(i=0;i<n;i++)
    {
        printf("enter the type of ID: ");
        scanf("%s",ID[i].type_ID);
        printf("enter the ID number: ");
        scanf("%s",ID[i].ID_num);
        printf("enter the current of ID: ");
        scanf("%d",&ID[i].IDv.current_year);
        printf("enter the end year of ID: ");
        scanf("%d",&ID[i].IDv.last_year);
        if(ID[i].IDv.last_year-ID[i].IDv.current_year==1)
                printf("student ID is valid\n");
        else
            printf("student ID is not valid\n");

    }
}
//5.Student home address//
struct Student_address {
char Flat_number[100];
char House_number[100];
char Street_name[100];
char Area[100];
char District_name[100];
char City[100];
char Governorate_name[100];
char Country[100];
char Postal_code[100];
};
void Student__address(struct Student_address adds[],int n){  //storing Student home address
    int i;
printf("enter the home address\n");
for(i=0;i<n;i++)
{
    printf("enter the flat number: ");
    scanf("%s",adds[i].Flat_number);
    printf("enter the house number: ");
    scanf("%s",adds[i].House_number);
    printf("enter the street name: ");
    scanf("%s",adds[i].Street_name);
    printf("enter the Area: ");
    scanf("%s",adds[i].Area);
    printf("enter the District name: ");
    scanf("%s",adds[i].District_name);
    printf("enter the city: ");
    scanf("%s",adds[i].City);
    printf("enter the Governorate name: ");
    scanf("%s",adds[i].Governorate_name);
    printf("enter the country: ");
    scanf("%s",adds[i].Country);
    printf("enter the Postal code: ");
    scanf("%s",adds[i].Postal_code);
    printf("\n");
}
}
//6.Student mailing address//
struct mailing_adress{
char street_address[100];
char area_address[100];
char city_address[100];
char country_address[100];
};
void mailing__adress(struct mailing_adress Madds[],int n){
    int i;
    printf("enter the Student mailing address:\n");
    for(i=0;i<n;i++)
    {
        printf("enter the street address: ");
        scanf("%s",Madds[i].street_address);
        printf("enter the area address: ");
        scanf("%s",Madds[i].area_address);
        printf("enter the city address: ");
        scanf("%s",Madds[i].city_address);
        printf("enter the country address:");
        scanf("%s",Madds[i].country_address);
        printf("\n");

    }
}
void difference(struct Student_address adds[],struct mailing_adress Madds[],int n){   //to set mailing address similar to student address
int i;
for(i=0;i<n;i++)
{
        printf("the program will set mailing address similar to student address automatically\n");
        strcpy(adds[i].Street_name,Madds[i].street_address);
        strcpy(adds[i].Area,Madds[i].area_address);
        strcpy(adds[i].City,Madds[i].city_address);
        strcpy(adds[i].Country,Madds[i].country_address);
}
}
//7.Student age//
struct student_age{
int current_date;
int current_month;
int current_year;
int birth_date;
int birth_month;
int birth_year;
};

//8.Student gender//
struct student_gender{
char gender[100];
};

//9.first enrollment//
struct enrollment{
int first_term;
int year_enrollment;
};

//10.department//
struct student_department {
char college[100];
char department[100];
};

//11.Student tutor//
struct student_tutor{
char tutor_name[100];
char tutor_code[100];
};

//12.current term //
struct current_term{
int curr_term;
int credit__hours;
};

//in 13.payments //
struct transaction{
int day_transaction;
int month_transaction;
int year_transaction;
};

//in 13.payments     (Date / Time of transaction)//
struct payment_details{
int amount_paid;
char transaction_num[100];
char bank_transaction[100];
struct transaction T;
};

//13.payments//
struct payment{
char type_of_funding[100];
char no_payment_done[100];
int toatal_paid;
struct payment_details PD;
};

//14.Student contact//
struct contact{
char Email[100];
char home_num[100];
char mobile_num[100];
};

//15.Credit Hours//
struct credit_hours{
int maximum;
int finished;
int current;
int remaining;          //The remaining hours = Maximum - Finished – Current//
};

//16.Student GPA//
struct GPA{
float overall_GPA;
int num_semester;
float individual_GPAs[18];
};

//17.Courses//
struct finished_course{           //Courses Finished//
int num_courses_finished;
int credit_hourse_finished;
};

struct current_course{                  //Current Courses//
int num_current_courses;
int credit_current_hourse;
};

struct course_finished_data{        //Semester and year for taking course in the case of finished courses
int semester_of_finished;
int year_of_finished;
};

struct Course_lecture {                      //course lecture//
char nameL1[100];
char nameL2[100];
char nameL3[100];
};

struct Course_GTA{                                   //course GTA//
char nameG1[100];
char nameG2[100];
char nameG3[100];
};

struct Course_GTA_lab{                            //course GTA lab//
char nameGL1[100];
char nameGL2[100];
char nameGL3[100];
};

struct Course_current_tutors{                                //course tutors//
struct Course_lecture CL;
struct Course_GTA G;
struct Course_GTA_lab GL;
};

struct course_finished_tutors {                                 //course tutors//
struct Course_lecture CL;
struct Course_GTA G;
struct Course_GTA_lab GL;
};

struct marks_acquired_current{                // Marks during the course //
int sevenTH_current;
int twelveTH_current;
int year_work_current;
int final_exam_current;
int total_grade_current;
};

struct marks_acquired_finished{                // Marks during the course //
int sevenTH_finished;
int twelveTH_finished;
int year_work_finished;
int final_exam_finished;
int total_grade_finished;
};

struct courses_current_data{                      //Course Data//
char course_current_code[100];
char course_current_name[100];
int course_credit_hourse;
int course_current_times;
struct Course_current_tutors CT;
struct marks_acquired_current MAC;
char grade_current_course[16];
int per_current_absence;
};

struct courses_finished_data{                             // Course Data //
char course_finished_code[100];
char course_finished_name[100];
int course_credit_hourse;
int course_finished_times;
struct course_finished_data CFD;
struct course_finished_tutors CFT;
struct marks_acquired_finished MAF;
char grade_finished_course[14];
int per_finished_absence;
};

struct courses{                                     //courses//
struct finished_course FC;
struct current_course CC;
struct courses_finished_data CFDs[100];
struct courses_current_data CCD[8];
};


struct student_information{
struct student_name stu_name;                      //1//
struct Student_reg_num stu_regis;                 //2//
struct Student_nationality stu_nationality;      //3//
struct student_ID stu_id;                       //4//
struct Student_address stu_address;            //5//
struct mailing_adress stu_madd;               //6//
struct student_age stu_age;                  //7//
struct student_gender stu_gender;           //8//
struct enrollment stu_enroll;              //9//
struct student_department sd;             //10//
struct student_tutor stu_tutor;           //11//
struct current_term c_term;               //12//
struct payment stu_payment;               //13//
struct contact stu_contact;               //14//
struct credit_hours stu_hours;            //15//
struct GPA stu_gpa;                       //16//
struct courses stu_course;                //17//
};

void data(struct student_information s_information[],int n)
{
int total_grade_current; 	
int i,j,x=1,y,flag,m;
char result;
int R,E;
int total_grade;
char AAA[]="+A",AA[]="A",A[]="-A";
char BBB[]="+B",BB[]="B",B[]="-B";
char CCC[]="+C",CC[]="C",C[]="-C";
char DDD[]="+D",DD[]="D",D[]="-D";
char F[]="F";



for(i=1;i<=n;i++)
{       printf("enter Total GPA of student : ");
        scanf("%f",&s_information[i].stu_gpa.overall_GPA);

        printf("enter Number of semesters finished : ");
        scanf("%d",&s_information[i].stu_gpa.num_semester);

        printf("enter GPA for term %d: ",y);
        printf("enter each semester's GPA: ");
        for(m=1;m<=s_information[i].stu_gpa.num_semester;m++)
        {
                for(y=0;y<=m;x++)
                {
                    printf("enter GPA for term%d: ",x);
                    scanf("%f",&s_information[i].stu_gpa.individual_GPAs[y]);
                }
        x++;
        }
        printf("\n");
        printf("enter the number of courses finished: ");
        scanf("%d",&s_information[i].stu_course.FC.num_courses_finished);

        printf("enter the credit hours of courses finished: ");
        scanf("%d",&s_information[i].stu_course.FC.credit_hourse_finished);

        printf("enter the number of current courses: ");
        scanf("%d",&s_information[i].stu_course.CC.num_current_courses);

        printf("enter the credit hours of current courses: ");
        scanf("%d",&s_information[i].stu_course.CC.credit_current_hourse);

        printf("enter data of finished course\n");
        printf("enter the number of courses finished");
        scanf("%d",&j);

       for(int x=0; x<j ; x++)
        {
            printf("enter the code of course: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].course_finished_code);

            printf("enter the name of course: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].course_finished_name);

            printf("enter the credit hours of course: ");
            scanf("%d",&s_information[i].stu_course.CFDs[x].course_credit_hourse);

            printf("enter 1 to Yes the student finished the course and 0 to No if not:\n");
            scanf("%d",&flag);
            if(flag==1)
            {
            printf(" YES ");
            printf("enter the semester of finished course");
            scanf("%d",&s_information[i].stu_course.CFDs[x].CFD.semester_of_finished);
            printf("enter the year of finished course");
            scanf("%d",&s_information[i].stu_course.CFDs[x].CFD.year_of_finished);
            }
            else
            {
            printf(" NO ");
            }
            printf("enter course tutor: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.CL.nameL1);

            printf("enter the second name: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.CL.nameL2);

            printf("enter the third name: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.CL.nameL3);

            printf("enter the GTA");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.G.nameG1);

            printf("enter the second name: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.G.nameG2);

            printf("enter the third name: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.G.nameG3);

            printf("enter the GTA lab");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.GL.nameGL1);

            printf("enter the second name: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.GL.nameGL2);

            printf("enter the third name: ");
            scanf("%s",s_information[i].stu_course.CFDs[x].CFT.GL.nameGL3);

            printf("enter the Marks finished\n");
            printf("enter the 7th of student: ");
            scanf("%d",&s_information[i].stu_course.CFDs[x].MAF.sevenTH_finished);

            printf("enter the 12th of student: ");
            scanf("%d",&s_information[i].stu_course.CFDs[x].MAF.twelveTH_finished);

            printf("enter the year work: ");
            scanf("%d",&s_information[i].stu_course.CFDs[x].MAF.year_work_finished);

            printf("enter the final exam: ");
            scanf("%d",&s_information[i].stu_course.CFDs[x].MAF.final_exam_finished);

            s_information[i].stu_course.CFDs[x].MAF.total_grade_finished =
            s_information[i].stu_course.CFDs[x].MAF.sevenTH_finished
            + s_information[i].stu_course.CFDs[x].MAF.twelveTH_finished
            + s_information[i].stu_course.CFDs[x].MAF.year_work_finished
            + s_information[i].stu_course.CFDs[x].MAF.final_exam_finished;
            int final_result = s_information[i].stu_course.CFDs[x].MAF.total_grade_finished;
            printf("Grade of the student in this course according to the standard grading scheme:");
            if(final_result > 97)
            {
                printf("A+");
            }
            if(final_result < 97 && final_result>92)
            {
                printf("A");
            }
            if(final_result < 92 && final_result>85)
            {
                printf("A-");
            }
            if(final_result < 85 && final_result>80)
            {
                printf("B+");
            }
            if(final_result < 80 && final_result>75)
            {
                printf("B");
            }
            if(final_result < 75 && final_result>70)
            {
                printf("B-");
            }
            if(final_result < 70 && final_result>65)
            {
                printf("C+");
            }
            if(final_result < 65 && final_result>60)
            {
                printf("C");
            }
            if(final_result < 60 && final_result>55)
            {
                printf("C-");
            }
            if(final_result < 55 && final_result>50)
            {
                printf("D+");
            }
            if(final_result < 50 && final_result>45)
            {
                printf("D");
            }
            if(final_result < 45 && final_result> 40)
            {
                printf("D-");
            }
            if(final_result < 40)
            {
                printf("F");
            }
            printf("\n");
        }
        printf("enter Student percentage absence during the course: ");
        scanf("%d",&s_information[i].stu_course.CFDs[E].per_finished_absence);
        printf("\n");
        printf("enter data of current course\n");
        for(int E=0;E<R;E++)
        {
            printf("enter the code of course: ");
            scanf("%s",s_information[i].stu_course.CCD[E].course_current_code);

            printf("enter the name of course: ");
            scanf("%s",s_information[i].stu_course.CCD[E].course_current_name);

            printf("enter the credit hours of course: ");
            scanf("%d",&s_information[i].stu_course.CCD[E].course_credit_hourse);

            printf("enter course tutor: ");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.CL.nameL1);

            printf("enter the second name: ");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.CL.nameL2);

            printf("enter the third name: ");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.CL.nameL3);

            printf("enter the GTA");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.G.nameG1);

            printf("enter the second name: ");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.G.nameG2);

            printf("enter the third name: ");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.G.nameG3);

            printf("enter the GTA lab");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.GL.nameGL1);

            printf("enter the second name: ");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.GL.nameGL2);

            printf("enter the third name: ");
            scanf("%s",s_information[i].stu_course.CCD[E].CT.GL.nameGL3);

            printf("enter the Marks acquired finished\n");
            printf("enter the 7th: ");
            scanf("%d",&s_information[i].stu_course.CCD[E].MAC.sevenTH_current);

            printf("enter the 12th: ");
            scanf("%d",&s_information[i].stu_course.CCD[E].MAC.twelveTH_current);

            printf("enter the year work: ");
            scanf("%d",&s_information[i].stu_course.CCD[E].MAC.year_work_current);

            printf("enter the final exam: ");
            scanf("%d",&s_information[i].stu_course.CCD[E].MAC.final_exam_current);

            s_information[i].stu_course.CFDs[x].MAF.total_grade_finished =
            s_information[i].stu_course.CFDs[x].MAF.sevenTH_finished
            + s_information[i].stu_course.CFDs[x].MAF.twelveTH_finished
            + s_information[i].stu_course.CFDs[x].MAF.year_work_finished
            + s_information[i].stu_course.CFDs[x].MAF.final_exam_finished;
            int final_result = s_information[i].stu_course.CFDs[x].MAF.total_grade_finished;
            printf("Grade of the student in this course according to the standard grading scheme:");
            if(total_grade_current > 97)
            {
                printf("%s",AAA);
            }

            if(total_grade_current < 97 && total_grade_current>92)
            {
                printf("%s",AA);
            }

            if(total_grade_current < 92 && total_grade_current > 85)
            {
                printf("%s",A);
            }
            if(total_grade_current < 85 && total_grade_current > 80)
            {
                printf("%s",BBB);
            }
            if(total_grade_current < 80 && total_grade_current > 75)
            {
                printf("%s",BB);
            }
            if(total_grade_current < 75 && total_grade_current > 70)
            {
                printf("%s",B);
            }
            if(total_grade_current < 70 && total_grade_current > 65)
            {
                printf("%s",CCC);
            }
            if(total_grade_current < 65 && total_grade_current > 60)
            {
                printf("%s",CC);
            }
            if(total_grade_current < 60 && total_grade_current > 55)
            {
                printf("%s",C);
            }
            if(total_grade_current < 55 && total_grade_current > 50)
            {
                printf("%s",DDD);
            }
            if(total_grade_current < 50 && total_grade_current > 45)
            {
                printf("%s",DD);
            }
            if(total_grade_current < 45 && total_grade_current > 40)
            {
                printf("%s",D);
            }
            if(total_grade_current < 40)
            {
                printf("%s",F);
            }
        }
        printf("enter Student percentage absence during the course: ");
        scanf("%d",&s_information[i].stu_course.CCD[E].per_current_absence);

}

}
               
           
           
void age(struct student_information s_information[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("year: 20 %c %c\n", *(s_information[i].stu_regis.reg_num),*(s_information[i].stu_regis.reg_num+1));
        printf("term: %c\n",*(s_information[i].stu_regis.reg_num+2));
        printf("student number: %c %c %c %c",*(s_information[i].stu_regis.reg_num+3),
        *(s_information[i].stu_regis.reg_num+4),*(s_information[i].stu_regis.reg_num+5),
        *(s_information[i].stu_regis.reg_num+6));
        if(s_information[i].stu_id.IDv.current_year-s_information[i].stu_id.IDv.last_year==1)
                printf("student ID is valid\n");
        else
            printf("student ID is not valid\n");
        //days of  month//
        int month[] = { 31, 28, 31, 30, 31, 30, 31,
                          31, 30, 31, 30, 31 };

        
        if (s_information[i].stu_age.birth_date > s_information[i].stu_age.current_date) {
        s_information[i].stu_age.current_date = s_information[i].stu_age.current_date + s_information[i].stu_age.birth_month - 1;
        s_information[i].stu_age.current_month = s_information[i].stu_age.current_month - 1;
        }
        
        if (s_information[i].stu_age.birth_month > s_information[i].stu_age.current_month) {
        s_information[i].stu_age.current_year = s_information[i].stu_age.current_year - 1;
        s_information[i].stu_age.current_month = s_information[i].stu_age.current_month + 12;
        }

        // date, month, year//
        int calculated_date = s_information[i].stu_age.current_date - s_information[i].stu_age.birth_date;
        int calculated_month = s_information[i].stu_age.current_month - s_information[i].stu_age.birth_month;
        int calculated_year = s_information[i].stu_age.current_year - s_information[i].stu_age.birth_year;

        //print the present age
        printf("Present Age\nYears: %d  Months: %d  Days:"
                    " %d\n",calculated_year,calculated_month,calculated_date);
    }
}






int main ()
{
int n;

printf("enter the number of students:");
scanf("%d",&n);
printf("\n");
struct student_information s_information[10];
data(s_information,n);
data(s_information,n);
age(s_information,n);
return 0;


}




