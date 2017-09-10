package AbstractClass;

abstract class Animal {
	int legs = 0;
	abstract void MakeSound();
	Animal(){
		System.out.println("[+] CoreConstr: AnimalObj created. ");
	}
}
