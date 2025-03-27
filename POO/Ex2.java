import java.util.Scanner;
import java.util.TreeSet;
import java.util.Collections;

public class Ex2 {
  public static void main(String args[]){
    Scanner scanner = new Scanner(System.in);

    System.out.printf("Digite o numero de alunos: ");
    int num = scanner.nextInt();
    System.out.println();

    TreeSet<String> alunos = new TreeSet<>();
    System.out.println("Digite o nome de cada aluno:");
    for(int i=0; i<=num; i++){
      String nome = scanner.nextLine();
      alunos.add(nome);
    }
    System.out.println();
    System.out.println("Lista ordenada de alunos:");

    for(String aluno : alunos){
      System.out.println(aluno);
    }

    scanner.close();
  }
}
