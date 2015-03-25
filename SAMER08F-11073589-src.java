import java.util.*;
import java.math.* ;
 public class Main
 {    


public static void main(String[] args) {
Scanner s = new Scanner(System.in);
int i  = s.nextInt();
while(i!=0){
int mem = 0;
int out = 0;
for(int x = 1 ;x <=i;x++)
{out = mem+ (x*x);
 mem = out;



}
System.out.println(""+out);
i = s.nextInt();


}





}
 } 