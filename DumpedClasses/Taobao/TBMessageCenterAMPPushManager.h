//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBIMGroupServiceDelegate.h"
#import "TBIMMessageServiceDelegate.h"
#import "TBIMUserServiceDelegate.h"
#import "TBInAppPushBizConfigProtocol.h"

@class NSMutableDictionary, NSString;

@interface TBMessageCenterAMPPushManager : NSObject <TBIMMessageServiceDelegate, TBIMUserServiceDelegate, TBIMGroupServiceDelegate, TBInAppPushBizConfigProtocol>
{
    NSMutableDictionary *_ampUserMessageDict;
    NSMutableDictionary *_groupMessageDict;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)needDisable;
- (_Bool)needMergedPushMessage;
- (id)disableOnViewControllers;
- (long long)pushStyle;
- (id)mergedPushMessageTitle:(id)arg1;
- (id)mergedPushMessageActionUrl;
- (id)mergedPushMessageHeadUrl;
- (id)bizId;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)UserChange:(id)arg1;
- (id)parseURLParams:(id)arg1;
- (id)findValidIMMessage:(id)arg1 index:(long long)arg2;
- (void)messageAdd:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
