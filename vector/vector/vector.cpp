//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//	//vector����
//	//// constructors used in the same order as described above:
//	//std::vector<int> first; // empty vector of ints
//	//std::vector<int> second(4, 100); // four ints with value 100
//	//std::vector<int> third(second.begin(), second.end()); // iterating through second
//	//std::vector<int> fourth(third);//��������
//
//	////vector������
//	//// ʹ��push_back����4������
	/*vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	cout << v.size() << endl;
	v.pop_back();
	cout << v.size() << endl;

	v.insert(v.begin(), 0);
	for (auto e : v)
		cout << e << " ";
	cout << endl;*/
//	//// ʹ�õ��������б�����ӡ
//	//vector<int>::iterator it = v.begin();
//	//while (it != v.end())
//	//{
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	//cout << endl;
//	//// ʹ�õ����������޸�
//	//it = v.begin();
//	//while (it != v.end())
//	//{
//	//	*it += 2;
//	//	++it;
//	//}
//	//// ʹ�÷�����������б����ٴ�ӡ
//	//vector<int>::reverse_iterator rit = v.rbegin();
//	//while (rit != v.rend())
//	//{
//	//	cout << *rit << " ";
//	//	++rit;
//	//}
//
//	// vector �ռ���������
//	///*size_t sz;
//	//std::vector<int> foo;
//	//sz = foo.capacity();
//	//std::cout << "making foo grow:\n";
//	//for (int i = 0; i<100; ++i) {
//	//	foo.push_back(i);
//	//	if (sz != foo.capacity()) {
//	//		sz = foo.capacity();
//	//		std::cout << "capacity changed: " << sz << '\n';
//	//	}
//	//}*/
//	//std::vector<int> bar;
//	//size_t sz = bar.capacity();
//	//bar.reserve(100); 
//	//std::cout << "making bar grow:\n";
//	//for (int i = 0; i<100; ++i) {
//	//	bar.push_back(i);
//	//	if (sz != bar.capacity()) {
//	//		sz = bar.capacity();
//	//		std::cout << "capacity changed: " << sz << '\n';
//	//	}
//	//}
//
//	//std::vector<int> myvector;
//	// set some initial content:
//	//for (int i = 1; i<10; i++)
//	//	myvector.push_back(i);
//	//myvector.resize(5);//newsize<oldzizeֱ�ӽ���ЧԪ�ظ������ٵ�newsize�����Ϊ1 2 3 4 5
//	//myvector.resize(8, 100);//oldsize<newsize<=capacityֱ�ӽ���ЧԪ�ظ�������newsize�������Ԫ��ʹ��data��䣬���Ϊ1 2 3 4 5 100 100 100
//	//myvector.resize(12);//newsize>capacityֱ�ӽ���ЧԪ�ظ�������newsize,���ݵ�newsize�������Ԫ����0��䣨dataΪ�������ͣ�
//	//std::cout << "myvector contains:";
//	//for (int i = 0; i<myvector.size(); i++)
//	//	std::cout << ' ' << myvector[i];//���Ϊ1 2 3 4 5 100 100 100 0 0 0 0
//	//std::cout << '\n';
//
//	// vector ��ɾ���
//	/*int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	vector<int>::iterator it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	v.pop_back();
//	v.pop_back();
//	it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;*/
//
//	//int a[] = { 1, 2, 3, 4 };
//	//vector<int> v(a, a + sizeof(a) / sizeof(int));
//	//// ʹ��find����3����λ�õ�iterator
//	//vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//	//// ��posλ��֮ǰ����30
//	//v.insert(pos, 30);
//	//vector<int>::iterator it = v.begin();
//	//while (it != v.end()) {
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	//cout << endl;
//	//pos = find(v.begin(), v.end(), 3);
//	//// ɾ��posλ�õ�����
//	//v.erase(pos);
//	//it = v.begin();
//	//while (it != v.end()) {
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	//cout << endl;
//	//return 0;
//
//	// operator[]+index �� C++11��vector����ʽfor+auto�ı���
//	// vectorʹ�������ֱ�����ʽ�ǱȽϱ�ݵġ�
//	//int a[] = { 1, 2, 3, 4 };
//	//vector<int> v(a, a + sizeof(a) / sizeof(int));
//	//// ͨ��[]��д��0��λ�á�
//	//v[0] = 10;
//	//cout << v[0] << endl;
//	//// ͨ��[i]�ķ�ʽ����vector
//	//for (size_t i = 0; i < v.size(); ++i)
//	//	cout << v[i] << " ";
//	//cout << endl;
//	//vector<int> swapv;
//	//swapv.swap(v);
//	//cout << "v data:";
//	//for (size_t i = 0; i < v.size(); ++i)
//	//	cout << v[i] << " ";
//	//cout << endl;
//	//cout << "swapv data:";
//	//for (size_t i = 0; i < swapv.size(); ++i)
//	//	cout << swapv[i] << " ";
//	//cout << endl;
//	//// C++11֧�ֵ���ʽ��Χfor����
//	//for (auto x : swapv)
//	//	cout << x << " ";
//	//cout << endl;
//	//return 0;
//}

//ģ��ʵ��
#include <iostream>
#include <assert.h>
using namespace std;
namespace bit
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;

		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _end_of_storage(nullptr)
		{}

		vector(const vector<T>& v)
		{
			_start = new T[v.size()];
			memcpy(_start, v._start, sizeof(T)*v.size());
			_finish = _start + v.size();
			_end_of_storage = _start + v.size();
		}

		// v1 = v2
		vector<T>& operator=(vector<T> v)
		{
			//this->swap(v);
			swap(v);
			return *this;
		}

		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _end_of_storage = nullptr;
			}
		}

		// v1.swap(v2)
		void swap(vector<T>& v)
		{
			swap(_start, v._start);
			swap(_finish, v._finish);
			swap(_end_of_storage, v._end_of_storage);
		}

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		void resize(size_t n, const T& val = T())
		{
			// 1.���nС�ڵ�ǰ��size������Ч���ݸ�����С��n
			if (n < size())
			{
				_finish = _start + n;
				return;
			}
			// 2.�ռ䲻��������
			if (n > capacity())
			{
				reserve(n);
			}
			// 3.��size����n
			while (_finish != _start + n)
			{
				*_finish = val;
				++_finish;
			}
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				T* tmp = new T[n];
				if (_start)
				{
					memcpy(tmp, _start, sizeof(T)*sz);
					delete[] _start;
				}

				_start = tmp;
				_finish = _start + sz;
				_end_of_storage = _start + n;
			}
		}

		void push_back(const T& x)
		{
			/*	if (_finish == _end_of_storage)
			{
			size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
			reserve(newcapacity);
			}

			*_finish = x;
			++_finish;*/
			insert(end(), x);
		}

		void pop_back()
		{
			//assert(_finish > _start);
			//--_finish;
			erase(--end());
		}

		//void insert(iterator& pos, const T& x)
		void insert(iterator pos, const T& x)
		{
			assert(pos >= _start && pos <= _finish);

			if (_finish == _end_of_storage)
			{
				size_t n = pos - _start;
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
				reserve(newcapacity);
				pos = _start + n;
			}

			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}

			*pos = x;
			++_finish;
		}

		void erase(iterator pos)
		{
			assert(pos < _finish && pos >= _start);
			iterator begin = pos + 1;
			while (begin < _finish)
			{
				*(begin - 1) = *begin;
				++begin;
			}

			--_finish;
		}

		size_t size() const
		{
			return _finish - _start;
		}

		size_t capacity() const
		{
			return _end_of_storage - _start;
		}

		T& operator[](size_t pos)
		{
			return _start[pos];
		}

		const T& operator[](size_t pos) const
		{
			return _start[pos];
		}
	private:
		//T* _a;
		//size_t _size;
		//size_t _capacity;		
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};

	
}
void test_vector1()
{
	    bit::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		auto it = v.begin();
		v.insert(it, 0);
		for (size_t i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;

		it = v.begin();
		v.erase(it);
		for (size_t i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;

		bit::vector<int>::iterator iter = v.begin();
		while (iter != v.end())
		{
			cout << *iter << " ";
			++iter;
		}
		cout << endl;

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
}

void test_vector2()
{
		bit::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);

		bit::vector<int> copy(v);
		for (auto e : copy)
		{
			cout << e << " ";
		}
		cout << endl;
}
int main()
{
		test_vector2();
		return 0;
}