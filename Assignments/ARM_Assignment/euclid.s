/**
*  Theodore Preaus CMS-230
*
*  Use the Euclidian algorithm to find the GCD
*/

.global start_

.data

a: .word 60
b: .word 25

.text

_start: 
    push {ip, lr}

    ldr r0, =a
    ldr r0, [r0]

    ldr r1, =b
    ldr r1, [r1]

while:
    cmp r0, r1
	beq done
if:
	ble else
	sub r0, r0, r1
	b while
else:
	sub r1, r1, r0
	b while
done:
	pop {ip, pc}
