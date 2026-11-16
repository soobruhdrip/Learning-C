#include <stdio.h>
int calctotal(int m1, int m2, int m3){
    return m1+m2+m3;
}

int calcavg(int total){
    return total/3;
}

char findgrade(int mrks)
{
    if (mrks>=90){
        return 'A';
    }
    else if (mrks>=75){
        return 'B';
    }
    else if (mrks>=60){
        return 'C';
    }
    else {
        return 'F';
    }
}

int main()
{
    int m1,m2,m3,total;
    float avg;
    char grade;

    printf("Enter your grades : ");
    scanf("%d %d %d", &m1, &m2, &m3);
    total=calctotal(m1,m2,m3);
    avg=calcavg(total);
    grade=findgrade(avg);

    printf("Total Marks : %d\n", total);
    printf("Average     : %.2f\n", avg);
    printf("Grade       : %c\n", grade);


}
