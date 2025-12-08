package P1;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

public class P1Class {
    public static void main(String[] args) {
      int[] numbers = {1,5,8};
      ArrayList<Integer> finalAnswer = twoSumA1(numbers,6);
      Iterator <Integer> it = finalAnswer.iterator();
      while (it.hasNext()) {
        System.out.print(it.next()+" ");
      }
    
    
    }

    public static ArrayList<Integer> twoSumA1(int[] array, int target){
      int num,auxIndex=0;
      HashMap<Integer,Integer> mem = new HashMap<Integer,Integer>();
      for(int i : array) {
        num = i;
        if (mem.containsKey(target-num)) {
          ArrayList<Integer> ans = new ArrayList<Integer>();
          ans.add(mem.get(target-num));
          ans.add(auxIndex);
          return ans;
        }else{

          mem.put(num, auxIndex);

        }
        auxIndex++;
      }

      return null;
    }

  }