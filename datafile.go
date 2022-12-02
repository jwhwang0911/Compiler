package main
 
import "fmt"
 
func main() {
    var  one, two, three int    // 타입(자료형)이 같을 시 변수 여러 개 선언
    one = 1
    two = 2
    three = 3
    var four, five, six int = 4, 5, 6    // 선언과 동시에 초기화
    var seven, eight, nine = 7, 8, 9    // 초기화 시 타입(자료형) 생략 가능 
}

func add_mul(a,b int) (int) {
    func mult(a,b int) (int) {
        return a*b
    }
    return a+b+mult(a,b)
}