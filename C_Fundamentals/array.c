#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   
    int counter[6] = {0}; // 在 Initialize 時最少需要指定一個值，而未被指定的會被自動設為0。 在 array 元素個數可以省略，會以初始化元素的個數取代 例如int c[]={1, 1, 2}; 那這個array大小就為3
    srand(time(NULL));
    for(int i=1; i <= 6000; ++i)
    {
        int dice = rand() % 7;
        switch(dice)
        {
            case 1:counter[0]++; break;
            case 2:counter[1]++; break;
            case 3:counter[2]++; break;
            case 4:counter[3]++; break;
            case 5:counter[4]++; break;
            case 6:counter[5]++; break;
        }
    }
    for(int i=0; i < 6; i++)
    {
        printf("[%d]: %d\n", i+1 ,counter[i]);
    }
    return 0;
}

/*在記憶體中 一個array會使用一段連續的記憶體空間來存放 讓我聯想到os有提到關於 Internal / External 的存放問題*/
