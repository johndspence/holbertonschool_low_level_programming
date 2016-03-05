

void doit( int &x ) 
        { 
             &x = 5; 
             
        } 
 
 
        // 
        // Test code for passing by a variable by reference 
        // 
        int 
        main() 
        { 
          int z = 27; 
          doit( z ); 
          printf("z is now %d\n", z); 
 
          return 0; 
        } 
