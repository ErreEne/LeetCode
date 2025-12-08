package P2;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;

class P2Class {


    //Usei queue porque aborreceu-me criar a forma de inicializar o array
    public static ArrayList<Integer> addTwoNumbers(Queue<Integer> l1,Queue<Integer> l2){
        int num1 = 0, num2 = 0;
        ArrayList<Integer> result = new ArrayList<>(); 
        while (l1.peek() != null) {
            num1*=10;
            num1 += l1.poll();
        }
        while (l2.peek() != null) {
            num2*=10;
            num2 += l2.poll();
        }
        System.out.println("First num: " + num1 + "\nSecond num: "+num2);
        int resultNum = num2+num1; 
        while (resultNum > 0) {
            result.add(resultNum%10);
            resultNum = (int)resultNum/10;
        }
        Iterator<Integer> iter = result.iterator();

        while (iter.hasNext()) {
            System.out.println(iter.next());
        }

        return result;
    }

    public static void main(String[] args) {
        //como fazer inneClasses
        Queue<Integer> l1 = new LinkedList<Integer>();
        Queue<Integer> l2 = new LinkedList<Integer>();
        int maxnum1 = 4,maxnum2 = 5;
        for (int index = 0; index < maxnum1 ; index++) {
            l1.add((int)(Math.random() * 10));
        }

        for (int index = 0; index < maxnum2 ; index++) {
            l2.add((int)(Math.random() * 10));
        }

        ArrayList<Integer> var = addTwoNumbers(l1,l2);

    }


}