/* 
 * File:   Robot.h
 * Author: E306-PC6
 *
 * Created on September 23, 2026, 5:17 PM
 */

#ifndef ROBOT_H
#define ROBOT_H
typedef struct robotStateBITS {
union {
struct {
unsigned char taskEnCours;
float vitesseGaucheConsigne;
float vitesseGaucheCommandeCourante;
float vitesseDroiteConsigne;
float vitesseDroiteCommandeCourante;
};
};
} ROBOT_STATE_BITS;
extern volatile ROBOT_STATE_BITS robotState;
#endif /* ROBOT_H */

