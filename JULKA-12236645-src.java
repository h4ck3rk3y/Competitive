import java.io.*;
import java.math.* ;
  class Main
 {    


public static void main(String[] args) throws IOException {
BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
String line;String two = "2" ;
BigInteger two1 = new BigInteger(two);
for(int x = 0;x<10;x++){
line = bi.readLine();
BigInteger acne  = new BigInteger(line);
line = bi.readLine();
BigInteger pimp = new BigInteger(line);
System.out.println((acne.add(pimp)).divide(two1) + "");
System.out.println((acne.subtract(pimp)).divide(two1) + "");
}
}
}


