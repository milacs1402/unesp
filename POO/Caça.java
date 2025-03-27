import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Caça extends JFrame implements Runnable,ActionListener{
    int jt=0, n1, n2, n3;

    JButton jogar = new JButton("JOGAR");

    JTextField esp1 = new JTextField("  1  ");
    JTextField esp2 = new JTextField("  1  ");
    JTextField esp3 = new JTextField("  1  ");

    public Caça(){
        JFrame janela = new JFrame("Caça-níquel");
        janela.setSize(560,220);
        janela.setLayout(new GridLayout(2,1));

        JPanel p1 = new JPanel(new FlowLayout()); 
        p1.add(esp2);       
        p1.add(esp3);

        janela.add(p1);

        jogar.addActionListener(this);

        JPanel p2 = new JPanel(new FlowLayout());
        p2.add(jogar);

        janela.add(p2);

        esp1.setEditable(false);
        esp1.setBackground(Color.MAGENTA);
        esp1.setSize(100,100);

        esp2.setEditable(false);
        esp2.setBackground(Color.MAGENTA);
        esp2.setSize(100,100);

        esp3.setEditable(false);
        esp3.setBackground(Color.MAGENTA);
        esp3.setSize(100,100);

        p1.add(esp1);      

        janela.setVisible(true);
        janela.setResizable(false);
        janela.setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    public void Result(){
        if(n1==n2 && n2==n3)
            JOptionPane.showMessageDialog(null,"GANHOU!!!");
        else
            JOptionPane.showMessageDialog(null,"PERDEU :(");

    }

    public static void main(String[] args) throws InterruptedException
    {
        new Caça();
    }
    
    public void run() {
        switch(jt)
        {
            case 0:
                jt+=1; int x0=150;
                while(x0>0)
                {
                    x0-=1;
                    esp1.setText(String.format("  %d  ", n1));
                    try {
                        Thread.sleep(20);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    n1=new Random().nextInt(7-1) + 1;
                }
                break;
            case 1:
                jt+=1; int x1=150;
                while(x1>0)
                {
                    x1-=1;
                    esp2.setText(String.format("  %d  ", n2));
                    try {
                        Thread.sleep(20);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    n2=new Random().nextInt(7-1) + 1;
                }
                break;
            case 2:
                jt=0; int x2=150;
                while(x2>0)
                {
                    x2-=1;
                    esp3.setText(String.format("  %d  ", n3));
                    try {
                        Thread.sleep(20);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    n3=new Random().nextInt(7-1) + 1;
                }
                jogar.setEnabled(true);
                Result();
                break;
        }
    }

    public void actionPerformed(ActionEvent e) {
        jogar.setEnabled(false);
        Thread t1 = new Thread(this);
        t1.start();
        try {
            Thread.sleep(20);
        } catch (InterruptedException e1) {
            e1.printStackTrace();
        }

        Thread t2 = new Thread(this);
        t2.start();
        try {
            Thread.sleep(20);
        } catch (InterruptedException e1) {
            e1.printStackTrace();
        }

        Thread t3 = new Thread(this);
        t3.start();
    }
}
