/*
 TiLDA Mk2

 HelloWorldApp
 Play around in this app or use it as a skeleton for your own one

 The MIT License (MIT)

 Copyright (c) 2014 Electromagnetic Field LTD

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#pragma once

#include <Arduino.h>
#include <FreeRTOS_ARM.h>
#include "EMF2014Config.h"
#include "App.h"
#include "RGBTask.h"
#include "GUITask.h"
#include "ButtonSubscription.h"

class SuperMarioApp: public App {
public:
    static App* New();

    String getName() const;
protected:
private:
    SuperMarioApp();
    ~SuperMarioApp();
    SuperMarioApp(const SuperMarioApp&);

    bool keepAlive() const;

    void task();
    void afterSuspension();
    void beforeResume();
private:
    ButtonSubscription* mButtonSubscription;
};

static const uint8_t MARIO_XBM[] = {
    22, // height
    16, // width

    0xc0,0x20,0xfc,0x20,0x50,0x08,0x44,0x78,0x20,0x58,0x24,
    0x24,0x58,0x20,0x20,0x36,0x1a,0x02,0xc4,0x38,0x00,0x00,

    0x03,0x04,0x0f,0x04,0x08,0x08,0x08,0x04,0x02,0x06,0x08,
    0x10,0x24,0x18,0x24,0x24,0x18,0x10,0x21,0x46,0x28,0x18,
};

static const uint8_t PIPE_XBM[] = {
    22, // height
    16, // width

    0xff,0x01,0x01,0x01,0x01,0x01,0x01,0xff,0x08,0x08,0x08,
    0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,

    0xff,0x80,0x80,0x80,0x80,0x80,0x80,0xff,0x10,0x10,0x10,
    0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
};

