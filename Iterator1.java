import java.util.*;
// import java.util.Iterator;

 class Iterator1 {
  public static void main(String[] args) {

    ArrayList <Integer> a =new ArrayList <Integer> ();

    a.add(10);
    a.add(34);
    a.add(46);
    a.add(534);
    a.add(12352);
    a.add(134);

    Iterator <Integer> it=a.iterator();


    while(it.hasNext())

    {
     Integer i= it.next();
     if(i<50)
     {
        it.remove();
     }
    }
System.out.println(a);











































  
  //   // Make a collection
  //   ArrayList<String> cars = new ArrayList<String>();
  //   cars.add("Volvo");
  //   cars.add("BMW");
  //   cars.add("Ford");
  //   cars.add("Mazda");
  
  //   // Get the iterator
  //   Iterator<String> it = cars.iterator();
  
  //   // Print the first item






  // //   while(it.hasNext())
  // //   {
  // //     System.out.println(it.next());
  // //   }
  //   // System.out.println(it.next());
  // }
}
 }