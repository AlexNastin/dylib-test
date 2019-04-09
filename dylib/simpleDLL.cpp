//
//  simpleDLL.cpp
//
//  Created by Алексей Настин on 2/20/19.
//  Copyright © 2019 Алексей Настин. All rights reserved.

#include "simpleDLL.hpp"

#include <stdexcept>
#include <unistd.h>

void multiply (float a, float b, float & result) {
    result = a * b;
}

int multiply2 (int a, int b) {
   return a * b;
}

void logic(){
    printf("(C++) Logic");
    unsigned int microseconds = 2500;
    usleep(microseconds);
}

State* handleState(State* state) {
    printf("(C++) State id:  %d\n", state->id);
    printf("(C++) State value: %d\n", state->value);
    int result =  state->value;
    result = result + 10;
    state->value = result;
    return state;
}
