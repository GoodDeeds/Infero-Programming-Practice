import java.io.InputStreamReader
import java.io.BufferedReader
fun main(args:Array<String>) {
    
    var str1=readLine()
    var str2=readLine()
    var j=0
    var k=0
    var arr1=IntArray(1002)
    var arr2=IntArray(1002)
    var resarr=IntArray(1002)
    var size1=0
    var size2=0
    var num=0
    for(i in str1!!.split(" "))
    {
        if(j==0)
        {
            size1=i!!.toInt()
        }
        else
        {
            arr1[j-1]=i!!.toInt()
        }
        j++    
        
    }
    for(i in str2!!.split(" "))
    {
        if(k==0)
        {
            size2=i!!.toInt()
        }
        else
        {
            arr2[k-1]=i!!.toInt()
        }
        k++    
        
    }
    for(i in 0..size1-1)
    {
        var flag=0
        for(j in 0..size2-1)
        {
            if(arr1[i]==arr2[j])
            {
                flag=1
            }
        }
        if(flag==0)
        {
            resarr[num]=arr1[i]
            num++
        }
    }
    for(i in 0..size2-1)
    {
        var flag=0
        for(j in 0..size1-1)
        {
            if(arr2[i]==arr1[j])
            {
                flag=1
            }
        }
        if(flag==0)
        {
            resarr[num]=arr2[i]
            num++
        }
    }
    print("$num ")
    for(i in 0..num-1)
    {
        print("${resarr[i]} ")
        
    }
   
}
