/**
*  Theodore Preaus CMS-230
*
*  Fibonacci in a loop
*/

.global start_

.data

fib: .word 1
prev: .word 0

.text

_start:

   
      push {ip, lr}

      ldr r0, =fib
      ldr r0, [r0]

      ldr r1, =prev
      ldr r1, [r1]

      mov r2, #1
      mov r3, #0
while:
      cmp r2, #10
      bge done

      add r3, r0, r1
      mov r1, r0
      mov r0, r3
      add r2, r2, #1
      
      b while
done:
      pop {ip, pc}
