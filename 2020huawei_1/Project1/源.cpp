#include <string> 
#include <fstream> 
#include <iostream> 
#include<sstream>
#include<fstream>
//#include<ctime>
#include"Digraph.h"

using namespace std;
vector<int> count_nums;  //��¼���е��˺�

int main(int argc, char* argv[])
{
	//clock_t start, finish;
	//start = clock();
	ifstream myfile("test_data.txt");
	ifstream myfile2("test_data.txt");
	string temp;
	if (!myfile.is_open())
	{
		cout << "δ�ɹ����ļ�" << endl;
	}
	
	int num = 0;
	int line1 = 0;	
	while (getline(myfile, temp))
		line1++;  //��һ�������У�����Ϊ�ڽӱ�Ĵ�С��������resize
	
	Digraph nima(line1 * 2);

	int line2 = 0;  //����ȫ����ȡû���ж�line2��line1�Ƿ����
	while (getline(myfile2, temp))
	{
		istringstream ss(temp);
		int s1, s2, weight;
		char ch;
		ss >> s1 >> ch >> s2 >> ch >> weight;
		//count_nums��¼��ͬ���˺�
		if (find(count_nums.begin(), count_nums.end(), s1) == count_nums.end()) count_nums.push_back(s1);
		if (find(count_nums.begin(), count_nums.end(), s2) == count_nums.end()) count_nums.push_back(s2);

		nima.addEdge(s1, s2, weight);  //����һ���߲�����ͼ��
		line2++;
	}
	nima.re_size();
	cout << line1<<" "<<nima.size()<<" "<<line2 << endl;
	//finish = clock();
	//cout << finish - start << "/" << CLOCKS_PER_SEC << " (s) " << endl;
	system("pause");
	
	return 0;

	
}
