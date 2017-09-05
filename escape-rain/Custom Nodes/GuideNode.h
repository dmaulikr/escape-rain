//
//  GuideNode.h
//  escape-rain
//
//  Created by JohnnyChen on 2017/9/5.
//  Copyright © 2017年 JohnnyChen. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

typedef void (^AnonBlock)();

@interface GuideNode : SKSpriteNode
-(id) initWithTitleTexture:(SKTexture *)titleTexture andIndicatorTexture:(SKTexture *)indicatorTexture;
-(void) setMethod:(void (^)()) returnMethod;
-(void) runMethod;
@end
