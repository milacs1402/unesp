
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

class Test{
    public static void main(String[] args){
        Pessoa p = new Pessoa();
        p.setName("Camila");
        p.setAds("Rua dos Bobos, 54");
        p.setPhone("(11) 94382-1087");
        p.print();
    }
}
