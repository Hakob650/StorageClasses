#include <stdio.h>
 struct Date {
    int day;
    int month;
    int year;
};
const int monthsdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int isLeap(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int countDays(struct Date date){
    int days=date.year*365+date.day;
    for(int i=0;i<date.month-1;++i){
        days+=monthsdays[i];
    }int years=date.year;
    days+=years/4-years/100+years/400;
    if(isLeap(date.year) && date.month>2){
        days+=1;
    }return days;
}
int GetDiffernenceInDays(struct Date d1,struct Date d2){
    int n1=countDays(d1);
    int n2=countDays(d2);
    if(n1>n2){
        return n1-n2;
    }else{
        return n2-n1;
    }
}
int main(){
    struct Date date1={1,1,2023};
    struct Date date2={21,4,2025};
    int dif=GetDiffernenceInDays(date1,date2);
    printf("Difference in Days: %d\n",dif);
    return 0;
}