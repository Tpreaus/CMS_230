/**
*  Theodore Preaus
*
*  find the Min of three numbers
*/

.global _start

_start:
  push {ip, lr}

  //(x)
  mov r1, #10
  //(y)
  mov r2, #5
  //(z)
  mov r3, #20

  //load x in max
  mov r0, r1

if:
  cmp r2, r0
  ble if2
  mov r0, r2

if2:
  cmp r3, r0
  ble done
  mov r0, r3

done:
  pop {ip, pc}
