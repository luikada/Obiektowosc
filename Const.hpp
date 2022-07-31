#pragma once
#include <string>
class LectureRoom
{
	int size = 0;
public:
	LectureRoom (int _size) : size(_size){}  //konstruktor z lista inicjalizujaca. podloga jest po to zeby zastpic this - > w liscie inicjalizujacej
	//int size = 15;
	//const std::string patronage = "sala prof. Xinskiego"; // gdyby nie bylo konst to tez by sie nie robilo zmianw mainie
	static const std::string patronage; //dziala bo odnosi sedowszystkich obiektow


};