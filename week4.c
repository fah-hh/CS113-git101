#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int x = 1000; //ตัวแปร Global = ตัวแปรที่ถูกประกาศไว้นอกฟังก์ชัน
// การนิยาม function
int addTen (int x) { // Function header   
    x += 10;    //Function Body
    return x;
}
int addTwenty(); // ประกาศไว้

int main() { // Local Scope อยู่ในปีกกา ถูกใช้งานได้เพียงภายในฟังก์ชันที่ถูกประกาศไว้
    int x = 90;
    int y = addTen(x); //ส่ง x เข้าไปใน function addTen 
    printf("addTen in main = %d\n", y); 
    printf("addTwenty in main = %d", addTwenty());
    // printf, scanf และ getchar เป็นบางส่วนของ function ที่อยู่ใน standard library functions
} 
// การจะเรียกใช้ฟังก์ชันคณิตศาสตร์มาช่วยในการเขียนโปรแกรมต้องเพิ่ม #include <math.h> ด้วย
// ตัวอย่าง sin(),cos(),sqrt()
int addTwenty() {
    x += 20;
    return x; // ส่งค่ากลับ การทำงานจะกลับไปทำงานต่อจากจุดที่ฟังก์ชันถูกเรียกใช้
}

// Dynamic Storage Duration 
// พื้นที่เก็บข้อมูลที่ allocate ตามความต้องการของโปรแกรมที่กำลังทำงานอยู่

// Recursion ฟังก์ชันที่สามารถเรียกใช้ตัวเองได้
int fac(int i){
    if (i == 1){
        return 1;
    }
    return i * fac(i-1); //เรียกซ้ำอีก
} 
// เมื่อเกิดการเรียกซ้ำ การเรียกจะก๊อปฟังก์ชัน (เช่น ตัวแปรlocal) เป็นอิสระจากการถูกเรียกในครั้งแรก 

/* Random Number Generator
rand () ใช้ในการสร้างเลขสุ่ม ปกติแล้วจะเป็นชุดเลขสุ่มที่เหมือนๆกัน ถ้าอยากได้ต่างออกไป ก็ต้องเรียก srand() เพื่อกำหนดค่าให้ random 

Makefile จะบรรจุกฎต่างๆที่ใช้ในการสร้าง เช่น executable file

Separate Compilation คอมไพล์แยกส่วน 
วิธีการคอมไพล์
$ gcc -c main.c  จะสร้าง main.o
$ gcc -c func.c  จะสร้าง func.o
$ gcc main.o func.o -o main.exe จะเชื่อม main.o และ func.o

Storage Classes 
auto และ register เมื่อทำงานใน block ที่ตัวแปรพวกนี้ถูกประกาศและเมื่อออกจาก block ตัวแปรจะไม่มีใน memory อีก
register การเก็บค่าในตัวแปรนี้เพื่อความเร็วในการเข้าถึง
extern และ static จะถูกกำหนดขึ้นมาใน memory ตั้งแต่เมื่อเริ่มทำงาน และจะอยู่ใน memory จนกว่าโปรแกรมจะสิ้นสุดการทำงาน
ตัวแปร global และชื่อฟังก์ชันถูกกำหนดให้เป็น extern ตั้งแต่เริ่มแรก แต่ถ้าประกาศตัวแปร local โดยใช้ static จะเข้าถึงได้แค่ใน function แต่จะยังอยู่ใน memory */



