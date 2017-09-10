package Casting;

public class Main {
	public static void main(String[] args ) {
		A obj = new B(); // A is superclass
		obj.print();
		A b = (A) obj; //declare a B object
//and initialize it with the obj object casted as
// (just) B obj
		b.print();
		
	}
}
