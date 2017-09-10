package Inheritance;

public class Animal {
	protected int legs;//visible only to subclasses
	public void eat(){
		System.out.println("Animal eats.");
	}
}

class Dog extends Animal{
	Dog(){
		legs=4; //the Dog class inherits the legs variable
		        //from the Animal class
	}
}


