#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,curval,netx,nety,i,j,k,stat=0;
	string curturn;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long *xarr=new long long[n/2+1];
		long long *yarr=new long long[n/2+1];
		long long ctrx=0,ctry=0;
		stat=0;
		cin>>curval;
		nety+=curval;
		for(i=0;i<n;i++)
		{
			cin>>curturn>>curval;
			if(curturn=="L")
			{
				if(stat==0)
				{
					netx-=curval;
					xarr[ctrx]=-curval;
					ctrx++;
					stat=1;
				}
				else
				{
					nety+=curval;
					yarr[ctry]=curval;
					ctry++;
					stat=0;
				}
			}
			else
			{
				if(stat==0)
				{
					netx+=curval;
					xarr[ctrx]=curval;
					ctrx++;
					stat=1;
				}
				else
				{
					nety-=curval;
					yarr[ctry]=-curval;
					ctry++;
					stat=0;
					
				}
			}
		}
		sort(xarr,xarr+ctrx);
		sort(yarr,yarr+ctry);
		long long timereq=0;
		if(netx>0)
		{
			for(i=0;i<ctrx;i++)
			{
				if(xarr[i]>0)
				{
					break;
				}
			}
			long long initi=i;
			long long opt=0,addval;
			vector<long long>  sums;
			sums.empty();
			sums.push_back(opt);
			while(i<ctrx)
			{
				for(j=0;j<sums.size();j++)
				{
					addval=sums[j]+xarr[i];
					if(addval<=netx)
					{
						sums.push_back(addval);
						if(addval>opt)
						{
							opt=addval;
						}
					}
				}
			}
			i=initi;
			sums.empty();
			sums.push_back(0);
			long long opt1=opt;
			while(i<ctrx)
			{
				for(j=0;j<sums.size();j++)
				{
					addval=sums[j]+xarr[i];
					if(addval<=(2*netx-opt))
					{
						sums.push_back(addval);
						if(addval>opt)
						{
							opt=addval;
						}
					}
				}
			}
			if((netx-opt1)<(opt-netx))
			{
				opt=opt1;
			}
			timereq+=abs((int)(netx-opt));
		}
		else if(netx<0)
		{
			long long initi=i;
			long long opt=0,addval;
			vector<long long>  sums;
			sums.empty();
			sums.push_back(opt);
			while(i<ctrx && xarr[i]<0)
			{
				for(j=0;j<sums.size();j++)
				{
					addval=sums[j]+xarr[i];
					if(addval>=netx)
					{
						sums.push_back(addval);
						if(addval<opt)
						{
							opt=addval;
						}
					}
				}
			}
			i=initi;
			sums.empty();
			sums.push_back(0);
			long long opt1=opt;
			while(i<ctrx)
			{
				for(j=0;j<sums.size();j++)
				{
					addval=sums[j]+xarr[i];
					if(addval>=(2*netx-opt))
					{
						sums.push_back(addval);
						if(addval<opt)
						{
							opt=addval;
						}
					}
				}
			}
			if((netx-opt1)<(opt-netx))
			{
				opt=opt1;
			}
			timereq+=abs((int)(netx-opt));
		}
		if(nety>0)
		{
			for(i=0;i<ctry;i++)
			{
				if(yarr[i]>0)
				{
					break;
				}
			}
			long long initi=i;
			long long opt=0,addval;
			vector<long long>  sums;
			sums.empty();
			sums.push_back(opt);
			while(i<ctry)
			{
				for(j=0;j<sums.size();j++)
				{
					addval=sums[j]+yarr[i];
					if(addval<=nety)
					{
						sums.push_back(addval);
						if(addval>opt)
						{
							opt=addval;
						}
					}
				}
			}
			i=initi;
			sums.empty();
			sums.push_back(0);
			long long opt1=opt;
			while(i<ctry)
			{
				for(j=0;j<sums.size();j++)
				{
					addval=sums[j]+yarr[i];
					if(addval<=(2*nety-opt))
					{
						sums.push_back(addval);
						if(addval>opt)
						{
							opt=addval;
						}
					}
				}
			}
			if((nety-opt1)<(opt-nety))
			{
				opt=opt1;
			}
			timereq+=abs((int)(nety-opt));
		}
		else if(nety<0)
		{
			long long initi=i;
			long long opt=0,addval;
			vector<long long>  sums;
			sums.empty();
			sums.push_back(opt);
			while(i<ctrx && yarr[i]<0)
			{
				for(j=0;j<sums.size();j++)
				{
					addval=sums[j]+yarr[i];
					if(addval>=nety)
					{
						sums.push_back(addval);
						if(addval<opt)
						{
							opt=addval;
						}
					}
				}
			}
			i=initi;
			sums.empty();
			sums.push_back(0);
			long long opt1=opt;
			while(i<ctry)
			{
				for(j=0;j<sums.size();j++)
				{
					addval=sums[j]+yarr[i];
					if(addval>=(2*nety-opt))
					{
						sums.push_back(addval);
						if(addval<opt)
						{
							opt=addval;
						}
					}
				}
			}
			if((nety-opt1)<(opt-nety))
			{
				opt=opt1;
			}
			timereq+=abs((int)(nety-opt));
		}
		cout<<timereq<<endl;
		
	}
	return 0;
}
