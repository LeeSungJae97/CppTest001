
//실습. 플레이어와 컴퓨터가 각각 카드를 2장씩 뽑는다.
//두 카드의 합이 더 큰 쪽이 승리,
//작은 쪽은 패배한다.
//동일한 숫자가 나올 경우 문양은
//-> 스페이드,다이아몬드,하트,클로버 순서로 승리한다.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cardex1
{
    internal class Program
    {

        // [로직]
        // 플레이어와 컴퓨터는 카드를 2장 뽑는다.
        
       

        // 두 카드의 합이 더 큰 쪽이 이긴다.

        // 같은 숫자가 나오면 
        // 스페이드 > 다이아 > 하트 > 클로버 순서로 이긴다.


        static void Main(string[] args)
        {
            //{배열의 선언과 초기화

            string[] 카드패턴모양 = new string[] { "◆", "♠", "♥", "♣" };
            string[] 카드숫자모양 = new string[] { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };


            int[] 이성재의카드저장소  = new int[2];
            int[] 컴퓨터의카드저장소 = new int[2];

           

            string[] 이성재 = new string[] { "◆", "♠", "♥", "♣" };
            string[] 컴퓨터 = new string[] { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };



            Random random = new Random();
            이성재의카드저장소[0] = random.Next(0, 3);
            이성재의카드저장소[1] = random.Next(0, 12);

            컴퓨터의카드저장소[0] = random.Next(0, 3);
            컴퓨터의카드저장소[1] = random.Next(0, 12);


           
            Console.WriteLine("출력 : {0} \n", 카드패턴모양[이성재의카드저장소[0]]);
            Console.WriteLine("출력 : {0} \n", 카드숫자모양[이성재의카드저장소[1]]);




            Console.WriteLine("출력 : {0} \n", 카드패턴모양[컴퓨터의카드저장소[0]]);
            Console.WriteLine("출력 : {0} \n", 카드숫자모양[컴퓨터의카드저장소[1]]);



            string 이성재카드숫자 = 카드숫자모양[이성재의카드저장소[1]];

            string 컴퓨터카드숫자 = 카드숫자모양[컴퓨터의카드저장소[1]];


            


            //// }배열의 선언과 초기화

            ////{ 배열의 출력
            //Console.Write("Shuffle 하기 전 \n");
            //for (int i = 0; i < 13; i++)
            //{
            //    Console.Write("%c ", 카드숫자모양[i]);
            //}
            //Console.Write("\n");
            ////}배열의 출력

            //////{셔플 로직
            //const int shuffleCount = 13;

            //Console.Write("\n");

            //Console.Write("Shuffle 한 후 \n");
            //// for (int i = 0; i < shuffleCount; i++)
            ////{
            //int x = 0;
            //Random random = new Random();
            //int[] lottos = new int[6];

            //for (int i = 0; i < lottos.Length; i++)
            //{
            //    lottos[i] = random.Next(1, 45);
            //}
            //Console.Write("%c ", 카드숫자모양[x]);

            //int randomShape = 0;
            //Random rando = new Random();




        }







    }



}
