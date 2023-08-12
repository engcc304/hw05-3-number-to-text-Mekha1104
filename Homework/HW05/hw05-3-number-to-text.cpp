/*
    จงแปลงตัวเลขที่ผู้ใช้ป้อนเข้ามาให้กลายเป็นตัวหนังสือ เช่น ผู้ใช้กรอกว่า 3 ให้แสดงผลลัพธ์ว่า Three
    (กำหนดให้สามารถกรอกเลขได้แค่ 0 ถึง 30 เท่านั้น)
    (กำหนดให้ใช้คำสั่ง switch case เท่านั้น)
    
    Test case:
        User input :
            12
    Output:
        Twelve

    Test case:
        User input :
            4
    Output:
        Four
*/
#include <iostream>

int main() {
    int userInput;
    std::cout << "fill in numbers (0-30): ";
    std::cin >> userInput;

    std::cout << "result: ";
    switch (userInput) {
        case 0:
            std::cout << "Zero";
            break;
        case 1:
            std::cout << "One";
            break;
        case 2:
            std::cout << "Two";
            break;
        case 3:
            std::cout << "Three";
            break;
        case 4:
            std::cout << "Four";
            break;
        case 5:
            std::cout << "Five";
            break;
        case 6:
            std::cout << "Six";
            break;
        case 7:
            std::cout << "Seven";
            break;
        case 8:
            std::cout << "Eight";
            break;
        case 9:
            std::cout << "Nine";
            break;
        case 10:
            std::cout << "Ten";
            break;
        case 11:
            std::cout << "Eleven";
            break;
        case 12:
            std::cout << "Twelve";
            break;
        case 13:
            std::cout << "Thirteen";
            break;
        case 14:
            std::cout << "Fourteen";
            break;
        case 15:
            std::cout << "Fifteen";
            break;
        case 16:
            std::cout << "Sixteen";
            break;
        case 17:
            std::cout << "Seventeen";
            break;
        case 18:
            std::cout << "Eighteen";
            break;
        case 19:
            std::cout << "Nineteen";
            break;
        case 20:
            std::cout << "Twenty";
            break;
        case 21:
            std::cout << "Twenty one";
            break;
        case 22:
            std::cout << "Twenty Two";
            break;
        case 23:
            std::cout << "Twenty Three";
            break;
        case 24:
            std::cout << "Twenty four";
            break;
        case 25:
            std::cout << "Twenty five";
            break;
        case 26:
            std::cout << "Twenty six";
            break; 
        case 27:
            std::cout << "Twenty seven";
            break;
        case 28:
            std::cout << "Twenty eight";
            break;
        case 29:
            std::cout << "Twenty nine";
            break;            
        case 30:
            std::cout << "Thirty";
            break;
        default:
            std::cout << "can't convert";
            break;
    }

    return 0;
}
