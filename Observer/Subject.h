//
//  Subject.h
//  Observer
//
//  Created by Adrian on 15/7/11.
//  Copyright (c) 2015年 William. All rights reserved.
//
// The registerObserver and removeObserver methods are abstract methods.
// THe notifyObserver method is use by subclass when the state of the Subject is change.

#import <Foundation/Foundation.h>

#import "Observer.h"

@interface Subject : NSObject

/*
 ** The basic class of this method is do nothing.
 @ If the Observer register as an Observer, then the Observer
 ** can get the changing state of the Subject.
 */
- (void)registerObserver:(Observer *)observer;

/*
 ** The basic class of this method is do nothing.
 @ If the Observer register as an Observer, and remove it as the Observer .
 ** Then the Observer can't get the changing state of the Subject.
 */
- (void)removeObserver:(Observer *)observer;

/*
 ** The basic class of this method is do nothing.
 @ When the state of the Subject is changed, then the
 ** Subject will notify all the Observers.
 */
- (void)notifyObservers;


@end
