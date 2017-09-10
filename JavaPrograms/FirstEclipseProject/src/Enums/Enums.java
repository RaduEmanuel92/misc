package Enums;
enum Color{
		Red, 
		Blue,
		Black, 
		Green;
}

public class Enums {
	public static void main(String[] args) {
		Color col = Color.Blue;
		switch(col) {
		case Red:
			System.out.println("This is Red");
			break;
		case Blue:
			System.out.println("This is blue");
			break;
		case Black:
			System.out.println("Balck");
			break;
		default:
			System.out.println("GreenLantern");
		}
	
		
		
	}
	
}
