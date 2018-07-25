#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::begin;
using std::end;
using std::string;
using std::vector;
using std::range_error;



////159页练习5.5:用if else语句将成绩转化为字母评级
//int main()
//{
	//unsigned score;
	//string grade;
	//vector<string>v = { "D","C","B","A" };
	//while (cin >> score) {
	//	if (score > 100) {
	//		cerr << "Error!" << endl;
	//		return -1;
	//	}
	//	else if (score == 100)grade = "A++";
	//	else if (score < 60)grade = "F";
	//	else {
	//		grade = v[(score - 60) /10];
	//		if (score % 10 == 0 || score % 10 == 1 || score % 10 == 2)grade += "-";
	//		if (score % 10 == 8 || score % 10 == 9)grade += "+";
	//	}
	//	cout << grade << endl;
	//}
	//system("pause");
	//return 0;
//}



////164页练习5.10：统计元音字母和其他字母的数量
//int main()
//{
	//unsigned cnt = 0,otherCnt=0;
	//char ch;
	//while (cin >> ch) {
	//	switch (ch) {
	//	//case 'a':case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':
	//	case 65:case 97:case 69 :case 101 :case 73:case 105:case 79 :case 111 :case 85:case 117://作用同上
	//		++cnt;
	//		break;
	//	default:
	//		++otherCnt;
	//		break;
	//	}
	//}
	//cout << "Number of vewel is " << cnt << endl;
	//cout << "Number of other letter is " << otherCnt << endl;
	//system("pause");
	//return 0;
//}



////164页练习5.11：统计空格、制表符、换行符的数量
//int main()
//{
	//string str;
	//unsigned vewelCnt = 0, spaceCnt = 0, htCnt = 0, newLineCnt=0;
	//while (getline(cin,str)) {
	//	for(const auto& c:str)
	//		switch (c) {
	//		case 'a':case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':
	//			++vewelCnt;
	//			break;
	//		case' ':
	//			++spaceCnt;
	//			break;
	//		case'\t':
	//			++htCnt;
	//			break;
	//		}
	//	++newLineCnt;
	//}
	//cout << "Number of vewel is " << vewelCnt << endl;
	//cout << "Number of space is " << spaceCnt << endl;
	//cout << "Number of ht is " << htCnt << endl;
	//cout << "Number of new line is " << newLineCnt << endl;
	//system("pause");
	//return 0;
//}



////166页练习5.14：输入未知数量个单词，输出这些单词里连续重复出现的那个，以及它连续重复出现的次数
//int main()
//{
	//string str1, str2,maxStr;
	//unsigned maxCnt = 0, currCnt = 0;
	//if (cin >> str1) {
	//	maxCnt = 1; currCnt = 1; maxStr = str1;
	//}
	//else {
	//	cerr << "Error!" << endl;
	//	return -1;
	//}
	//while (cin >> str2) {
	//	if (str2 == str1) {
	//		++currCnt;
	//	}
	//	else {
	//		if (currCnt > maxCnt) {//如果上一个单词出现的次数大于maxCnt
	//			maxCnt = currCnt;
	//			maxStr = str1;
	//		}
	//		str1 = str2;//新单词
	//		currCnt = 1;
	//	}
	//}
	//if (currCnt > maxCnt) {//如果最后一个单词出现的次数大于maxCnt
	//	maxCnt = currCnt;
	//	maxStr = str1;
	//}
	//cout << maxStr << " occurs " << maxCnt << " times." << endl;
	//system("pause");
	//return 0;
//}



//168页练习5.17：给出两个vector，判断其中是否有一个是另一个的前缀
//bool prefix(std::vector<int> &v1,std::vector<int> &v2) {
//	const auto & bigV = (v1.size() < v2.size()) ? v2 : v1;
//	const auto & smallV = (v1.size() < v2.size()) ? v1 : v2;
//	for (decltype(bigV.cbegin()) bigIt = bigV.cbegin(), smallIt = smallV.cbegin();
//		smallIt != smallV.cend(); ++smallIt, ++bigIt) {
//		if (*bigIt != *smallIt)
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	vector<int> v1 = { 1,2,3,4,5,6 }, v2 = { 1,2,3 };//测试数据
//	if (prefix(v1,v2))cout << "Yes" << endl;
//	else cout << "No" << endl;
//	system("pause");
//	return 0;
//}



////171页连续5.21：输入未知数量的单词，如果有连续出现且以大写字母开头的单词，输出它。否则输出没有的信息
//int main()
//{
	//string lastStr, currStr;
	//int tag=0;//tag=0表示没有连续重复出现且以大写字母开头的单词
	//cin >> lastStr;
	//while (cin >> currStr) {
	//	if (!isupper(currStr[0]))continue;
	//	else if (currStr == lastStr) {
	//		cout << currStr << endl;
	//		tag = 1;
	//		break;
	//	}
	//	else lastStr = currStr;
	//}
	//if (!tag)cout<<"No such word!!!"<<endl;
	//system("pause");
	//return 0;
//}



////177页练习5.25：输入两个整数，输出它们相除的结果。如果第二个数为0，抛出一个错误信息，并处理它
//int main()
//{
    //int num1, num2;
	//cout << "Please input numbers:" << endl;
	//while (cin >> num1 >> num2) {
	//	try {
	//		if (num2 != 0)cout << num1 / num2 << endl;
	//		else throw range_error("num2 can not be 0");
	//	}
	//	catch(range_error err){
	//		cout << err.what() << "\nTry again? Enter y or n:" << endl;
	//		char c;
	//		cin >> c;
	//		if (!cin || c == 'n')break;
	//	}
	//}
	//return 0;
//}


////186页练习6.7：使用局部静态变量，统计一个函数执行的次数
//int main()
//{
//	size_t count_calls();
//	for (int i = 0; i != 10; ++i) {
//		cout << count_calls() << endl;
//	}
//	system("pause");
//	return 0;
//}
//size_t count_calls(){
//	static size_t cnt = 0;
//	return ++cnt;
//}



////188页练习6.10：用指数形参交换两个整数的值
//void exchange(int * p1,int *p2) {
//	int temp=*p1;
//	*p1 = *p2; *p2 = temp;
//	return;
//}
//int main() {
//	int i1 = 1, i2 = 3;
//	int * p1 = &i1, *p2 = &i2;
//	exchange(p1,p2);
//	cout << "i1= " << i1 << endl << "i2= " << i2 << endl;
//	system("pause");
//	return 0;
//}



//练习6.21:设计一个函数，传入一个int型数和int型指针，比较数和指针指向的数的大小，返回较大的那个
//int main() {
//	int bigger(int i, int *p);
//	int i1 = 1, i2 = 8; int *p = &i2;//test
//	cout << bigger(i1, p) << endl;
//	system("pause");
//	return 0;
//}
//int bigger(int i, int *p) {
//	return (*p > i) ? *p : i;
//}



////196页练习6.21：题目程序上机检验
//void print(int ia[10]) {
//	for (size_t i = 0; i != 10; ++i)cout << ia[i] << endl;
//}
//int main()
//{
//	int ia[10] = { 0,1,2,3,4,5 };
//	print(ia);
//	system("pause");
//	return 0;
//}



////199页练习6.27：用initializer_list编写函数，输出一组整数的和
//#include<initializer_list>
//using std::initializer_list;
//int sum(initializer_list<int> ilist) {
//	int ret=0;
//	for (const auto & i : ilist)ret += i;
//	return ret;
//}
//int main() 
//{
//	cout << sum({1,2,3,4,5}) << endl;//Test:应该输出15
//	cout << sum({-3,-2,-1,0,1,2,3}) << endl;//Test：应该输出0
//	system("pause");
//	return 0;
//}



////201页程序复现：该程序有严重错误：返回局部变量的引用
//const string & manip() {
//	string ret;
//	ret = "Test";
//	if(!ret.empty())return ret;
//	else return "Empty";
//}
//int main()
//{
//	const string & ref = manip();
//	cout << ref << endl;
//	system("pause");
//	return 0;
//}



////204页练习6.32程序复现
//int &get(int *arry,int index) {
//	return arry[index];
//}
//int main()
//{
//	int ia[10];
//	for (int i = 0; i != 10; ++i)get(ia, i) = i;
//	for (int i = 0; i != 10; ++i)cout << ia[i] << endl;
//	system("pause");
//	return 0;
//}



////尝试：用数组的指针作为函数形参，计算一个维数为10的整数数组所有元素的和
//int sum(int (*arr)[10]) {
//	int ret=0;
//	for (auto beg = begin(*arr); beg != end(*arr); ++beg)ret += *beg;
//	return ret;
//}
//int main()
//{
//	int ia[10] = {0,1,2,3,4,5,6,7,8,9};//Test：结果为45
//	int(*arr)[10] = &ia;
//	cout << sum(arr) << endl;
//	system("pause");
//	return 0;
//}



//224页练习6.55和6.56
//编写4个函数，分别执行两个整数的加减乘除，在一个vector中储存这几个函数的指针，并且调用vector中的这些元素
int add(int i1, int i2) {
	return i1 + i2;
}
int minus(int i1, int i2) {
	return i1 - i2;
}
int multiply(int i1, int i2) {
	return i1 * i2;
}
int divide(int i1, int i2) {
	if (i2 != 0)return i1 / i2;
	else {
		cout << "Error" << endl;
		return 0;
	}
}
int main()
{
	typedef int(*FuncP) (int, int);
	FuncP p1 = &add, p2 = &minus, p3 = multiply, p4 = divide;
	vector<FuncP> v = { p1,p2,p3,p4 };
	int i1 = 25, i2 = 5;//Test:四个函数运行结果应该为：30,20,125,5
	for (auto func : v) {
		cout << func(i1, i2) << endl;
	}
	system("pause");
	return 0;
}