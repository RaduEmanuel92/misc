package Casting;

public class A {
	public void print() {
		System.out.println("A");
	}
	class subA {
		void sprint() {
			System.out.print("SubA accessed");
		}
	}
}

class B extends A {
	public void print() {
		System.out.println("B");
	}
}
