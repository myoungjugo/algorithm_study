import java.util.Scanner; //파일 임포트 안해서 컴파일 에러 남 + 언어를 c++로 설정해서 java언어를 실행시키지 못했음
public class Main{ //백준에서 자바 제출할 경우 
    public static void main(String[] args){ //대충 문자열 배열 입력받는다는 뜻
        Scanner sc = new Scanner(System.in); //Scanner를 사용해 입력받음. 
        
        int N = sc.nextInt();
        
        int[] arr = new int[N];//동적할당(자바는 가비지 콜렉터가 있어서 동적할당 후 해제하지 않아도 된다
        int M = sc.nextInt();
        
        for(int i = 0; i <M;i++){
            int I = sc.nextInt(); //다음에 오는 걸(입력) 정수로 I에 저장한다는 뜻
            int J = sc.nextInt();
            int K = sc.nextInt();
            
            for(int j = I-1; j <J; j++ ){
                arr[j] = K;
            }
        }
        for(int k = 0; k <arr.length; k++){
            System.out.print(arr[k] + " "); //자바의 출력
        }
        
    }
}
//자바 공부를 위해 사용했으나 역시 시간이 너무 오래 걸렸다. 코테 준비를 한다면 c++을 사용하는게 좋겠다
