package Overloading;



 public class Apple extends Food{
	protected String taste = " No taste ";
	
	Apple(){
		System.out.print("[+] CoreConstr: NewAppleObj Created. ");
	}
	
	Apple(String d){
		System.out.print("[+] Constr: NewAppleObjString Created. ");
		this.taste = d;
	}
	
	 void eat(){
		System.out.println("Eating a normal apple. ");
		
	}
	void eat(String c){
		System.out.println("Eating a "+ c + this.taste + " apple, biatch(overloading)");
	}

}
