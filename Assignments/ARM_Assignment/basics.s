/**
*  Theodore Preaus CMS-230
*
*  Add up 3 global variables
*/

.global _start

.data

a: .word 10
b: .word 20
c: .word 30

.text

_start:
  push {ip, lr}
  
  ldr r1, =a
  ldr r1, [r1] 

  ldr r2, =b
  ldr r2, [r2]

  ldr r3, =c
  ldr r3, [r3]

  add r0, r0, r1
  add r0, r0, r2
  add r0, r0, r3

  pop {ip, pc}
