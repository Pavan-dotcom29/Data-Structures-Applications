import java.util.*;
class Hashset
{


    public static void main(String args[])
    {




        HashSet <Integer> h=new HashSet<Integer>();


        h.add(4);
        h.add(7);
        h.add(8);

        for(int i=1;i<=10;i++)
        {

            if(h.contains(i))
            {
                System.out.println(i+ "value is thers ");
            }
            else
            {
                System.out.println(i+"value is not there");
            }

        }
    }






    //     HashSet <String> h=new HashSet<String>();

    //     h.add("pavan");
    //     h.add("anup");
    //     h.add("nikhil");
    //     h.add("shridhar");
    //     h.add("Prathmesh");


    
        
    //     for(String i:h)
    //     {
    //         System.out.println(i);
    //     }

    // }
}