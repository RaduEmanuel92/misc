package Inheritance;

public class Program {
	public static void main(String[ ] args){
		B obj = new B();
		System.out.println("\n");
		
		B obj2 = new B("MyString");
		System.out.println("\n");
		System.out.println(obj2.SC);
		System.out.println("\n");
		
		System.out.println(obj2.str);
		System.out.println("\n");
		
		
		
		A obj3 = new B();
		System.out.println("3\n");
	
		
		A obj4 = new A(5);
		System.out.println("\n");
		A obj5 = new A("trei");
		System.out.println("\n");
		System.out.println(obj5.SC);
	}

}
