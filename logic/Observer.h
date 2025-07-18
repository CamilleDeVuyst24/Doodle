//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_OBSERVER_H
#define DOODLE_OBSERVER_H

#pragma once

namespace logic {

    class Observer {
    public:
        virtual ~Observer() = default;
        virtual void update() = 0;
    };

}


#endif //DOODLE_OBSERVER_H
