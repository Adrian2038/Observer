//
//  Observer.h
//  Observer
//
//  Created by Adrian on 15/7/11.
//  Copyright (c) 2015年 William. All rights reserved.
//
// The update is an abstract method, the subclass must implement it.

#import <Foundation/Foundation.h>

@interface Observer : NSObject

/*
 ** The basic class of this method is do nothing.
 @ The Subclass will have the notify from the Subject, 
 ** and have the properties channged.
 */
- (void)updateWeatherDataWithTemperature:(CGFloat)temperature
                                humidity:(CGFloat)humidity
                                pressure:(CGFloat)pressure;

@end
