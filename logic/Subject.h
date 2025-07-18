//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_SUBJECT_H
#define DOODLE_SUBJECT_H


#pragma once
#include "Observer.h"
#include <vector>


namespace logic {

    class Observer;

    class Subject {
    public:
        void addObserver(Observer* o) { observers.push_back(o); }
        void notify() {
            for (auto* o : observers) o->update();
        }

    protected:
        std::vector<Observer*> observers;
    };

}


#endif //DOODLE_SUBJECT_H
