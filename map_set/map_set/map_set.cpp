#include<iostream>
#include<algorithm>
#include<map>
#include<set>
#include<string>
using namespace std;
//�ײ�--ƽ����������������Ӷȣ�log n����Ч--���ٲ����ڲ���
void test_set()
{
	set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(2);
	s.insert(4);

	//����������������ҿ�
	set<int>::iterator it = s.begin();
	while (it!=s.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//����
	set<int>::iterator ret = s.find(2);
	if (ret != s.end())
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}
	if (ret != s.end())
	{
         s.erase(ret);//�ô���Ч�ĵ�����������ɾ����ֵ�����ɾ����ֵset����û�оͲ�ɾ--��find������ɾ
	}
	//s.erase(20);

}
//k�ṹ--ͨ��һ��ֵ����һ��ֵ--�ֵ䡢ͳ������
void test_map()
{
	map<string, string> dict;
	dict.insert(pair<string, string>("sort", "����"));
	dict.insert(pair<string, string>("insert", "����"));
	dict.insert(pair<string, string>("delete", "ɾ��"));

	map<string, string>::iterator dit = dict.begin();
	//auto dit = dict.begin();//c++11֧��
	while (dit != dict.end())
	{
		//pair<k,v>& operator*()
		cout << (*dit).first << "" << (*dit).second << endl;//dit���������ֵ����װ��pair�Ľṹ���
		////pair<k,v>*operator->()
		//cout << dit->first << "" << dit->second << endl;
		++dit;
	}
	cout << endl;
	//��;1���ֵ�
	string str;
	while (cin >> str)
	{
		auto ret = dict.begin();
		if (ret != dict.end())
		{
			cout << ret->second << endl;
		}
		else
		{
			cout << "�õ��ʲ��ڴ��ֵ���" << endl;
		}
	}
	//��;2��ͳ�ƴ���
	string strs[] = { "ƻ��", "�㽶", "��ݮ", "����", "��ݮ", "��ݮ", "����", "�㽶", "�㽶", "�㽶", "�㽶" };
	map<string, int>countmap;
	for (auto str : strs)
	{
		//1���� ++����
		//2������ insert pair<ˮ��,1>
		auto ret = countmap.find(str);
		if (ret!=countmap.end())//�ҵ���
		{
			ret->second++;
		}
		else
		{
			countmap.insert(pair<string, int>(str, 1));
		}
	}
	//ͳ�ƴ����ĵڶ��ַ���
	for (auto str : strs)
	{
		//insert����ɹ������棬ʧ�ܷ��ؼ�
		//pair<map<string, int>::iterator,bool> ret=countmap.insert(pair<string, int>(str, 1));
		auto ret = countmap.insert(pair<string, int>(str, 1));
		if (ret.second == false)//����ʧ�ܣ������Ѿ������ֵ�ˣ�����++
		{
           ret.first->second++;
		}
	}
	//ͳ�ƴ�����3�ַ���
	string strs[] = { "ƻ��", "�㽶", "��ݮ", "����", "��ݮ", "��ݮ", "����", "�㽶", "�㽶", "�㽶", "�㽶" };
	map<string, int>countmap;
	for (auto str : strs)
	{
		countmap[str]++;//Ϊʲô��
	}
}
#include<vector>
void GetFavoriteFruit(const vector<string>& fruits��size_t k)
{
	//��ͳ��ÿ��ˮ�����ִ���
	map<string, size_t> m;
	for (auto &e : fruits)
	{
		auto it = m.find(e);
		if (it != m.end())
		{
			it->second++;
		}
		else
		{
			m.insert(make_pair(e, 1));
		}
	}
	//���ִ�������ǰk��ˮ��--TOP-K--���ȼ�����
	multimap<size_t, string,greater<size_t>> mm;
	for (auto &e : m)
	{
		mm.insert(make_pair(e.second, e.first));
	}
	vector<string> ret;
	
}
int main()
{
	//test_set();
	test_map();
}