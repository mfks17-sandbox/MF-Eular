package main

import fmt "fmt"
func main() {
     num:= 0
     for i:= 1; i < 1000; i++ {
         if i % 3 == 0 {
            num += i
         } else if i % 5 == 0 {
            num += i
         }
     }
     fmt.Printf("answer => %d", num)

}