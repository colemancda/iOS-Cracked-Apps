//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Ant3DFunctor, NSMutableArray;

@interface Ant3DFunctorChain : NSObject
{
    NSMutableArray *_sources;
    Ant3DFunctor *_functor;
    _Bool _chainConstructed;
    _Bool _alreadyStarted;
    struct CGSize _outputSizeInPixels;
}

+ (id)sharedFunctorChain;
@property(nonatomic) struct CGSize outputSizeInPixels; // @synthesize outputSizeInPixels=_outputSizeInPixels;
- (void).cxx_destruct;
- (void)constructChain;
- (void)stop;
- (void)start;
- (void)setFunctor:(id)arg1;
- (void)addSource:(id)arg1;
- (id)init;

@end
