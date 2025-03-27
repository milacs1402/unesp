import java.util.Scanner;

public class Matriz implements Runnable{
    public boolean fim=true;
    public int ordem;
    public int[][] m1;
    public int[][] m2;
    public int[][] m3;
    public int q1, q2, q3 ,q4;
    public int count=-1;

    public static void main(String[] args) {

        Matriz prin = new Matriz();

        System.out.println("Ordem das matrizes:");
        Scanner input = new Scanner(System.in);

        prin.ordem = input.nextInt();

        prin.m1 = new int[prin.ordem][prin.ordem];
        prin.m2 = new int[prin.ordem][prin.ordem];
        prin.m3 = new int[prin.ordem][prin.ordem];

        System.out.println("Digite os elementos da primeira matriz:");
        for(int i=0; i<prin.ordem; i++){
            for(int j=0; j<prin.ordem; j++){
                prin.m1[i][j] = input.nextInt();
            }
        }

        System.out.println("Obrigada!");
        System.out.println("Digite os elementos da segunda matriz:");
        for(int i=0; i<prin.ordem; i++){
            for(int j=0; j<prin.ordem; j++){
                prin.m2[i][j] = input.nextInt();
            }
        }
        System.out.println("Obrigada!");
        input.close();

        Thread t1 = new Thread(prin);
        Thread t2 = new Thread(prin);
        Thread t3 = new Thread(prin);
        Thread t4 = new Thread(prin);

        t1.start();
        t2.start();
        t3.start();
        t4.start();

        while(prin.fim){
            if(prin.q1 + prin.q2 + prin.q3 + prin.q4 == 0){
                prin.fim = false;
            }
        }

        System.out.println("Matriz Resultante:");
        
        for(int i=0; i<prin.ordem; i++){
            for(int j=0; j<prin.ordem; j++){
                try{
                    System.out.printf("%d ",prin.m3[i][j]);
                    }catch(NullPointerException e){
                        e.printStackTrace();
                    }
                }
                System.out.printf("\n");
            }
        }

    

    public void run(){
        count+=1;

        switch (count) {
            case 0:
                for(int i=0; i<ordem/2;i++){
                    for(int j=0; j<ordem/2;j++){
                        m3[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                q1=0;
                break;
            case 1:
                for(int i=0; i<ordem/2;i++){
                    for(int j=ordem/2; j<ordem;j++){
                        m3[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                q2=0;
                break;
            case 2:
                for(int i=ordem/2; i<ordem;i++){
                    for(int j=0; j<ordem/2;j++){
                        m3[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                q3=0;
                break;
            case 3:
                for(int i=ordem/2; i<ordem;i++){
                    for(int j=ordem/2; j<ordem;j++){
                        m3[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                q4=0;
                break;
        
        }
    }
}

