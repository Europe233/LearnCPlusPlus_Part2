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



////159ҳ��ϰ5.5:��if else��佫�ɼ�ת��Ϊ��ĸ����
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



////164ҳ��ϰ5.10��ͳ��Ԫ����ĸ��������ĸ������
//int main()
//{
	//unsigned cnt = 0,otherCnt=0;
	//char ch;
	//while (cin >> ch) {
	//	switch (ch) {
	//	//case 'a':case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':
	//	case 65:case 97:case 69 :case 101 :case 73:case 105:case 79 :case 111 :case 85:case 117://����ͬ��
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



////164ҳ��ϰ5.11��ͳ�ƿո��Ʊ�������з�������
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



////166ҳ��ϰ5.14������δ֪���������ʣ������Щ�����������ظ����ֵ��Ǹ����Լ��������ظ����ֵĴ���
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
	//		if (currCnt > maxCnt) {//�����һ�����ʳ��ֵĴ�������maxCnt
	//			maxCnt = currCnt;
	//			maxStr = str1;
	//		}
	//		str1 = str2;//�µ���
	//		currCnt = 1;
	//	}
	//}
	//if (currCnt > maxCnt) {//������һ�����ʳ��ֵĴ�������maxCnt
	//	maxCnt = currCnt;
	//	maxStr = str1;
	//}
	//cout << maxStr << " occurs " << maxCnt << " times." << endl;
	//system("pause");
	//return 0;
//}



//168ҳ��ϰ5.17����������vector���ж������Ƿ���һ������һ����ǰ׺
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
//	vector<int> v1 = { 1,2,3,4,5,6 }, v2 = { 1,2,3 };//��������
//	if (prefix(v1,v2))cout << "Yes" << endl;
//	else cout << "No" << endl;
//	system("pause");
//	return 0;
//}



////171ҳ����5.21������δ֪�����ĵ��ʣ�����������������Դ�д��ĸ��ͷ�ĵ��ʣ���������������û�е���Ϣ
//int main()
//{
	//string lastStr, currStr;
	//int tag=0;//tag=0��ʾû�������ظ��������Դ�д��ĸ��ͷ�ĵ���
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



////177ҳ��ϰ5.25���������������������������Ľ��������ڶ�����Ϊ0���׳�һ��������Ϣ����������
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


////186ҳ��ϰ6.7��ʹ�þֲ���̬������ͳ��һ������ִ�еĴ���
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



////188ҳ��ϰ6.10����ָ���βν�������������ֵ
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



//��ϰ6.21:���һ������������һ��int������int��ָ�룬�Ƚ�����ָ��ָ������Ĵ�С�����ؽϴ���Ǹ�
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



////196ҳ��ϰ6.21����Ŀ�����ϻ�����
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



////199ҳ��ϰ6.27����initializer_list��д���������һ�������ĺ�
//#include<initializer_list>
//using std::initializer_list;
//int sum(initializer_list<int> ilist) {
//	int ret=0;
//	for (const auto & i : ilist)ret += i;
//	return ret;
//}
//int main() 
//{
//	cout << sum({1,2,3,4,5}) << endl;//Test:Ӧ�����15
//	cout << sum({-3,-2,-1,0,1,2,3}) << endl;//Test��Ӧ�����0
//	system("pause");
//	return 0;
//}



////201ҳ�����֣��ó��������ش��󣺷��ؾֲ�����������
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



////204ҳ��ϰ6.32������
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



////���ԣ��������ָ����Ϊ�����βΣ�����һ��ά��Ϊ10��������������Ԫ�صĺ�
//int sum(int (*arr)[10]) {
//	int ret=0;
//	for (auto beg = begin(*arr); beg != end(*arr); ++beg)ret += *beg;
//	return ret;
//}
//int main()
//{
//	int ia[10] = {0,1,2,3,4,5,6,7,8,9};//Test�����Ϊ45
//	int(*arr)[10] = &ia;
//	cout << sum(arr) << endl;
//	system("pause");
//	return 0;
//}



//224ҳ��ϰ6.55��6.56
//��д4���������ֱ�ִ�����������ļӼ��˳�����һ��vector�д����⼸��������ָ�룬���ҵ���vector�е���ЩԪ��
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
	int i1 = 25, i2 = 5;//Test:�ĸ��������н��Ӧ��Ϊ��30,20,125,5
	for (auto func : v) {
		cout << func(i1, i2) << endl;
	}
	system("pause");
	return 0;
}