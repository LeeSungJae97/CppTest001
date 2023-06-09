using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

//c#에서는 함수를 매서드라 부름 매서드는 클래스 안에이 있는 함수 이걸 맴버함수를 일반적으로 매서드라 한다.

namespace First_proglamc
{
    internal class Program
    {
        static void Main(string[] args)
        {


            Random random = new Random();
            int[] lottos = new int[6];

            for (int i = 0; i < lottos.Length; i++) 
            {
                lottos[i] = random.Next(1, 45);            
            }
            //Task.Delay(1000).Wait();
            Thread.Sleep(1000);
            foreach (int lotto_ in lottos)
            {
                Console.Write("{0}", lotto_);
                //Task.Delay(1000).Wait();
                Thread.Sleep(1000);
            }
            Console.WriteLine();


            


            int[] numbers = new int[5];
            int[,] numbers2 = new int[5, 5];

            int valueCount = 0;
            for (int y = 0; y < 5; y++)
            {
                for (int x = 0; x < 5; x++)
                {
                    //Console.WriteLine("numbers[{0}][{1}]의 값 : {2} \n", y,x, numbers2[y,x]);
                    valueCount += 1;
                    numbers2[y, x] = valueCount;
                }
            }

            PrintMyArray(numbers2);
            //for(int y = 0;y < 5; y++)
            //{
            //    for(int x = 0;x < 5; x++)
            //    {
            //        Console.Write("{0} ", numbers2[y, x]);
            //    }
            //    Console.WriteLine();

            //}

            //Console.WriteLine();






            //Console.WriteLine("매개변수의 첫번째 값 : {0} \n " , args[0]);

            //string userInput1 = default;
            //string userInput2 = default;
            //int number = default;
            //float floatNumber = default;

            //int userNumber1 = default;
            //int userNumber2 = default;


            ////여기서 입력을 받는다.
            ////userNumber1 = System.Convert.ToInt32(userInput1);
            ////userNumber2 = System.Convert.ToInt32(userInput2);


            //userInput1 = Console.ReadLine();
            //userInput2 = Console.ReadLine();

            ////입력 받은 것을 숫자로 변환한다.
            ////userNumber1 = int.Parse(userInput1);
            ////userNumber2 = int.Parse(userInput2);


            //int.TryParse(userInput1, out userNumber1);
            //int.TryParse(userInput2, out userNumber2);




            //Console.WriteLine("{0} + {1} = {2} \n",
            //   userNumber1, userNumber2, userNumber1 + userNumber2);
            ////Console.WriteLine("입력 받은 내용을 출력하고 싶어 ->{1}, {0} \n\n", userInput1, userInput2);
        }

        static void PrintMyArray(int[,] array_)
        {
            for (int y = 0; y < 5; y++)
            {
                for (int x = 0; x < 5; x++)
                {
                    Console.Write(array_[y, x]);
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
    }

}



