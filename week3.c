#include <stdio.h>
int main() {
    int x = 0; // expression เปลี่ยนเป็น statement เมื่อใส่ ; ปิดท้าย
    int y = 10;

    if (x == 0) {
        printf("Hi");
    } // เครื่องหมายปีกกา {} ใช้รวมเข้าด้วยกันเป็น block 
    /* ฟังก์ชัน if, else, while, for มักใช้ block ในการรวม statements เข้าด้วยกัน
    Null statement คือ statement ที่เหลือเพียง ; */
    else { // else จะคู่ if ที่ใกล้ที่สุด
        printf("Hello");
    }
    
    if (y == 1) {
        printf("Yes");
    }
    else if (y == 2) { // ถ้า expression ตัวไหนมีค่าเป็นจริง statement ข้างในจะถูกทำงาน
        printf("No"); 
    }
    else {
        printf("OK");   // เช็ค if และ else if ถ้าไม่เข้าถึงมาเข้า else
    }
    
    // switch ใช้แบบในลักษณะที่ว่าค่าของ expression เข้ากับ case ไหนถ้าตรงกัน statement ภายใต้จะทำงาน
    // switch (expression) { 
    //     case /* constant-expression */:
    //         /* code */
    //         break;
    //     default: // จะมีหรือไม่มีก็แล้วแต่
    //         /* code */
    //         break;
    // }
    
    // รูปแบบของ for loop
    for (x = 0; x <= y; x++) // โดยทั่วไปในบล็อค1,3 เป็นการกำหนดค่า ส่วนบล็อค2 จะเทียบค่า แต่บล็อค1,2,3 จะไม่ใส่เลยก็ได้
        if (x == 5) {
            break; // จะทำให้โปรแกรมหลุดออกมาจากลูป
        }
        else {
            continue; // บังคับให้วนซ้ำใหม่
        }

    // Loops Do-While มักเห็นในรูปนี้
    // do {
    //     statement
    // } while (expression);
    // ทำซ้ำจนกว่าจะเป็นเท็จ จึงออก loop
}