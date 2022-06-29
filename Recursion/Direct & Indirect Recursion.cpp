//  Recursion - When a function calls itself directly or indirectly.

## **Direct Recursion**

void fun1(){
  
  // some line of code
  
    fun1();
}



## **Indirect Recursion**

void fun1(){
   
   // some line of code    
    
    fun2();
}

fun2(){
  
    // some line of code 
     
    fun1();
  
}
    
