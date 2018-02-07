/****************************************************************
**                                                             **
**                     Control structures                      **
**                                                             **
**  NOM: Ferran Rovira Francàs                DATA: 10/01/2018 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int tempAigua = 100;

//************************* SETUP *******************************
void setup()                      // configura el final de la salida
{  
  Serial.begin(9600);

  if (tempAigua > 100)                
  {
Serial.print("Aigua supera els 100C, esta bullint!");
  }
}


//************************* LOOP *******************************

void loop()                      // inicia el bucle del programa
{                    
                              
  
}


//*********************** FUNCIONS ******************************


