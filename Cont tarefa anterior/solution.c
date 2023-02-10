//Solução do exercicio: https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/890861247/

//Inicialização do código
int removeDuplicates(int* value, int stringOfValue){
    int n=0;
    //Chama o valor para a remoção das duplicatas
    for(int i=1; i<stringOfValue; i++){
        if(value[i] != value[n]){
           value[++n] = value[i];
     }
    }
 //Retorna o resultado 
 return n+1;
}