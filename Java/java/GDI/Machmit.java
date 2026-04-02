public class Machmit {
   public static String dreh(String  text){
    if(text == null || text.length() <= 1){
      return text;
    }
     String rest = text.substring(1,text.length());
     String ungedreht = dreh(rest);
     char erstebuchstabe = text.charAt(0);
     return ungedreht + erstebuchstabe;

   }
    public static void main(String[] args) {
      String text = "mama";
      System.out.println(dreh(text));;
    }
    
}
