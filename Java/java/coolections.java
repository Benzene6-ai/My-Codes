import java.util.HashMap;
import java.util.ArrayList;

public class coolections {
    public static void main(String[] args) {
        System.out.println(binStringToDecIter("1011"));;
       HashMap<String,Integer> f = new HashMap<String,Integer>();
       f.put("Sia",3);
       System.out.println(f.get("Sia"));
       for(String key: f.keySet()){
        System.out.println(key + "->" + f.get(key));
       }
       ArrayList<String> val = new ArrayList<String>();
       val.add("Mango");
       val.add("Ananas");
       val.add("Potatoe");
       for (String var : val) {
        System.out.println(var);
       }
       for(int i = 0;i < val.size();i++){
        System.out.println(val.get(i));
       }
    }

      public static int binStringToDecIter(String binaryNumber){
            int start=0;
            for(int i=0;i<binaryNumber.length();i++){
                int bit = binaryNumber.charAt(i) - '0';//chartAt returns a uni code value. '0' = 48. All the others are consecutive by 1
              start += bit * Math.pow(2,binaryNumber.length()-i-1); 
            }
            return start;
        }
    
}
