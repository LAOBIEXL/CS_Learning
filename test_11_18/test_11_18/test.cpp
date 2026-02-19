#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//#include<set>
//
//int main()
//{
//	//创建set;
//	set<int> mp;
//	multiset<int> mp2;
//
//	//返回是否为空：
//	cout << mp.empty() << endl;
//	cout << mp.size() << endl;
//
//	//向红黑树中插入一个元素，时间复杂度O(logN);
//	int a[20] = { 1,34,6,75,2325,66,34,66,44,55,44,44,44,2,674,3,1,2325,96,345 };
//	for (int e : a)
//	{
//		mp.insert(e);
//		mp2.insert(e);
//	}
//	cout << mp.size() << endl;
//
//	//set具有begin和end迭代器，可以使用范围for访问；
//	for (auto e : mp)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	for (auto e : mp2)
//	{
//		cout << e << " ";
//	}
//	cout << mp2.count(44);
//	cout << endl << mp2.size() << endl;
//	cout << endl;
//
//	//find 和 count 
//	//其中，find查找元素，返回的是一个迭代器，需要解引用才能使用；count则是直接返回计数字，所以一般使用count来进行查找；
//
//	if (mp.count(2325)) cout << "2325" << endl;
//	if (mp.count(5)) cout << "5" << endl;
//	if (mp.count(23)) cout << "23" << endl;
//	if (mp.count(674)) cout << "674" << endl;
//	cout << *(mp.find(674)) << endl;
//
//	//erase删除：
//	mp.erase(2325);
//	if (mp.count(2325)) cout << "2325" << endl;
//	if (mp.count(674)) cout << "674" << endl;
//
//	//lower_bound() 返回不大于x的最小元素，upper_bound()返回大于x的最小元素
//	
//	cout << *(mp.upper_bound(66)) << endl;
//	cout << *(mp.lower_bound(66)) << endl;
//
//
//
//
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//int main()
//{
//	map<string, int> mp;
//	
//	//插入，传入的元素是一个键值对；
//	mp.insert({ "zhangsan",3 });
//	mp.insert({ "lisi",8 });
//	mp.insert({ "wangwu",5 });
//	
//	//使用迭代器
//	for (pair<string,int> e : mp)
//	{
//		cout << e.first << e.second << " ";
//	}
//	cout << endl;
//
//	cout << mp.count("lisi") << endl;
//	cout << mp.empty() << endl;
//	cout << mp.size() << endl;
//	cout << (*(mp.find("lisi"))).second << endl;
//
//	cout << (*mp.upper_bound("wangwu")).first << endl;
//
//	//运算符重载入[]
//	//以第一个关键字作为下标，可以访问second的值，并且需要注意的是，这个方式查找key,如果输入的key本身不再红黑树内部，就会先插入一个key,并将这个key的value默认为零；
//	cout << mp["lisi"] << endl;
//	cout << mp["wangwu"] << endl;
//	cout << mp["zhangsan"] << endl;
//	cout << mp["zhaoliu"] << endl;
//
//	for (auto e : mp)
//	{
//		cout << e.first << " ";
//	}
//
//	
// 
// return 0;
//}

//引用，统计输入的多个字符串中每个字符串出现的次数；

//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//int main()
//{
//	string s;
//	map<string, int> mp;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> s;
//		mp[s]++;
//		//如果s已经在mp中，就修改value值，如果不在，就先插入mp中再修改value值；
//	}
//
//	for (auto e : mp)
//	{
//		cout << e.first << ':' << e.second << endl;
//	}
//
//
//	return 0;
//}

    

////线性探测法：
//#include<iostream>
//using namespace std;
//
//const int N = 23, INF = 0x3f3f3f3f;
//int h[23];
//
////初始化函数，将哈希表的每一个空位置都初始化为无穷大；
//void init()
//{
//    memset(h, 0x3f, sizeof(h));
//}
//
////设置哈希函数，返回key对应的位置：
//int f(int x)
//{
//    //X是原始的key，需要对其使用除留余数法进行转化：
//    int id = (x % N + N) % N;
//    while (h[x] != INF && h[x] != x) {
//        id++;
//        //同时需要注意是否越界；
//        if (id == N) id = 0;
//    }
//
//    return id;
//}
//
//void insert(int d)
//{
//    int id = f(d);
//    h[id] = d;
//}
//
//bool find(int d)
//{
//    int id = f(d);
//    return h[id] == d;
//}
//
//int main()
//{
//    init();
//
//
//
//
//    return 0;
//}

////链地址法：
//
//#include<iostream>
//using namespace std;
//
//const int N = 23;
//int h[N];
//int ne[N], e[N];
////记录当前链表存储位置的移动指针：
//int idx = 0;
//
//int f(int x)
//{
//    int id = (x % N + N) % N;
//    return id;
//}
//
//bool find(int d)
//{
//    int id = f(d);
//    for (int i = h[id]; i; i = ne[i])
//    {
//        if(e[i] == d)
//        {
//            return true;
//        }
//    }
//    return false;
//    
//}
//
//void insert(int d)
//{
//    if (find(d)) return;
//    //注意，以下方法是头插，无论是否已经存在都会插入，所以需要加入判断；
//    int id = f(d);
//    e[++idx] = d;
//    ne[idx] = h[id];
//    h[id] = idx;
//}
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    while (n--)
//    {
//        int op, x;
//        cin >> op >> x;
//        if (op == 1)
//            insert(x);
//        else
//        {
//            if (find(x))
//            {
//                cout << "yes" << endl;
//            }
//            else
//            {
//                cout << "no" << endl;
//            }
//        }
//    }
//
//    return 0;
//}

////插入排序：
//#include<iostream>
//using namespace std;
//int main()
//{
//    int a[7] = { 16, 7, 5, 49, 13, 42, 50 };
//    for (int i = 0; i < 7; i++)
//    {
//        for (int j = i; j > 0; j--)
//        {
//            if (a[j] < a[j - 1])
//            {
//                swap(a[j], a[j - 1]);
//            }
//            else break;
//        }
//    }
//    
//    for (int i = 0; i < 7; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//
//
//    return 0;
//}

////插入排序：
//#include<iostream>
//using namespace std;
//
//int a[50] = {};
//int n;
//
//void insert_sort()
//{
//    for (int i = 2; i <= n; i++)
//    {
//        int t = a[i];//将要插入的值保存防止被覆盖；
//        int j = i - 1;
//        while (a[j] > t && j >= 1)
//        {
//            a[j + 1] = a[j];
//            j--;
//        }
//        a[j + 1] = t;
//    }
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//
//    insert_sort();
//
//    for (int i = 1; i <= n; i++) cout << a[i] << " ";
//    cout << endl;
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//
//int a[100];
//int n;
//
//void selection_sort()
//{
//    for (int i = 1; i < n; i++)//只需要选择到倒数第二个元素即可，并且这个地方的i下标可以作为交换的地址
//    {
//        int pos = i;
//        for (int j = i + 1; j <= n; j++)
//        {
//            if (a[j] < a[pos])
//            {
//                pos = j;
//            }
//        }
//        swap(a[i], a[pos]);
//    }
//
//
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    
//    selection_sort();
//
//    for (int i = 1; i <= n; i++) cout << a[i] << " ";
//    cout << endl;
//
//    return 0;
//
// }
//
//
//#include<iostream>
//using namespace std;
//
//
//int a[100];
//int n;
//
//void bubble_sort()
//{
//    for (int i = 1; i < n; i++)
//    {
//        int flag = 1;
//        for (int j = 1; j <  n - i + 1; j++)//需要特别注意，如果冒泡排序的开始序列是从一开始，那么就需要在内层循环加一
//        {
//            if (a[j] > a[j + 1])
//            {
//                swap(a[j], a[j + 1]);
//                flag = 0;
//            }
//        }
//        if (flag) break;
//    }
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//
//    bubble_sort();
//
//    for (int i = 1; i <= n; i++) cout << a[i] << " ";
//    cout << endl;
//
//    return 0;
//
//}
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//priority_queue<int, vector<int>, greater<int>> heap;
//
//int a[10] = { 12,42,23,53,21,64,43,71,28,91 };
//
//int main()
//{
//    for (int i = 0; i < 10; i++)
//    {
//        heap.push(a[i]);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        a[i] = heap.top();
//        heap.pop();
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//
//
//    return 0;
//}


//
////向下调整算法：
//int n;
//int a[10];
//void down(int parent)
//{
//    int child = parent * 2;
//    //这个地方计算的是左孩子的存在性；
//    while (child <= n)
//    {
//        if (a[child + 1] > a[child] && child + 1 <= n) child++;
//        if (a[child] > a[parent])
//        {
//            swap(a[child], a[parent]);
//            parent = child;
//            child = 2 * parent;
//        }
//        else break;
//    }

#include<iostream>
using namespace std;

int a[21] = { 0,12,23,54,23,54,65,57,87,43,23,53,17,87,56,45,97,45,22,77,34 };

void down(int d, int n)
{
    int child = 2 * d;
    while (child <= n)
    {
        if (a[child + 1] > a[child] && child + 1 <= n) child++;
        if (a[child] < a[d]) return;
        swap(a[child], a[d]);
        d = child;
        child = 2 * d;
    }
}

void heap_sort()
{
    //第一步，首先从倒数第一个非子叶节点开始进行向下调整算法；
    //寻找倒数第一个非子叶节点的方法：最后一个节点的下标的一半就是他的父节点的下标，也就是所谓的倒数第一个非子叶节点：
    int f = 20 / 2;
    for (int i = f; i >= 1; i--)
    {
        down(i,20);
    }

    //从最后一位开始，每一次循环减少一次向下调整算法调整的总大小；
    for (int i = 20; i > 1; i--)
    {
        swap(a[1], a[i]);
        down(1, i - 1);
    }

}


int main()
{
    heap_sort();

    for (int i = 0; i < 20; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    return 0;
}