
import java.lang.Math;

class Calculo2{
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

    public void CalculoDelta() throws Exception{
        delta = b*b - 4*a*c;

        if(delta<0){
            throw new Exception("Nao existem raizes reais");
        }
        if(delta==0){
            throw new Exception("Nao existem duas raizes reais distintas");
        }
    }

    public void RetornaRaizes(){
        x1 = (-b + Math.sqrt(delta))/(2*a);
        x2 = (-b - Math.sqrt(delta))/(2*a);

        System.out.printf("Primeira raiz: %f\nSegunda raiz: %f", x1, x2);
    }
}

public class Raizespt2{
    public static void main(String[] args) {
        Calculo2 eq = new Calculo2();

        eq.Set_a(56);
        eq.Set_b(2);
        eq.Set_c(1);

        try{
            eq.CalculoDelta();
            eq.RetornaRaizes();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}