#include <stdio.h>
#include <math.h>

int NgayCuaThang(int thang, int nam)
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
        {
            return 29;
        }
        else
        {
            return 28;
        }

    }
}

int main()
{
    int ngay, thang, nam;
    int ngayketiep, thangketiep, namketiep;
    printf("Moi ban nhap ngay thang nam: ");
    scanf_s("%d%d%d", &ngay, &thang, &nam);

    // Tim ngay tiep theo
    if (ngay == NgayCuaThang(thang, nam))
    {
        if (thang == 12)
        {
            ngayketiep = 1;
            thangketiep = 1;
            namketiep = nam + 1;
        }
        else
        {
            ngayketiep = 1;
            thangketiep = thang + 1;
            namketiep = nam;
        }
    }
    else
    {
        ngayketiep = ngay + 1;
        thangketiep = thang;
        namketiep = nam;
    }

    printf("Ngay ke tiep la %d %d %d", ngayketiep, thangketiep, namketiep);

    return 0;
}