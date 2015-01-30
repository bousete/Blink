/*************************************************************************
**                                                                      **
**                       Descripció programa                            **
**                                                                      **
*************************************************************************/

//****** Includes ********************************************************

//****** Variables *******************************************************

//****** Setup ***********************************************************

void setup(){ /*Es defineixen els pins que nosaltres volguem com a
               sortides*/ 
  pinMode (12,output);
}


//****** Loop ************************************************************

void loop() { /*Aquí es crea un bucle infinit*/
  digitalWrite (12,HIGH); /* Se l'hi envia la senyal dengegar-se*/
  delay (500); /*El delay, s'utilitza per determinar el temps d'enendre*/
  digitalWrite (12,LOW); /*Se l'hi envia la senyal d'apagar-se*/
  delay (500); /*Determina el temps d'apagada*/
}




