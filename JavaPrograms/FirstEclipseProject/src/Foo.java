
public class Foo {
	static int x;
	Foo() {
		System.out.println("Run Foo Constr");
		this.doSth2();
		x++;
	}
	void doSth2() {
		System.out.println("Run Foo doSth");
		x++;
	}
}

class Bar extends Foo {
	Bar() {
		System.out.println(x);
	}
	void doSth2() {
		System.out.println("Run Bar doSth");
		x += 2;
	}
	public static void main (String [] args) {
		Foo b1= new Bar();
	}
}
