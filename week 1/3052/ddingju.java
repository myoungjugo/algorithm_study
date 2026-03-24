//Scanner 타입이 너무 느려서 BufferedReader로 바꿨습니당
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main{
		public static void main(String[] args) throws IOException{ //예외처리
			  int count = 0;	//서로다른숫자 저장
        boolean[] arr = new boolean[42]; //자바는 모든 배열이 객체->동적할당해야
      //나머지 대로 0~41 에 있으면 true, 없으면 boolean 표기
            
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      //입력객체 만들기. readLine으로 한 줄 다 읽고 문자열 반환
            
        for(int i = 0; i <10; i ++){
            arr[Integer.parseInt(br.readLine())%42] = true; //문자열 -> 정수로 바꾸고 42로 나눈 나머지 인덱스에 true
        }
            
        for(boolean value : arr){ //arr의 처음부터 끝까지 요소가 value로 들어감
            if(value)
                count ++;
        } 
            System.out.println(count); //출력
     }
}
