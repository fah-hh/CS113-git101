#include <stdio.h>
#include <stdlib.h>
char name[20]; // ตัวแปรต้องถูกประกาศก่อนใช้
char number[10]; // ตัวแปร array เก็บข้อมูลมากกว่า 1 จำนวนที่เป็นชนิดเดียวกัน

int main(){
    printf("Enter Name: ");
    gets(name); //รับ input name
    fgets(name, 10, stdin);
    printf("name = %s\n", name);

    char number[5];
    fgets(number, 5, stdin);

    int i = atoi(number); // เปลี่ยน array to int
    printf("number = %s, i = %d\n", number);
    char a = getchar();  // รับอักขระ 1 ตัว
    char b = getchar();
    puts(name); 
    int found = 0;
    float isExist = 0.0;
    char isOnline = '\0'; // บรรทัด19-21คือfalse
    fgets(number, 10, stdin);
    int i = atoi(number);
    // ใช้ sizeof ในการตรวจสอบขนาดตัวแปรและประเภทข้อมูล
    if (i >= 0 && i <= 10) {
        printf("if = %d", i >= 0 && i<=10); // ค่าจะออกเป็นค่าความจริง
    }
    fgets(number, 5, stdin);
    int i = atoi(number);
    int count = 0;

    while (count < i) {
        printf("%d\n", count);
        count++; // จะส่งตัวแปรไปก่อนแล้วบวกทีหลัง
        ++count; // บวกก่อนแล้วค่อยส่งตัวแปรไป จะเร็วกว่า
        count++ * count - 5; //ทำอันแรกก่อนเพราะเป็น unary 
    }
    
    int i = atoi(number);
    for (int j = 0; j <= i; j++) {
        printf("%d\n", j); // ทำบล็อคแรกก่อน รอบต่อไปค่อย3และ2 จนบล็อค2 เป็นเท็จจึงหลุดออกจากลูป
    }
}