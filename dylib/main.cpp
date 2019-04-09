//
//  main.cpp
//  NCTest
//
//  Created by Алексей Настин on 2/22/19.
//  Copyright © 2019 Алексей Настин. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <unistd.h>

using namespace::std;

extern int multiply2(int a, int b);

int main(void) {
    cout<<"Test DYLIB\n";
    printf("Result = %i\n", multiply2(2, 3));
    unsigned int microseconds = 2500;
    usleep(microseconds);
//    printf("[%s] libBus.dependencies() = %s\n", __FILE__, dependencies());
}
