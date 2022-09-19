class A{
    void display(){
        System.out.println("Super class Display Methods");
    }
}

public class SubClassException{
    void display() throws IOException{
        System.out.println("Child Class Display Method");
    }
	public static void main(String[] args) {
		
		A a = new A();
		a.display();
		Main main = new Main();
		main.display(); // it will throw runtime Exception 
		
	}
}