import java.io.InputStreamReader
import java.io.BufferedReader
fun main(args:Array<String>) {
    var x=readLine()!!.toInt()
    while(x>0)
    {
        var str=readLine()
        
        var arr=IntArray(3)
        var j=0
        for(i in str!!.split(" "))
        {
            arr[j]=i!!.toInt()
            j++
        }
        if(arr[0]*arr[1]<arr[2])
        {
            println("No")
        }
        
        else
        {
            var flag=0
            for(i in 1..arr[0])
            {
                if(arr[2]%i==0)
                {
                    if((arr[2]/i)<=arr[1])
                    {
                                    
                        flag=1
                        break
                    }    
                }
            }   
            if(flag==1)
            {
                
                println("Yes")
            }
            else
            {
                println("No")
            }
        }
        x--
    }
}
