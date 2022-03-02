#pragma once
class Date
{
private:
	int dd;
	int mm;
	int yyyy;
public:
	Date(int, int, int);
	void Affiche() const;
	bool isbis() const;
	int maxDays() const;

};