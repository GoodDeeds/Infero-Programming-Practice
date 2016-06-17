import java.io.InputStreamReader
import java.io.BufferedReader
fun main(args:Array<String>) {
    val x =readLine()!!.toInt()
    var str2=arrayOfNulls<String>(2)
    var str=arrayOfNulls<String>(x)
    var value=IntArray(x)
    for(i in 0..x-1)
    {
        str[i]=readLine()!!
        
        var k=0
        for (ans in str[i]!!.split(" "))
        {
            k++            
            if(k==2)
            {
                ans!!.toInt()
                value[i]=ans!!.toInt()
            }
            else
            {
                str[i]=ans
            }
        }
        
        
    }
  
    for(i in 0..x-2)
    {
        for(j in 0..x-i-2)
        {
        	if(value[j]>value[j+1])
        	{
        		var temp=value[j]
        		
        		var temp2=str[j]
        		value[j]=value[j+1]
        		str[j]=str[j+1]
        		value[j+1]=temp
        		str[j+1]=temp2
        	}
        }
    }     
    for(i in 0..x-1)
    {
    	println("${str[i]}")
    }
   
   
}
