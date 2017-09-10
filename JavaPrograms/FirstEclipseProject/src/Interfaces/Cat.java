package Interfaces;
public class Cat implements Animal, Feline, Mammalia {
	public boolean Cat_Attr = true;
	public void makeSound(){
		System.out.println("Meow! ");
	}
	public void eat(){
		System.out.println("Eatinglike a cat ");
	}
	public void f(Cat catt, int x) {
		catt = new Cat();
		catt.Cat_Attr=false;
		x=7;
	}
	
}


