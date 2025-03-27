

import java.awt.*;
import javax.swing.*;

class Janelinha extends JFrame{
    public void paint(Graphics g) {
        g.drawString("Eu sou foda msm!",40,100);
    }

    public static void main(String args[]) {
        Janelinha hello=new Janelinha();
        hello.setSize(155, 150);
        hello.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        hello.setVisible(true);
    }
}


