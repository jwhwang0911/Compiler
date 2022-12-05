package main;

import "test" ;
import "fmt";
import "examp.com/hello";
import (
  "fmt";
  "math/rand";
  ."math/rand";
  random "math/rand";
);

type (
	nodeList = []float32;
	Polar    = int;
);
var test = 0;

func SimpleStmt() {
    var  one, two, three int;
    one = 'a';
    two = 2;
    three = 3;
    var four, five, six int = 4, 5, 6;
    var seven, eight, nine = 7, 8, 9; 

    h(one, two);
    two.Close();
    <-two;
    (<-two);
    len("foo");

    ch <- 3;

    two++;

    x = 1;
    *p = f();
    a[i] = 23;
    (k) = <-ch;
    a[i] <<= 2;
    i &^= 1<<n;
};

func labelReturnGoto () int {
	if a == 1 {
		goto ERROR1;
	};
	if a == 2 {
		goto ERROR2;
	};
	if a == 3 {
		goto ERROR1;
	};
	return a;

    ERROR1: // 에러 처리 1
        x = 1;
        return;

    ERROR2: // 에러 처리 2
        x = 1;
        return count;
};

func break_continue() int {
	i := 0;

    TEST1:
        for {
            if i == 0 {
                break TEST1;
                break;
                continue TEST1;
                continue;
            };
        };
        
        fmt.Println("End");
};

func GoStmt() int {
    go Server();
};

func SelectStmt() int {
    select {
        case <-tick:
            return; 
        case <-boom:
            return;
        default:
            return;
        };
    select {
    case i1 = <-c1:
        return ;
    case i1 := <-c1:
        return ;
    case i3, ok := <-c3:  // same as: i3, ok := <-c3
        if ok==0 {
            return ;
        } else {
            return ;
        };
    default:
        return ;
    };

    select {
        case i1 = <-c1:
            a=1;
        default:
            a=b;
    };

    select {};  // block forever
};

func IfStmt()int {
    if i == 0 {
        break TEST1;
    };

    if i == 0 {
        break TEST1;
    } else {
        return;
    };

    if i == 0 {
        break TEST1;
    } else if i==1{
        return;
    } else {
        return;
    };

    if i == 0 {
        break TEST1;
    } else {
        if i == 0 {
            break TEST1;
        };
	};

    if x == 0; x == y {
        return x;
    } else if x > z {
        return z;
    } else {
        return y;
    };
};

func SwitchStmt()int {
    switch tag==0; {
    };

    switch tag==0; {
    default: return;
    case 0, 1, 2, 3: return;
    case x == 4: return;
    };

    switch tag==0 {
    default: return 12;
    };

    switch tag==0; tag==0 {
    default: return;
    };

    switch  tag==0; i := x.(type){
        case int:
            return;
        case float64:
            return;
        case func(int) float64:
            return;
        case bool, string:
                return;
        default:
                return;
    };
};

func ForStmt() {
    for a < b {
        a *= 2;
    };

    for i1 := 0; i1 < 10; i1++ {
        ForStmt(i1);
    };

    for ; i2 < 10; i2++ {
        ForStmt(i2);
    };

    for ; ; {
        ForStmt(i2);
    };

    for key, val = range m {
        ForStmt(key, val);
    };

    for range key {};
};