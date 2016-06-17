fun main(args: Array<String>) {
    val (a,x, y) = readLine()!!.split(' ').map(String::toInt)
    if(x in 1..a-1)
    {
        if(y in 1..a-1)
        {
        	print("0")
        }
        else if(y==a)
        {
        	print("1")
        }
        else if(y==0)
        {
        	print("1")
        }
        else
        {
        	print("2")
        }
 	}     
 	else if(x==a)
    {
        if(y in 0..a)
        {
        	print("1")
        }
        else
        {
        	print("2")
        }
 	}    
 	else if(x==0)
    {
        if(y in 0..a)
        {
        	print("1")
        }
        else
        {
        	print("2")
        }
 	}      
 	else 
 	{
 		print("2")
 	}
 	  
}
