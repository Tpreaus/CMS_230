/**
*  Theodore Preaus CMS-230
*
*  Pythagorean Theorem
*/

.global _start

.data

a: .word 2
b: .word 2

.text

_start:
      	push {ip, lr}
		
		ldr r1, =a
		ldr r1, [r1]
		
		ldr r2, =b
		ldr r2, [r2]
		
		mul r3, r1, r1
		mul r0, r2, r2
		add r0, r0, r3
		
		
		pop {ip, pc}
