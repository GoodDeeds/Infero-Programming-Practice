#include<bits/stdc++.h>
using namespace std;
int numtaken(int board[10][10], int x, int y, int id)
{
	int i=max(x-1,0),j=max(y-1,0);
	int count=0,val,tempcount=0;
	if(id==1)
	{
		val=2;
	}
	else
	{
		val=1;
	}
	tempcount=0;
	while(i>0 && j>0 && i<x && j<y && board[i][j]==val)
	{
		tempcount++;
		i--;
		j--;
	}
	if(board[i][j]==id)
	{
		count+=tempcount;
	}
	i=max(x-1,0);
	j=y;
	tempcount=0;
	while(i>0 && i<x && board[i][j]==val)
	{
		tempcount++;
		i--;
	}
	if(board[i][j]==id)
	{
		count+=tempcount;
	}
	i=max(x-1,0);
	j=min(y+1,9);
	tempcount=0;
	while(i>0 && j<9 && i<x && j>y && board[i][j]==val)
	{
		tempcount++;
		i--;
		j++;
	}
	if(board[i][j]==id)
	{
		count+=tempcount;
	}
	i=x;
	j=max(y-1,0);
	tempcount=0;
	while(j>0 && j<y && board[i][j]==val)
	{
		tempcount++;
		j--;
	}
	if(board[i][j]==id)
	{
		count+=tempcount;
	}
	i=x;
	j=min(y+1,9);
	tempcount=0;
	while(j<9 && j>y && board[i][j]==val)
	{
		tempcount++;
		j++;
	}
	if(board[i][j]==id)
	{
		count+=tempcount;
	}
	i=min(x+1,9);
	j=max(y-1,0);
	tempcount=0;
	while(i<9 && j>0 && i>x && j<y && board[i][j]==val)
	{
		tempcount++;
		i++;
		j--;
	}
	if(board[i][j]==id)
	{
		count+=tempcount;
	}
	i=min(x+1,9);
	j=y;
	tempcount=0;
	while(i<9 && i>x && board[i][j]==val)
	{
		tempcount++;
		i++;
	}
	if(board[i][j]==id)
	{
		count+=tempcount;
	}
	i=min(x+1,9);
	j=min(y+1,9);
	tempcount=0;
	while(i<9 && j<9 && i>x && j>y && board[i][j]==val)
	{
		tempcount++;
		i++;
		j++;
	}
	if(board[i][j]==id)
	{
		count+=tempcount;
	}
	return count;
	
	
}
int main()
{
	int board[10][10];
	int id;
	int i,j,k;
	int moveover=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			cin>>board[i][j];
		}
	}
	cin>>id;
	for(i=0;i<10;i+=9)
	{
		for(j=0;j<10;j+=9)
		{
			if(board[i][j]==3)
			{
				cout<<i<<" "<<j<<endl;
				moveover=1;
				break;
			}
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	if(board[0][9]!=0)
	{
		for(i=0;i<2;i++)
		{
			for(j=8;j<10;j++)
			{
				if((i!=0 || j!=9) && board[i][j]==3)
				{
					cout<<i<<" "<<j<<endl;
					moveover=1;
					break;
				}
			}
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	if(board[0][0]!=0)
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				if((i!=0 || j!=0) && board[i][j]==3)
				{
					cout<<i<<" "<<j<<endl;
					moveover=1;
					break;
				}
			}
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	if(board[9][0]!=0)
	{
		for(i=8;i<10;i++)
		{
			for(j=0;j<2;j++)
			{
				if((i!=9 || j!=0) && board[i][j]==3)
				{
					cout<<i<<" "<<j<<endl;
					moveover=1;
					break;
				}
			}
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	if(board[9][9]!=0)
	{
		for(i=8;i<10;i++)
		{
			for(j=8;j<10;j++)
			{
				if((i!=9 || j!=9) && board[i][j]==3)
				{
					cout<<i<<" "<<j<<endl;
					moveover=1;
					break;
				}
			}
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if((i==0 && (j==2 || j==7)) || (i==2 && (j==0 || j==9)) || (i==7 && (j==0 || j==9)) || (i==9 && (j==2 || 				j==7)))
			{
				if(board[i][j]==3)
				{
					cout<<i<<" "<<j<<endl;
					moveover=1;
					break;
				}
			}
			
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	for(i=2;i<=7;i+=5)
	{
		for(j=2;j<=7;j+=5)
		{
			if(board[i][j]==3)
			{
				cout<<i<<" "<<j<<endl;
				moveover=1;
				break;
			}
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if((i==1 && (j==2 || j==7)) || (i==2 && (j==1 || j==8)) || (i==7 && (j==1 || j==8)) || (i==8 && (j==2 || 				j==7)))
			{
				if(board[i][j]==3)
				{
					cout<<i<<" "<<j<<endl;
					moveover=1;
					break;
				}	
			}
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	/*for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i>=2 && j>=2 && i<=7 && j<=7 && board[i][j]==3)
			{
				cout<<i<<" "<<j<<endl;
				moveover=1;
				break;
			}
			if((i==0 || i==1) && j>2 && j<7 && board[i][j]==3)
			{
				cout<<i<<" "<<j<<endl;
				moveover=1;
				break;	
			}
			if((i==8 || i==9) && j>2 && j<7 && board[i][j]==3)
			{
				cout<<i<<" "<<j<<endl;
				moveover=1;
				break;	
			}
			if((j==0 || j==1) && i>2 && i<7 && board[i][j]==3)
			{
				cout<<i<<" "<<j<<endl;
				moveover=1;
				break;	
			}
			if((j==8 || j==9) && i>2 && i<7 && board[i][j]==3)
			{
				cout<<i<<" "<<j<<endl;
				moveover=1;
				break;	
			}
		}
	}*/
	//Using max take over instead of first possibility as in above
	int maxcount=-1,cou,maxx,maxy;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			cou=-1;
			if(i>=2 && j>=2 && i<=7 && j<=7 && board[i][j]==3)
			{
				cou=numtaken(board,i,j,id);
			}
			else if((i==0 || i==1) && j>2 && j<7 && board[i][j]==3)
			{
				cou=numtaken(board,i,j,id);
			}
			else if((i==8 || i==9) && j>2 && j<7 && board[i][j]==3)
			{
				cou=numtaken(board,i,j,id);	
			}
			else if((j==0 || j==1) && i>2 && i<7 && board[i][j]==3)
			{
				cou=numtaken(board,i,j,id);	
			}
			else if((j==8 || j==9) && i>2 && i<7 && board[i][j]==3)
			{
				cou=numtaken(board,i,j,id);
			}
			if(cou>maxcount)
			{
				maxcount=cou;
				maxx=i;
				maxy=j;
			}
			
		}
	}
	if(maxcount!=-1)
	{
		cout<<maxx<<" "<<maxy<<endl<<maxcount<<endl;
		moveover=1;
	}
	if(moveover==1)
	{
		return 0;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if((i==0 && (j==1 || j==8)) || (i==1 && (j==0 || j==9)) || (i==8 && (j==0 || j==9)) || (i==9 && (j==1 || 				j==8)))
			{
				if(board[i][j]==3)
				{
					cout<<i<<" "<<j<<endl;
					moveover=1;
					break;
				}	
			}
		}
	}
	if(moveover==1)
	{
		return 0;
	}
	for(i=1;i<=8;i+=7)
	{
		for(j=1;j<=8;j+=7)
		{
			if(board[i][j]==3)
			{
				cout<<i<<" "<<j<<endl;
				moveover=1;
				break;
			}	
		}
	}
	return 0;	
}
