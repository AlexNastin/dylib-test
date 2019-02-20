//
//  simpleDLL.hpp
//
//  Created by Алексей Настин on 2/20/19.
//  Copyright © 2019 Алексей Настин. All rights reserved.
//

#ifndef simpleDLL_hpp
#define simpleDLL_hpp

#include "state.cpp"

#endif

extern "C" {
    void multiply (float a, float b, float & result);
    State* handleState(State* state);
}
