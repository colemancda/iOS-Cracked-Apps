//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSMutableDictionary, NSString;

@interface SOOption : NSObject <NSCopying>
{
    _Bool _bDelete;
    int _rewardSource;
    NSString *_clientId;
    NSString *_serverId;
    NSString *_type;
    NSString *_content;
    NSString *_userId;
    NSString *_userLid;
    NSString *_userName;
    NSString *_userIcon;
    NSString *_userLink;
    NSString *_userSceneName;
    NSDate *_createTime;
    NSDate *_modifyTime;
    NSString *_bizNo;
    NSString *_bizType;
    NSString *_sceneCode;
    NSString *_extend;
    NSString *_toUserId;
    NSString *_toUserLid;
    NSString *_toUserName;
    NSString *_toUserIcon;
    NSString *_toUserSceneName;
    NSString *_toServerId;
    NSString *_cardBizType;
    NSString *_cardSceneCode;
    NSMutableDictionary *_extendSocialDic;
}

+ (id)convertRemindSyncType:(id)arg1;
+ (id)createWithSyncUCFCOMSPayload:(id)arg1;
+ (id)commentOptionWithBizNo:(id)arg1 bizType:(id)arg2 sceneCode:(id)arg3 cardBizType:(id)arg4 cardSceneCode:(id)arg5 content:(id)arg6 toServerId:(id)arg7 toUserId:(id)arg8 toUserLid:(id)arg9 toUserName:(id)arg10 toUserIcon:(id)arg11;
+ (id)praiseOptionWithBizNo:(id)arg1 bizType:(id)arg2 sceneCode:(id)arg3 cardBizType:(id)arg4 cardSceneCode:(id)arg5;
+ (void)optionWithRewardDic:(id)arg1 withOption:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *extendSocialDic; // @synthesize extendSocialDic=_extendSocialDic;
@property(nonatomic) int rewardSource; // @synthesize rewardSource=_rewardSource;
@property(nonatomic) _Bool bDelete; // @synthesize bDelete=_bDelete;
@property(copy, nonatomic) NSString *cardSceneCode; // @synthesize cardSceneCode=_cardSceneCode;
@property(copy, nonatomic) NSString *cardBizType; // @synthesize cardBizType=_cardBizType;
@property(copy, nonatomic) NSString *toServerId; // @synthesize toServerId=_toServerId;
@property(copy, nonatomic) NSString *toUserSceneName; // @synthesize toUserSceneName=_toUserSceneName;
@property(copy, nonatomic) NSString *toUserIcon; // @synthesize toUserIcon=_toUserIcon;
@property(copy, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(copy, nonatomic) NSString *toUserLid; // @synthesize toUserLid=_toUserLid;
@property(copy, nonatomic) NSString *toUserId; // @synthesize toUserId=_toUserId;
@property(copy, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(copy, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(retain, nonatomic) NSDate *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *userSceneName; // @synthesize userSceneName=_userSceneName;
@property(copy, nonatomic) NSString *userLink; // @synthesize userLink=_userLink;
@property(copy, nonatomic) NSString *userIcon; // @synthesize userIcon=_userIcon;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userLid; // @synthesize userLid=_userLid;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (_Bool)isSupported;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)patchOptionInfo;
- (void)updateWithSyncResponsePayload:(id)arg1;

@end
