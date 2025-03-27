
import java.util.InputMismatchException;
import java.util.Scanner;

public class Vetores {
    int[] vet = new int[10];

    public void leValores(int i, int aux){
        vet[i]=aux;
    }
    public static void main(String[] args) {
        Scanner lala = new Scanner(System.in);
        Vetores vet = new Vetores();
        int aux = 1, i=0;
        
        try{
            
            for(i=0; aux!=0; i++){
                aux = lala.nextInt();
                vet.leValores(i, aux);
            }

            for(int j=0; j<i; j++){
                System.out.printf("%d ", vet.vet[j]);
            }
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Mais de dez numeros digitados" + e);
        }
        catch(InputMismatchException e){
            System.out.println("Caracter invalido digitado");
        }

            
    }
}
