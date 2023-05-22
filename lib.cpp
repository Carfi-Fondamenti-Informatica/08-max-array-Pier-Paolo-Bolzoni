double valoremax(double lista[], int dim){
    double max = lista[0];
    for(int i=1;i<dim;i++){
        if(lista[i]>max){
            max = lista[i];

        }
    }
    return max;
}
