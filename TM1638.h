/** DUMMY TM1638 INCLUDE FILE */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TM1638.h
 * Author: txinto
 *
 * Created on 3 de marzo de 2017, 15:40
 */

#ifndef TM1638_H
#define TM1638_H

#include <DummyTypes.h>

class TM1638 {
public:
    TM1638();
    TM1638(const TM1638& orig);
    virtual ~TM1638();
	byte getButtons();
	void setLEDs(uint16_t leds);
        setDisplayToDecNumber(uint32_t num, uint8_t num2);
private:

};

#endif /* TM1638_H */
