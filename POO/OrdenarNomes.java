import java.util.Scanner;
import java.util.Vector;
import java.util.Collections;

public class OrdenarNomes {
  public static void main(String args[]){
    Scanner scanner = new Scanner(System.in);

    System.out.printf("Digite o numero de alunos: ");
    int num = scanner.nextInt();
    System.out.println();

    Vector<String> alunos = new Vector<>();
    System.out.println("Digite o nome de cada aluno:");
    for(int i=0; i<=num; i++){
      String nome = scanner.nextLine();
      alunos.add(nome);
    }

    Collections.sort(alunos);

    System.out.println();
    System.out.println("Lista ordenada de alunos:");

    for(String aluno : alunos){
      System.out.println(aluno);
    }

    scanner.close();
  }
}
