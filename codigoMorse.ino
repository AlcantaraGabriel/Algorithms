int PIN = 13;

  void setup() {
    // put your setup code here, to run once:
    pinMode(PIN, OUTPUT);
    }

//-----------códigoBase-----------
  void fast(){
    
    digitalWrite(PIN, HIGH);//ligar LED
    delay(300);//por 0.3 segundos
    digitalWrite(PIN, LOW);////desligar LED
    delay(300);//por 0.3 segundos
    }
  
  void slow(){
    digitalWrite(PIN,HIGH);//ligar LED
    delay(1000); //1 segundo
    digitalWrite(PIN,LOW);//desligar LED
    delay(1000); //1 segundo
    }


//-----------LETRAS-----------
//Baseado na tabela: https://pt.wikipedia.org/wiki/C%C3%B3digo_Morse]
//Arvore binária: https://pt.wikipedia.org/wiki/C%C3%B3digo_Morse#/media/File:Morse_code_tree3.png
  void A(){
    fast(); slow();
    }
  
  void B(){
    slow();fast();fast();fast();
    }
  
  
  void C(){
    fast(); slow();fast(); slow();
    }
  
  void D(){
    slow(); fast(); fast();
    }
  
  void E(){
     fast();
    }

  void FF(){
    fast();fast();slow();fast();
    }
  void G(){
    slow();slow();fast();
    }
  
  void H(){
    fast();fast();fast();fast();
  }
  void I(){
    fast();fast();
  }
  void J(){
    fast();slow();slow();slow();
  }
  void K(){
    slow();fast();slow();
  }
  void L(){
    fast();slow();fast();fast();
  }
  void M(){
    slow();slow();
  }
  void N(){
    slow();fast();
  }
  void O(){
    slow();slow();slow();
  }
  void P(){
    fast();slow();slow();fast();
  }
  void Q(){
    slow();slow();fast();slow();
  }
  void R(){
    fast();slow();fast();
  }
  void S(){
    fast();fast();fast();
  }
  void T(){
    slow();
  }
  void U(){
    fast();fast();slow();
  }
  void V(){
     fast(); fast(); fast();slow();
  }
  void W(){
     fast();slow();slow();
  }
  void X(){
    slow();fast();fast();slow();
  }
  void Y(){
     slow();fast();slow();slow();
  }
  void Z(){
    slow();slow();fast();fast();
  }

//-----------NÚMEROS-----------
  void ONE(){
    fast();slow();slow();slow();slow();
  }
  void TWO(){
    fast();fast();slow();slow();slow();
  }
  void THREE(){
    fast();fast();fast();slow();slow();
  }
  void FOR(){
    fast();fast();fast();fast();slow();
  }
  void FIVE(){
    fast();fast();fast();fast();fast();
  }
  void SIX(){
    slow();fast();fast();fast();fast();
  }
  void SEVEN(){
    slow();slow();fast();fast();fast();
  }
  void EIGHT(){
    slow();slow();slow();fast();fast();
  }
  void NINE(){
    slow();slow();slow();slow();fast();
  }
  void ZERO(){
    slow();slow();slow();slow();slow();
  }
  
//-----------PONTUAÇÕES-----------

  void PONTO(){
    fast();slow();fast();slow();fast();
  }
  void VIRGULA(){
    slow();slow();fast();fast();slow();slow();
  }

  void INTERROGACAO(){
    fast();fast();slow();slow();fast();fast();
  }

  void APOSTROFO(){
    fast();slow();slow();slow();slow();fast();
  }
  
  void EXCLAMACAO(){
    slow();fast();slow();fast();slow();slow();
  }

  void BARRA(){
    slow();fast();fast();slow();fast();
  }
  void ABRE_PARENTESES(){
    slow();fast();slow();slow();fast();
  }
  void FECHA_PARENTESES(){
    slow();fast();slow();slow();fast();slow();
  }
  void ECOMERCIAL(){
    fast();slow();fast();fast();fast();
  }
  void DOIS_PONTOS(){
    slow();slow();slow();fast();fast();fast();
  }
  void PONTOeVirgula(){
    slow();fast();fast();
  }
  void IGUAL(){
    slow();fast();fast();fast();slow();
  }
  void HIFEN(){
    slow();fast();fast();fast();fast();slow();
  }
  void LINHA_BAIXA(){
    fast();fast();slow();slow();fast();slow();
  }
  void ASPAS(){
    fast();slow();fast();fast();slow();fast();
  }
  void CIFRAO(){
    fast();fast();fast();slow();fast();fast();slow();
  }
  void ARROBA(){
    fast();slow();slow();fast();slow();fast();
  }
//-----------FunçãoPrincipal-----------
  void loop() {
    // put your main code here, to run repeatedly:
    //---------SOS---------
    S();O();S();
    
    }
