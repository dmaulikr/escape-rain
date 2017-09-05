//
//  CounterHandler.h
//  escape-rain
//
//  Created by JohnnyChen on 2017/9/5.
//  Copyright © 2017年 JohnnyChen. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <Foundation/Foundation.h>

@interface CounterHandler : SKNode

-(CounterHandler *) initWithNumber:(NSInteger) initNumber;
-(void) setNumber:(NSInteger) number;
-(NSInteger) getNumber;

-(void) resetNumber;
-(void) increse;

@end

