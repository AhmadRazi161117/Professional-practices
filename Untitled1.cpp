#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
class employe
{
	private:
		string name;
		int num;
		string date;
	public:
		employe();
		void get_data();
		
		
};
 class production_worker:public employe
 {
 	private:
 	int shift;
	double payrate;
 };
 #endif
