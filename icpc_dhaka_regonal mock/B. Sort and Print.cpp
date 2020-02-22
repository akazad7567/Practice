// C++ program to demonstrate structure sorting in C++
#include <bits/stdc++.h>
using namespace std;

struct Student
{
	char name[500]; // Given
	int roll;
	int marks;

};


bool compareTwoStudents(Student a, Student b)
{

	if (a.marks != b.marks )
		return a.marks > b.marks;


	return (a.roll < b.roll);
}

// Fills total marks and ranks of all Students
void computeRanks(Student a[], int n)
{

	sort(a, a+n, compareTwoStudents);

}

// Driver code
int main()
{
	int n=0;
    int ma=-1e5,l=0;
	scanf("%d",&n);
	Student a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i].roll;
      scanf(" %[^\n]s",a[i].name);
      cin>>a[i].marks;
      l=strlen(a[i].name);
      if(l>ma) ma=l;
  }

	computeRanks(a, n);
cout<<"Roll | Name       | Marks\n-------------------------\n";
	for (int i=0; i<n; i++)
	{
		//cout<<"   "<<a[i].roll<<" | "<<a[i].name<<"      | "<<a[i].marks<<'\n';
		printf("%4d | ",a[i].roll);
		cout<<left << std::setfill(' ');
		cout<<setw(11)<<a[i].name<<"| "<<a[i].marks<<'\n';


	}

	return 0;
}

