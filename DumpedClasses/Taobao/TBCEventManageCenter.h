//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TBCEventManageCenter : NSObject
{
    NSMutableDictionary *_handlers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1 sourceObj:(id)arg2 args:(id)arg3 engine:(id)arg4;
- (void)removeHandlerForEvent:(id)arg1 handler:(id)arg2 engine:(id)arg3;
- (void)removeHandlerForEvent:(id)arg1 engine:(id)arg2;
- (void)removeHandlerForEngine:(id)arg1;
- (void)registerEvent:(id)arg1 handler:(id)arg2 engine:(id)arg3;
- (id)init;

@end
