public class Main08OOP { //Object Oriented Programming(OOP).
        public static void main(String[] args) {
        Car car1 = new Car("Ford","Mustang",350); // Creating a class in another file and creating an object here in the main file. The object in this case comes from the Car class
        Car car2 = new Car("Toyota","Challenger",300); // Each object has an attribute an a method specific to it which can be accessed with the help of a dot
         
        System.out.println(car1.name);
        System.out.println(car1.model);
        System.out.println(car1.speed);
         car1.make();
         car2.drive();  

        System.out.println(car2.name);
        System.out.println(car2.model);
        System.out.println(car2.speed);
         car2.make();
         car2.drive();

    }
    
}
