
import java.io.IOException;
import java.util.Stack;
import java.util.Scanner;


public class Diamante {
    
    public static void main(String[] args) throws IOException{
        Stack <Character> s = new Stack <Character>();
        Scanner scan = new Scanner(System.in);
        int n,d=0;
        String entrada;
        n = scan.nextInt();
        scan.nextLine();

        while(n-- >0){
        
            entrada = scan.nextLine();

          for(char c:entrada.toCharArray()){
            if(c=='<')
            s.push(c);   

            if(s.empty())
            continue;
            if(c=='>' && s.peek()=='<'){
                d++;
                s.pop();
            }
            }

            System.out.println(d);
            d=0;
            s.clear();
        }
          
        scan.close();
    }

}
