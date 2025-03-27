import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.concurrent.Flow;

import javax.swing.*;

public class Calculadora3 extends JFrame implements ActionListener {
    JTextField textField1 = new JTextField(10);
    JComboBox choice = new JComboBox();
    Button calc = new Button("Calcular");
    JTextField textField2 = new JTextField(10);
    JLabel texto = new JLabel("= 0");
    JPanel cima = new JPanel();

    Calculadora3( ) {
        super("Calculadora");
        setLayout(new BorderLayout());
        /* getContentPane().setBackground(Color.pink); */

        choice.addItem("Soma");
        choice.addItem("Subtração");
        choice.addItem("Divisão");
        choice.addItem("Multiplicação");
        add(choice);
        setVisible(true);


        calc.addActionListener(this);
        cima.add(textField1);
        cima.add(choice);
        cima.add(textField2);
        cima.add(texto);
        add(calc, BorderLayout.SOUTH);

        add(cima, BorderLayout.NORTH);
        
        setSize(450, 100);

        setVisible(true);


    }
    
    public void actionPerformed(ActionEvent c){
        float n1 = Float.parseFloat(textField1.getText());
        float n2 = Float.parseFloat(textField2.getText());
        float resp=0;

        if(choice.getSelectedItem() == "Soma"){
            resp = n1+n2;
        }
        else if(choice.getSelectedItem() == "Subtração"){
            resp = n1-n2;
        }
        else if(choice.getSelectedItem() == "Divisão"){
            resp = n1/n2; 
        }
        else if(choice.getSelectedItem() == "Multiplicação"){
            resp = n1*n2;
        }

        texto.setText("= " + resp);

    }
    static public void main(String[] args) {
        new Calculadora3( ); 
    }
}
