package Overloading;

 public class Fish extends Food {
	Fish(){
		System.out.print("[+] CoreConstr: NewFishObj Created. ");
	}
	 void eat(){
		System.out.println("Eating any kind of fish.");
		
	}
	void eat(String c){
		System.out.println("Eating" + c + "kind of fish.");
		
	}


}			
