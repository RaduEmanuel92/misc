package Inheritance;

public class A {
	public A(){
		System.out.println("NewA");
	}
	protected int varA = 5;
	protected String SC = "AString";
	public A(int b){
		this.varA = b;
		System.out.println("ConstructorA_int");
	}
	public A(String c){
		this.SC = c;
		System.out.println("ConstructorA_string");
	}
	

}
