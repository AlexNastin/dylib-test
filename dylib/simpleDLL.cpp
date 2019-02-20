//
//  simpleDLL.cpp
//  SimpleProject
//
//  Created by Алексей Настин on 2/20/19.
//  Copyright © 2019 Алексей Настин. All rights reserved.
//
#include "simpleDLL.hpp"
//#include "state.cpp"

#include <stdexcept>
void multiply (float a, float b, float & result) {
    result = a * b;
}

State* handleState(State* state) {
    // note: printfs called from C won't be flushed
    // to stdout until the Java process completes
    printf("(C++) State id:  %d\n", state->id);
    printf("(C++) State value: %d\n", state->value);
    int result =  state->value;
    result = result + 10;
    state->value = result;
    return state;
}
