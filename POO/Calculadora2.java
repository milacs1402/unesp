import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener; 

import javax.swing.*;

public class Calculadora2 extends JFrame implements ActionListener {
    JTextField textField1 = new JTextField(10);
    JTextField textField2 = new JTextField(10);
    JButton so = new JButton("Soma");
    JButton sub = new JButton("Subtrai");
    JButton div = new JButton("Divide");
    JButton mu = new JButton("Multiplica");
    JLabel texto = new JLabel("= 0");

    Calculadora2( ) {
        super("Entradas de Texto");
        setLayout(new FlowLayout());
        getContentPane().setBackground(Color.pink);

        JPanel p = new JPanel(new GridLayout(4,0));
        p.add(so); 
        p.add(sub); 
        p.add(div);
        p.add(mu);

        so.addActionListener(this);
        sub.addActionListener(this);
        div.addActionListener(this);
        mu.addActionListener(this);

        
        add(textField1, BorderLayout.EAST);
        add(p, BorderLayout.CENTER);
        add(textField2, BorderLayout.WEST);
        add(texto);
        setSize(400, 200);
        setVisible(true);

    }
    
    public void actionPerformed(ActionEvent c){
        float n1 = Float.parseFloat(textField1.getText());
        float n2 = Float.parseFloat(textField2.getText());
        float resp=0;

        if(c.getSource() == so){
            resp = n1+n2;
        }
        else if(c.getSource() == sub){
            resp = n1-n2;
        }
        else if(c.getSource() == div){
            resp = n1/n2;
        }
        else if(c.getSource() == mu){
            resp = n1*n2;
        }

        texto.setText("= " + resp);

    }
    static public void main(String[] args) {
        new Calculadora2( ); 
    }
}
