package Interfaces;
import Interfaces.Cat;
public class Main {
	    public static void main(String[ ] args) {
	    	Cat c1 = new Cat();
	    	Cat c2 = new Cat();
	    	int x=2;
	    	
	        c1.eat();
	        c1.makeSound();
	        c1.f(c2, x);
	        
	        System.out.println("Cat2: "+c2.Cat_Attr);
	        System.out.println("Cat1: "+c1.Cat_Attr);
	        System.out.println(x);
	        
	        Kitten c3 = new Kitten(); // i have access to all attributes and methods from subclass kitten
	        Cat c4 = new Kitten(); // i have access only to the attributes, methods and interfaces of superclass Cat
	        //c3.vetebraLength = 2; you cannot modify attributes of the interfaces;
	        c3.smallhair = 4;
	        System.out.println(c3.vetebraLength);
	        System.out.println(c3.smallhair);
	        Cat c5 = new Cat();
	        Feline m1 = c5;
	        System.out.println(m1.FurrColor);
	        c5= c3; // cannot convert from cat to Kitten; only from Kitten to cat, as the instantiation of an obj(line 18)
	        System.out.println(c4 instanceof Cat && m1 instanceof Cat);
	    
	    }
	}


