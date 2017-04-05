package verificatpsit;
/**
 *
 * @author Studente
 */
public class Retta {
    private double a;
    private double b;
    private double c;
 
    public Retta (double a,double b, double c) {
        this.a = a ;
        this.b = b ;
        this.c = c ;
    }
    
    public String getTipo() {   
        mfinestra m;
        m=new mfinestra();
        this.l1=m.a;
        this.l2=m.b;
        this.l3=m.c;
        if(((a!=b)||(a==b))&&((a!=0)||(b!=0))){
            if(a==0){
                this.tipo.setText("Retta Orizzontale");
            }else{
                if(b==0){
                    this.tipo.setText("Retta Verticale");
                }else{
                    this.tipo.setText("Retta Obliqua");
                }
            }
        }else{
            WinMessaggio r=new WinMessaggio();
            r.setVisible(true);
            r.setLocationRelativeTo(null);
            r.messaggioa.setVisible(true);
            r.messaggiob.setVisible(true);
            r.messaggioc.setVisible(false);
            r.messaggiod.setVisible(false);
        }
    }
    
    public boolean appartiene() {
        
    }
    
    public String stampa() {
        
    }
}
    
