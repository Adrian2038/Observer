//
//  Display.h
//  Observer
//
//  Created by Adrian on 15/7/11.
//  Copyright (c) 2015年 William. All rights reserved.
//
// The display method is abstract, the subclass must implement it.

#import <Foundation/Foundation.h>

@interface Display : NSObject

/*
 ** The basic class of this method is do nothing.
 @ display the data.
 */
- (void)display;

@end
