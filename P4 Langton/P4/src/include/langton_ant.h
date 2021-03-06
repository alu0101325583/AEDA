
#include "ant.h"
#pragma once
class LangtonAnt: public Ant
{

using Ant::Ant;

virtual void Turn45(char colour){
    if(colour == ' '){ //si la casilla es blanca
        if((direction <= 8) && (direction > 1)) //giro a la izquierda
            direction--;
        else if(direction == 1)
            direction = 8;
        else std::cout << "aquí ha habido un error, direction = " << direction << std::endl;
    }
    else if(colour == 'X') { //si la casilla es negra, grio a la derecha
        if((direction >= 1) && (direction < 8))
            direction++;
        else if (direction == 8)
            direction = 1;
        else std::cout << "aquí ha habido un error, direction = " << direction << std::endl;
    }
}

virtual void Turn45(bool colour){
    if(colour == false){ // si la casilla es blanca... 
        if((direction <= 8) && (direction > 1)) //giro a la izquierda
            direction--;
        else if(direction == 1)
            direction = 8;
        else std::cout << "aquí ha habido un error, direction = " << direction << std::endl;
    }
    else { //giro a la derecha
        if((direction >= 1) && (direction < 8))
            direction++;
        else if (direction == 8)
            direction = 1;
        else std::cout << "aquí ha habido un error, direction = " << direction << std::endl;
    }
}

virtual void Move(void) {
    if(direction == 1)
        row_pos += -1;
    else if(direction == 2) {
        row_pos += -1;
        column_pos += 1;
    }
    else if (direction == 3)
        column_pos += 1;
    else if(direction == 4) {
        row_pos += 1;
        column_pos += 1;
    }
    else if(direction == 5)
        row_pos += 1;
    else if(direction == 6) {
        row_pos += 1;
        column_pos += -1;
    }
    else if(direction == 7)
        column_pos += -1;
    else if(direction == 8) {
        row_pos += -1;
        column_pos += -1;
    }
    else std::cout << "aquí ha habido un error, direction = " << direction << std::endl;

}

};