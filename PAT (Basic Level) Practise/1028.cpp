#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    string name;
    int year, month, date, count = 0;
    int maxyear = 0, maxmonth = 0, maxdate = 0, minyear = 9999, minmonth = 12, mindate = 31;
    string maxname, minname;
    for (int i = 0; i < num; i++) {
        cin >> name;
        scanf("%d/%d/%d",&year, &month, &date);
        if((year < 2014 || (year == 2014 && month < 9) || (year == 2014 && month == 9 && date <= 6)) &&
           (year > 1814 || (year == 1814 && month > 9) || (year == 1814 && month == 9 && date >= 6))) {
            count++;
            if(year > maxyear || (year == maxyear && month > maxmonth) || (year == maxyear && month == maxmonth && date > maxdate)) {
                maxyear = year;
                maxmonth = month;
                maxdate = date;
                maxname = name;
            }
            if(year < minyear || (year == minyear && month < minmonth) || (year == minyear && month == minmonth && date < mindate)) {
                minyear = year;
                minmonth = month;
                mindate = date;
                minname = name;
            }
        }
    }
    cout << count;
    if (count != 0) //¿¼ÂÇÃ»ÓÐÊä³ö 
        cout << " " << minname << " " << maxname;
    return 0;
}
