public class teste {
    public static void main(String[] args){
    int filho = 6;
    int pai = 36;
    int prop = 3;

    // pai + x = prop * (filho + x)
    // pai + x = prop * filho + prop * x
    // pai - prop * filho = prop * x - x
    // pai - prop * filho = x(prop - 1)
    // (pai - prop * filho) / (prop - 1) = x
    int idade = (pai-prop*filho)/(prop-1);

    System.out.printf("O pai terá o triplo da idade do filho em %d anos.\n", idade);
    System.err.printf("Então a idade do pai será %d anos e do filho será de %d anos.",pai+idade,filho+idade);
    
    }
}