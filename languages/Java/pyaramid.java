class pyaramid {
    public static void main(String arg[]) {
        int max = 5;
        for (int i = 1; i <= max; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}