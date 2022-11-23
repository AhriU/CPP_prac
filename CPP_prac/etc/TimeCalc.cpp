#include <iostream>
using namespace std;

struct TimeRec
{
	int hours;
	int minutes;
};

// AddTime ver1 (hour and minutes calc)
void AddTime(TimeRec& t1, const TimeRec& t2)
{
	t1.minutes += t2.minutes;
	t1.hours += t2.hours + t1.minutes / 60;
	t1.minutes %= 60;
}

// AddTime ver2 (only minutes calc)
void AddTime(TimeRec& t1, const int minutes)
{
	t1.minutes += minutes;
	t1.hours += t1.minutes / 60;
	t1.minutes %= 60;
}

int mainTimeCalc_CDD()
{
	TimeRec tRec1 = { 2,30 };
	TimeRec	tRec2 = { 1,45 };

	cout << tRec1.hours << "시간" << tRec1.minutes << "분 + ";
	cout << tRec2.hours << "시간" << tRec2.minutes << "분 =";
	// AddTime ver1
	AddTime(tRec1, tRec2);
	cout << tRec1.hours << "시간" << tRec1.minutes << "분" << endl;

	cout << tRec1.hours << "시간" << tRec1.minutes << "분 + 135분 = ";
	// AddTime ver2
	AddTime(tRec1, 135);
	cout << tRec1.hours << "시간" << tRec1.minutes << "분" << endl;
	return 0;
}