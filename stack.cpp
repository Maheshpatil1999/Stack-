#include<iostream>

int pop();
int isfull();
int isempty();
void push(int n);
static int top=-1;
static int arr[5];

using namespace std;


int isfull()
{
	if(top==5)
	{
		return 1;
	}
	else 
	return 0;
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else 
	return 0;
}
void push(int n)
{
	if(!isfull())
	{
		arr[++top]=n;
	}
	else
	cout<<"Overflow";
}
int pop()
{
	if(!isempty())
	{
		int n=arr[top--];
		return n;
	}
	else
	{
	cout<<endl;
	 cout<<"underflow"<<endl;
	 top=-1;
	 return 0;
    }
}
int main()
{
	
	int ch;
	char ans;
	do
	{
		cout<<"1) Push Operation:"<<endl;
        cout<<"2) Pop Operation:"<<endl;
		cout<<"3) Display:"<<endl;
		cin>>ch;
		switch(ch)
		{
		
		   case 1:
		            int n1,a;
					cout<<"Enter how many no you have want:"<<endl;
					cin>>n1;
					for(int i=0;i<n1;i++)
					{
						cin>>a;
						push(a);
						
					}	
					cout<<endl;
					break;
			case 2:
				int b;
				cout<<"how many poped element :"<<endl;
				cin>>b;
				for(int i=0;i<b;i++)
				{
					cout<<"popped data is:"<<pop()<<" ";
					
				}
				cout<<endl;
				break;
			case 3:
			        cout<<"Stack Are:"<<endl;
					for(int i=0;i<=top;i++)
					{
						cout<<arr[i]<<" ";
					}
					cout<<endl;
					break;
				
				
				
		}
		cout<<"check another operation(y/n):";
		cin>>ans;
		cout<<endl;			
	}while(ans!='n');
}
