/* create.h
 * ENB241 Portfolio 2
 *
 * Shape class header
 *
 *     DO NOT MODIFY
 */

#ifndef _CREATE_H_
#define _CREATE_H_


class Create
{
public:
    Create();
    ~Create();
    
    virtual double getTurbineOutput() const = 0;
};


#endif
