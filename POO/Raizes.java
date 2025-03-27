
import java.lang.Math;

class Calculo{
    double x1, x2, a, b, c, delta;

    public void Set_a(double a){
        this.a = a;
    }
    public void Set_b(double b){
        this.b = b;
    }
    public void Set_c(double c){
        this.c = c;
    }

    public void CalculoDelta(){
        delta = b*b - 4*a*c;
    }

    public void RetornaRaizes(){
        x1 = (-b + Math.sqrt(delta))/(2*a);
        x2 = (-b - Math.sqrt(delta))/(2*a);

        System.out.printf("Primeira raiz: %f\nSegunda raiz: %f", x1, x2);
    }
}

public class Raizes{
    public static void main(String[] args) {
        Calculo eq = new Calculo();

        eq.Set_a(43);
        eq.Set_b(2);
        eq.Set_c(1);

        try{
            eq.CalculoDelta();
            eq.RetornaRaizes();
        }
        catch(ArithmeticException e){
            System.out.println("Nao existem raizes reais" + e);
        }
    }
}