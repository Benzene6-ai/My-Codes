public class MyApp {

        public static void main(String[] args){
        
        /*final double VOLTAGE, CURRENT;
        VOLTAGE = 233.0;
        CURRENT = 9.1;
        
        float pwr = (float)(VOLTAGE * CURRENT);
        float energy = (pwr*12)/1000;
        
        System.out.println("    Spannung: " + VOLTAGE + "V");
        System.out.println("Stromstaerke: " + CURRENT + "A");
        System.out.println("\n     Leistung: " +  pwr + "W");
        System.out.println("Energie 12h: " +  (((int)(energy*100))/100.0f) + "kWh");*/
        for(int i=0;i<=23;i++){
          for(int j=0;j<60;j+=20){
        System.out.printf("%d:%02d%n", i, j);
        }
      }for(int i=0;i<=23;i++){
    for(int j=0;j<60;j+=20){
        if(j<10){
          System.out.println( i + ":0" + j);   
        }
        else{
          System.out.println( i + ":" + j);   
        }
       
    }
}
        
    }
  }
 //1.1 Tag auslesen
      DateParser dateparser = new DateParser(args);
      PanelData panel = new PanelData(args);
      
      int D = dateparser.getDayOfYear();

       getInterpolated

  for(int i = 0; i <= 23; i++){
    for(int j = 0; j < 60; j+=20){
        
      double  t = D + (i + j/60.0)/24.0;
      int sol = SunCalculator.SOLAR;
        
       double Pow = panel. getPower(t);
       ResultPrinter.sendPower(t, Pow);
        
       prev = SunCalculator.getPrevious(sol, t);
       next = SunCalculator.getFollowing(sol, t);
        
        double t1 = next.getDecimalDay();
        double y1 = next.getValue(); 
        double t0 = prev.getDecimalDay();
        double y0 = prev.getValue(); 
        
        if(t1 > t0){
          double I = (t - t0)/(t1 - t0);
          double y = (y1 - y0)*I + y0; 
         
          ResultPrinter. sendSolarProduction(t, y);
          
        }
        
    }
}
