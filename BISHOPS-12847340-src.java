import java.io.*;
import java.math.* ;
 public class Main
 {    


public static void main(String[] args) throws IOException {
BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
int s=1024 ;
while(s!=0){
BigInteger i = new BigInteger(bi.readLine());

BigInteger zero = new BigInteger("0");

BigInteger one = new BigInteger("1");
if(i.equals(one)==true){
    System.out.println(1);
}
else if(i.equals(zero)==true){
    System.out.println(0);
}
else {
BigInteger two = new BigInteger("2");
i = i.multiply(two);
i = i.subtract(two);
System.out.println(i);
}

s=s-1;}

}
}

