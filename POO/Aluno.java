

class Pessoa{

    private String name, ads, phone; //ads = address

    public void setName(String n){
        name = n;
    }
    public void setAds(String ads){
        this.ads = ads;
    }
    public String getAds(){
        return ads;
    }
    public void setPhone(String phone){
        this.phone = phone;
    }
    public String getPhone(){
        return phone;
    }
    public void print(){
        System.out.printf("Name: %s\nAddress: %s\nPhone: %s\n", name, ads, phone);
    }
}

class Aluno extends Pessoa{ //esse "extends" faz com que essa subclasse aluno herde as caracteristicas da super classe
        private String RA;

        public void setRA(String RA){
            this.RA = RA;
        }
        public String getRA(){
            return RA;
        }
        public void print(){
            super.print();
            System.out.printf("RA: %s\n", RA);
        }

class Test{
    public static void main(String[] args){
        Pessoa p = new Pessoa();
        Aluno a = new Aluno();
        p.setName("Camila");
        p.setAds("Rua dos Bobos, 00");
        p.setPhone("(11) 94382-1087");
        p.print();
        System.out.printf("\n");

        a.setName("Luna")
        a.setAds("Rua LALALA, 44");
        a.setRA("123123123");
        a.print();
        }
    }
}
