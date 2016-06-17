import java.io.InputStreamReader
import java.io.BufferedReader
fun main(args:Array<String>) {
    
    var x=readLine()!!.toInt()
    
    var str=readLine()
    
    var arr=IntArray(x)
    var arr2=IntArray(x)
    for(i in 0..x-1)
    {
        arr2[i]=0
    }
    var k=0
    for(i in str!!.split(" "))
    {
        arr[k]=i!!.toInt()
        var j=0
        var c=0
        while(c<arr[k])
        {
            if(arr2[j]==0)
            {
                c++
            }
            j++
            if(j==x-1)
            {
                break
            }
           
        }
        arr2[k]=k+1
        k++
    }
    for(i in 0..x-1)
    {
        print("${arr2[i]} ")
    }    
    
   
}	
