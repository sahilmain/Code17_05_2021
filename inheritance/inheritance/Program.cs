using System;

namespace inheritance
{

    interface first
    {
        public void firstMethod();
        public void secondMethod();
    }


    interface second
    {
        public void third();
        public void fourth();
    }



    class imple : first, second
    {
      
        public void firstMethod()
        { Console.WriteLine("first"); }
        public void secondMethod()
        {
            try
            {
                Console.WriteLine("");
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }

        public void third()
        { Console.WriteLine("third"); }
        public void fourth()
        { Console.WriteLine("fourth"); }
   
   
    }
    class Run
    { 
        static void Main(string[] args)
        {
            imple o = new imple();
            o.third();
            o.firstMethod();
        }
    }
}
