import java.io.*;
import java.math.* ;
 public class Main
 {    


public static void main(String[] args) throws IOException {

int i,j,k ;
i = j = k = 0;
BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));

i = Integer.parseInt(bi.readLine());
int sum = 0;
for(int x = 1 ;x<=i;x++){

String b = bi.readLine();

j = Integer.parseInt(b.substring(0,b.indexOf(" ")));

k = Integer.parseInt(b.substring(b.indexOf(" ")+1,(b.length())));
sum = rev(j) + rev(k);
sum = rev(sum);
System.out.println(sum);
}
}
public static int rev(int a){
String k = ""+a;
String r = "";
for(int x = k.length()-1;x>=0;x--){
r = r + k.charAt(x);





}

a = Integer.parseInt(r);
return a ;


}



 



} 
