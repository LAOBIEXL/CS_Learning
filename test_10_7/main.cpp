//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int sum = 0;
//	int n,m;
//	cin >> m >> n;
//	for(int i =0; i < m ;i++)
//	{
//		for(int j = 0; j < n;j++)
//		{
//			int t;
//			cin >> t;
//			if(i==0 || j == 0 || i == m-1 || j == n-1)
//			{
//				sum += t;
//			}
//		}
//	}
//	cout << sum << endl;
//	
//	
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//const int N = 110;
//int a[N][N];
//
//int main()
//{
//	int n ;
//	int m;
//	cin >> n >> m; 
//	for(int i = 0; i <n;i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		} 
//	}
//	for(int i = 0; i < n;i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			if(i == 0 || j == 0 || i == n-1 || j == m -1)
//			{
//				cout << a[i][j] << " ";
//			 } 
//			 else
//			 {
//			 	cout << int(0.5 + (a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1])/5.0) << " ";
//			 }
//			 
//		}
//		cout << endl;
//	}
//	
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int a[7];
//int b[7];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 0; i < 7 ;i++)
//	{
//		cin >> a[i];
//	}
//	int re = 0;
//	while(n--){
//		int count = 0;
//		for(int i = 0; i < 7; i++)
//		{
//			int tem;
//			cin >> tem;
//			for(int e : a)
//			{
//				if(tem == e)
//				{
//					count ++;
//				}
//			}
//		}
//		switch(count)
//		{
//		case 1 :
//			b[6]++;
//			break;
//		case 2:
//			b[5]++;
//			break;
//		case 3 :
//			b[4]++;
//			break;
//		case 4 :
//			b[3]++;
//			break;
//		case 5 :
//			b[2]++;
//			break;
//		case 6 :
//			b[1]++;
//			break;
//		case 7 :
//			b[0]++;
//			break;
//			
//		}
//	} 
//	for(int i = 0; i < 7;i++)
//	{
//		cout << b[i] << " ";
//	}
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int b[10] = {0};
//	memcpy(b+5,a,sizeof a);
//	for(int i = 0;i <10 ;i++)
//	{
//		cout <<b[i] << " ";
//	}
//	
//	
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//	char arr1[10];
//	gets(arr1);
//	cout << arr1;
//
//
//
//	return 0;
//} 
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	char a[100];
//	cin >> a;
//	int sz = strlen(a);
//	
//	for(int i = 0; i < sz; i++)
//	{
//		if(a[i] >= 60 && a[i] <= 95)
//		{
//			a[i] += 32;
//		}
//		else if(a[i] >= 97 && a[i] <= 122)
//		{
//			a[i] -= 32;
//		}
//	}
//	cout << a << endl;
//	
//	
//	
//	
//	return 0;
// }

//#include<iostream>
//#include<cctype>
//using namespace std;
//
//int main()
//{
//	char a[] = "hEllo worlD";
//	int i = 0;
//	
//	while(a[i] != '\0')
//	{
//		if(islower(a[i]))
//		{
//			a[i] = toupper(a[i]);		
//		}		
//			
//		i++;
//	}
//	
//	cout << a;
//	
//	return 0;
// } 


//#include<iostream>
//#include<cctype>
//using namespace std;
//
//const int N = 300;
//char a[N];
//
//
//int main()
//{
//	fgets(a,N,stdin);
//	int i = 0;
//	int count = 0;
//	while(a[i] != '\0')
//	{
//		if(isdigit(a[i]))
//		{
//			count++;
//		}
//		i++;
//	}
//	cout << count << endl;	
//	return 0;
//}

//#include<cctype>
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	char a[30] = {0};
//	while(n--)
//	{
//		cin >> a;
//		int i =0;
//		while(a[i] != '\0')
//		{
//			if(i == 0)
//			{
//				if(isupper(a[i]) || islower(a[i]))
//				{
//					a[i] = toupper(a[i]);
//				}
//				
//			}
//			else
//			{
//				if(isupper(a[i]))
//				{
//					a[i] = tolower(a[i]); 
//					
//				}
//			}
//			
//			i++;
//		}
//		cout << a << endl;
//		
//	}
//	
//	
//	
//	
//	return 0;
//}
// 
//
//
//

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	double a;
//	cin >> a;
//	char b[510];
//	cin >> b;
//	int count = 0;
//	int i = 0 ;
//	while(b[i] != '\0')
//	{
//		char t;
//		cin >>t;
//		if(b[i] == t)
//		count++;
//		i++; 
//	 } 
//	 double ret = count * 1.0 / strlen(b); 
//	if(ret > a)
//	{
//		cout << "YES";
//	}
//	else
//	cout << "NO";
//	
//	
//	
//	return 0;
//}

//#include<iostream>
//#include<cstring> 
//using namespace std;
//
//int main()
//{
//	char a[110];
//	cin >> a;
//	int i = 0;
//	int sz = strlen(a);
//	for(int i = 0; i < sz; i++)
//	{
//		if(i < sz-1)
//		cout << char(a[i] + a[i + 1]);
//		else
//		cout << char(a[0] + a[i]);
//	}
//	
//	
//	
//	
//	
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//
//int main()
//{
//	char a[] = "abcdabcd";
//	char b[] = "ac";
//	if(strstr(a, b))
//	{
//		cout << "yes";
//	}
//	else
//	{
//		cout << "no";
//	}
//	
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//	char a[30] ;
//	char b[30];
//	cin >> a;
//	cin >> b;
//	if(strstr(a, b))
//	{
//		printf("%s is substring of %s", b, a);
//	}
//	else if(strstr(b, a))
//	{
//		printf("%s is substring of %s", a, b);
//	}
//	else
//	{
//		cout << "No substring";
//	}
//	
//	
//	
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	char a[1110] = {0};
//	cin >> a;
//
//	int i = 0;
//	int flag2 = 0;
//	while(a[i])
//	{
//		int count = 0;
//		int flag = 1;
//		int j = 0;
//		while(a[j])
//		{
//			if(a[j] == a[i])
//			count ++;
//			if(count >= 2)
//			{
//				flag = 0;
//				break;
//			}
//			j++;
//		}
//		if(flag)
//		{
//			flag2 = 1;
//			cout << a[i];
//			break;
//		}
//		i++;
//	}
//	if(!flag2)
//	{
//		cout << "no";
//	}
//	
//	
//	
//	
//	return 0;
//	
//}

#include<iostream>
using namespace std;

char a[1110];
int nums[128];

 int main()
 {
 	cin >> a;
 	int i = 0;
 	while(a[i])
 	{
 		nums[a[i]]++; 
 		i++;
	}
	i = 0;
	int flag = 1;
	while(a[i])
	{
		if( nums[a[i]] == 1 )
		{
			cout << a[i];
			flag = 0;
			break;
		}
		i++;
	}
	if(flag)
	cout << "no";
 	
 	return 0;
 }





