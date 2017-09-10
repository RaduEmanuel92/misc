package AnonymousClass;

class Main {    
	   public static void main(String[ ] args) { 
	    A  object = new  A() {
	      @Override public void print () {
	       System.out.println("Hello" );
	       }
	    };
	    object.print(); //utputs Hello
	    
	    A obj2 = new A();
		obj2.print(); //outputs A
		
	   } 
	   
}