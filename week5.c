#include <stdio.h>
int main()
{
    int x = 100; // เก็บเป็นที่อยู่(address)
    int q = 0144; // เลขฐาน 8
    int w = 0x64; // เลขฐาน 16
    printf("x = %d\n", x);
    printf("Reference of x (Address of x) = %lu\n", &x); // long unsigned decimal integer
    printf("Reference of x (Address of x) = %p\n", &x);  // p = ฐาน 16

    int number[] = {1, 2, 3, 4, 5, 6}; 
    // int number[100]; array of integer
    int number[100] = {1, 2, 3, 4, 5, 6};
    number[100] = 200;
    // pointer จะเก็บ address เป็นตัวชี้ --->
    printf("index 1 = %d\n", number[1]); // ตัวที่ 1
    printf("Reference of number[1] = %p\n", &number[1]); // & means the address 
    printf("Reference of number[0] = %p\n", &number[0]); 
    printf("Reference of number = %p\n", number + 1); // บวกตามขนาดของประเภทข้อมูล

    int number[] = {1, 2, 3, 4, 5, 6};
    // int (*ptr)[10]; 
    // Here ptr is pointer that can point to an array of 10 integers.
    int *ptr = &x; // Points to the whole integer x.
    int *arrPtr; // ประกาศตัวแปร pointer (*)
    arrPtr = number; // เรียกใช้ pointer ไม่ต้องมี *
    arrPtr += 3;  // อยู่ตัวที่ 4
    *arrPtr += 3;  
    printf("arrPtr = %p, *arrptr = %d\n", arrPtr, *arrPtr);

    int number[] = {1, 2, 3, 4, 5, 6}; // array เป็นพอยเตอร์
    for (int *ptr = number; ptr <= &number[5]; ptr++) {
        printf("[%p] = %d\n", ptr, *ptr);
    }
    int *ptr2 = number;
    for (int i = 0; i < 6; i++){
        printf("[%p] = %d\n", ptr2 + i, *(ptr2 + i));
    }
    
    char input[100];
    int count = 0;
    char c;
    while ( (c = getchar()) != '\n') {
        input[count] = c;
        ++count;
    }

    input[count] = '\0';
    for (char *cPtr = input; *cPtr != '\0'; cPtr++) {
        printf("%c\n", *cPtr); 
    
}