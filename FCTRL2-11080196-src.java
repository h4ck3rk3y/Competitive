import java.io.*;
import java.math.* ;
 public class Main
 {    


public static void main(String[] args) throws IOException {
BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
int i = Integer.parseInt(bi.readLine());
for(int n = 1 ;n<=i;n++){
int r  = Integer.parseInt(bi.readLine());
BigInteger x = BigInteger.valueOf(1);

while(r!=1){
x = x.multiply(BigInteger.valueOf(r));
r=r-1;}

System.out.println(""+x);

}







}


} 