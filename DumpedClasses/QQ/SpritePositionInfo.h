//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SpritePositionInfo : NSObject
{
    float _timeScale;
    float _spriteScale;
    float _rotationY;
    float _x;
    float _y;
}

@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
@property(nonatomic) float rotationY; // @synthesize rotationY=_rotationY;
@property(nonatomic) float spriteScale; // @synthesize spriteScale=_spriteScale;
@property(nonatomic) float timeScale; // @synthesize timeScale=_timeScale;
- (void)resetTimeScale:(float)arg1 scale:(float)arg2 rotationY:(float)arg3 x:(float)arg4 y:(float)arg5;
- (id)initWithTimeScale:(float)arg1 scale:(float)arg2 rotationY:(float)arg3 x:(float)arg4 y:(float)arg5;

@end
