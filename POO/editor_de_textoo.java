import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

import javax.swing.*;

class editor_de_textoo extends JFrame implements ActionListener {
    JTextField textField;
    JTextArea textArea;
    Button abrir = new Button("Abrir");
    Button salvar = new Button("Salvar");
    Button salvarc = new Button("Salvar como");
    Button fechar = new Button("Fechar");
    String arq;


    editor_de_textoo( ) {
        super("Entradas de Texto");
        setLayout(new BorderLayout());
        
        JPanel p = new JPanel(new GridLayout(8,1));
        p.add(abrir);
        abrir.addActionListener(this);
        p.add(salvar); 
        salvar.addActionListener(this);
        p.add(salvarc);
        salvarc.addActionListener(this);
        p.add(fechar);
        fechar.addActionListener(this);

        add(p, BorderLayout.WEST);

        add(textArea = new JTextArea(10, 50), BorderLayout.EAST);

        setSize(500, 400);
        pack( );
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e){

        try{
            FileInputStream in;
            FileOutputStream out;
            if(e.getSource() == abrir){
                arq = JOptionPane.showInputDialog("Selecione o arquivo");
                
                in = new FileInputStream(arq);
                
                Scanner sin = new Scanner(in);
                while (sin.hasNextLine()) {
                    textArea.append(sin.nextLine());
                    textArea.append("\n");
                }
                    in.close();
                    sin.close();
            }else if(e.getSource() == salvar){
                out = new FileOutputStream(arq);
                out.write(textArea.getText().getBytes());
                out.close();
            }else if(e.getSource() == salvarc){
                in = new FileInputStream(arq);
                arq = JOptionPane.showInputDialog("Digite o nome do novo arquivo");
                out = new FileOutputStream(arq);
                out.write(textArea.getText().getBytes());
                out.close();

            }else if(e.getSource() == fechar){
                System.exit(0);
            }
        }catch(FileNotFoundException ex){
            JOptionPane.showMessageDialog(null,"arquivo nao encontrado");
        }catch(IOException io){
            JOptionPane.showMessageDialog(null,"IO Exception");
        }
    }
    

    static public void main(String[] args) {
        new editor_de_textoo( );  
    }
}
    

    