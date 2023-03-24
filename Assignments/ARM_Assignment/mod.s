/**
*  Theodore Preaus CMS-230
*
*  Mod in a loop
*/

.global _start

.data

a: .word 4
b: .word 30


.text
_start:
	push {ip, lr}
	

	ldr r2, =a
	ldr r2, [r2]
	

	ldr r3, =b
	ldr r3, [r3]
	
if: 
	cmp r2, r3
	ble else
	
	mov r0, r2
	mov r1, r3
	b exit
else:
	mov r0, r3
	mov r1, r2
exit:

while:
	cmp r0, r1
	blt done
	
	sub r0, r0, r1
	b while

	
done:
	pop {ip, pc}
