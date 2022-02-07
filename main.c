/*เก็บคะแนนครั้งที่4*/
//ชื่อ---
//โปรแกรมหาพื้นที่รูปสามเหลี่ยม
//1/2*b*h
#include <stdio.h>
int main()
{
    float base; //ฐาน
    float height; //สูง
    float pt; //คำตอบ
    printf("\nInput value of base : ");
    scanf("%f", &base);
    printf("Input value of height : ");
    scanf("%f", &height);
    pt=0.5 * base * height;
    printf("Triangle =%.2f",pt);
}
