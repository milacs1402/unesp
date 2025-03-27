
import java.awt.*;

public class Botao extends Frame {
    Button b = new Button("Botao");

    Botao() {
        super("Botao");
        add(b);
        pack();
        setVisible(true);
    }

}

static public void main(String[] args){
    new Botao();
}

