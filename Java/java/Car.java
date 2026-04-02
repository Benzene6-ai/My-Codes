public class Car extends vehicle{   //create a class to be used in the main file
    String name;  //the class has its own attributes
    String model;
    String year = "2023";
    boolean isRunning = true;
    int speed;

    Car(String name,String model,int speed){ // by writing the class name we create a conctructor
        this.name = name;                    // this constructor can be used to create more than one objects with unique identifiers
        this.model = model;
        this.speed = speed;
    }

    void make(){  //its own methods
        System.out.println(this.name + " loves making cars");
    }

      public static void main(String[] args) {
        Car car1 = new Car("Ford","Mustang",350); // Creating a class in another file and creating an object here in the main file. The object in this case comes from the Car class
        Car car2 = new Car("Toyota","Challenger",300); // Each object has an attribute an a method specific to it which can be accessed with the help of a dot
         
        System.out.println(car1.name);
        System.out.println(car1.model);
        System.out.println(car1.speed);
         car1.make();
         car1.drive();  

        System.out.println(car2.name);
        System.out.println(car2.model);
        System.out.println(car2.speed);
         car2.make();
         car2.drive();

    }

    
}
class Light{
   private boolean isOn; //→ boolean, whether the light is currently on or off
   private int hue;// → 32-bit integer for the current color angle
   private double brightness;//→ double for brightness
   private double saturation;// → double for saturation
   private final Adapter adapter;
    
  public Light(String IP,short Port,String Endpoint){
      this.adapter = new Adapter(IP, Port, Endpoint); 
      
      setHue(270);
      setBrightness(0.8);
      setSaturation(1.0);
      turnOff();
    }
    public boolean isOn(){return isOn;}
    public int getHue(){return hue;}
    public double getBrightness(){return brightness;}
    public double getsaturation(){return saturation;}
    
     public void setHue(int hue) {
        this.hue = ((hue % 360) + 360) % 360; // normalize to [0, 360)
        adapter.send("hue", this.hue); // Adapter expects int for hue
    }
    
    public void setBrightness(double brightness){
        if (brightness < 0.01) brightness = 0.01;
        if (brightness > 1.0) brightness = 1.0;
        this.brightness = brightness;
        adapter.send("brightness", this.brightness);
    }
    
    public void setSaturation(double saturation) {
        if (saturation < 0.0) saturation = 0.0;
        if (saturation > 1.0) saturation = 1.0;
        this.saturation = saturation;
        adapter.send("saturation", this.saturation); // Adapter expects double
    }
    
    public void turnOn(){
        this.isOn = true;
        adapter.send("on");
    }
    
    public void turnOff(){
        this.isOn = false;
        adapter.send("off");
    }
}