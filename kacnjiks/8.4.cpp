int bcln(int a, int b){
    
    if(a>b)
    {
        step = a;
    }else
    {
        step = b;
    }
    
    for(int i = step; i <= a*b; i+= step){
        if(i % a == 0 && i % b == 0)
        {
            kq = i;
    return a;
}
