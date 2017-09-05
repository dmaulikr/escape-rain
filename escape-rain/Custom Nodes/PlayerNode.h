//
//  PlayerNode.h
//  escape-rain
//
//  Created by JohnnyChen on 2017/9/3.
//  Copyright © 2017年 JohnnyChen. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface PlayerNode : SKSpriteNode

@property (nonatomic) BOOL isLive;

- (id) initWithDefaultTexture:(SKTexture *)defaultTexture andAnimateTextures:(NSArray *)animateTextures;
- (CGPoint) position;
- (void) ended;
- (void) update:(CFTimeInterval)currentTime;
- (void) setPhysicsBodyCategoryMask:(uint32_t)playerCategory andContactMask:(uint32_t) targetCategory;
- (void) setEndedTexture:(SKTexture *)endedTexture;
- (void) setEndedAdditionalTexture:(SKTexture *)endedAdditionalTexture;

@end
