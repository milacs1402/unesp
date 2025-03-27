import java.util.Scanner;
import java.util.Arrays;

public class Teams {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int aux = 0;
        int[] a = new int[n];
        
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        
        Arrays.sort(a);
        
        for (int i = 0; i + 1 < n; i += 2) {
            aux += Math.abs(a[i + 1] - a[i]);
        }
        
        System.out.println(aux);
        
        scanner.close();
    }
}
