
import java.lang.Math;

public class Ponto2D {
    double x, y;

    Ponto2D(){
        x=0;
        y=0;
    }

    Ponto2D(double x, double y){
        this.x=x;
        this.y=y;
    }

    Ponto2D(Ponto2D p){
        x=p.x;
        y=p.y;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getX() {
        return x;
    }

    public void setY(double y){
        this.y = y;
    }

    public double getY(){
        return y;
    }

    public double CalculaDist(Ponto2D p){
        double dist=0;

        dist = Math.sqrt((this.x-p.x)*(this.x-p.x) + (this.y-p.y)*(this.y-p.y));

        return dist;
    }

    public void print(){
        System.out.printf("coordenada x: %.2f\n coordenada y: %.2f", this.x, this.y);
    }

    public static void main(String[] args) {
        Ponto2D p1 = new Ponto2D();
        Ponto2D p2 = new Ponto2D(2,4);

        p1.setX(3);
        p1.setY(7);

        System.out.printf("Distancia: %.2f\n", p1.CalculaDist(p2));
        p1.print();
        System.out.println("\n");
        p2.print();


    }
}

