class P1 {
    public static void main(String[] args){
        int num = 0;
        for (int i = 1; i < 1000; i++ ) {
            if (i % 3 == 0) {
                num += i;
            } else if (i % 5 == 0) {
                num += i;
            }
        }
        System.out.printf("answer => %d\n",num);
    }
}
