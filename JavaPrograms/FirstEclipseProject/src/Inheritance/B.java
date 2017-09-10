package Inheritance;

public class B extends A {
	public B(){
		System.out.println("NewB");
	}
	protected String str ="MySQL";
	public B( String a){
		this.str=a;
		System.out.println("B_StringConstructor");
	}
	
}
