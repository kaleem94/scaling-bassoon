#include "controller/controller.h"

Controller::Controller()
{

}

double Controller::controller(const State &state, const Setpoint &setpoint)
{
    /*double error = setpoint.position - state.position;
    double controlSignal = error * 0.1; // 0.1 is the gain
    return controlSignal;*/

    double error = setpoint.position - state.position;
    double dError = setpoint.velocity - state.velocity;
    double controlSignal = error * 0.1 + dError * 0.1; // 0.1 is the gain
    return controlSignal;
}