
import java.util.*;

public class Main {
 
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int p, a, r, i, j;
        while(true) 
        {
            p = in.nextInt();
            a = in.nextInt();
            r = in.nextInt();
            if (a == 0) 
                break;
            int qtdePerolas, maxPerolas = 0;
            String resp, nome;
            Set<String> perolas = new HashSet<String>();      
            SortedSet<String> nomes = new TreeSet<String>();   
            
            in.nextLine(); 
            for(i = 0; i < p; i++){
                resp = in.nextLine();  
                perolas.add(resp);      
            }
           
            for(i = 0; i < a; i++){
                nome = in.nextLine();
                qtdePerolas = 0;

               
                for(j = 0; j < r; j++){
                    resp = in.nextLine();
                    if (perolas.contains(resp)) 
                        qtdePerolas++;         
                }
                if (qtdePerolas > maxPerolas)   
                {
                    nomes.clear();           
                    nomes.add(nome);          
                    maxPerolas = qtdePerolas;  
                } 
                else if (qtdePerolas == maxPerolas) 
                {
                    nomes.add(nome);               
            }

  
            Iterator<String> it = nomes.iterator(); 
            while(it.hasNext()) 
            {    
                nome = it.next();   
                if (it.hasNext())                  
                    System.out.print(nome+", ");   
                else
                    System.out.println(nome);      
            }
        }
        
        in.close();
        }
    }
}
 
