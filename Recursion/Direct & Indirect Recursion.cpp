//  Recursion - When a function calls itself directly or indirectly.

// Direct Recursion

void fun1(){
  ` 
    
        `
    fun1();
}

// Indirect Recursion

void fun1(){
  ` 
    
      `
    
    fun2();
}

fun2(){
  ` 
    
     `
    fun1();
  
}
    
