//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessagePretreatment.h"
#import "PPChatMessageNotifyDelegate.h"

@class NSString;

@interface PPFollowListProvider : NSObject <MessagePretreatment, PPChatMessageNotifyDelegate>
{
    _Bool _isNeedCompensateRequest;
    _Bool _shouldUpdateFriendTabRedDot;
    id <PPFollowListProviderDelegate> _delegate;
    NSString *_curRecallId;
}

+ (id)sharedInstance;
+ (_Bool)forceShowInList:(id)arg1;
+ (void)updateSessionShowInList:(id)arg1 forceSetTo:(id)arg2;
+ (_Bool)clearUnread:(id)arg1;
+ (void)genPublicInfoSumAndType:(id)arg1 chatMessage:(id)arg2 card:(id)arg3;
+ (void)updateHintMessage:(id)arg1;
+ (id)parseChatMessage:(id)arg1;
@property(retain, nonatomic) NSString *curRecallId; // @synthesize curRecallId=_curRecallId;
@property(nonatomic) _Bool shouldUpdateFriendTabRedDot; // @synthesize shouldUpdateFriendTabRedDot=_shouldUpdateFriendTabRedDot;
@property(nonatomic) _Bool isNeedCompensateRequest; // @synthesize isNeedCompensateRequest=_isNeedCompensateRequest;
@property(nonatomic) __weak id <PPFollowListProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)lifeReplaceObjectForPublicId:(id)arg1 newObject:(id)arg2;
- (void)publicInfoByPublicId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)checkLifeInfo:(id)arg1 userId:(id)arg2;
- (void)setHasUnExposedMsgForPublicId:(id)arg1 hasUnExposedMsg:(_Bool)arg2;
- (void)makeAllMessageExposed;
- (void)loadMainDataCache;
- (id)publicIdArray:(id)arg1;
- (_Bool)isToDoOrServiceNotify:(id)arg1;
- (id)followObject:(id)arg1;
- (void)refreshTableView;
- (_Bool)isFirstStartApp;
- (void)requestFollowList;
- (id)unfollowPublicTypeWithPublicId:(id)arg1;
- (void)setUnfollowPublicTypeDic:(id)arg1;
- (id)unfollowPublicTypeDic;
- (void)unRegisterChatMessage;
- (void)registerChatMessage;
- (void)destroy;
- (void)start;
- (id)init;
- (id)transformDicFromFollowObjectInfo:(id)arg1 chatInfo:(id)arg2;
- (id)convertFollowList:(id)arg1;
- (_Bool)isExpired:(id)arg1;
- (id)visibleFollowList;
- (id)allSessionList;
- (id)sessionListByVip:(_Bool)arg1;
- (id)followList;
- (void)updateFriendTabForPublicId:(id)arg1 homeType:(id)arg2;
- (void)updateFriendTabVip:(id)arg1;
- (void)updateSessionStateForFollowObject:(id)arg1 sort:(_Bool)arg2 show:(_Bool)arg3;
- (void)replaceVipStatus:(_Bool)arg1 publicId:(id)arg2;
- (void)setTopForPublicId:(id)arg1 isCancel:(_Bool)arg2;
- (long long)lastFollowTime:(id)arg1;
- (void)lifeUpdateForPublicId:(id)arg1 withType:(id)arg2;
- (void)updateDataCacheForTransfer:(id)arg1 objectDic:(id)arg2;
- (void)publicDataTransferToLife:(id)arg1;
- (void)deleteSessionForPublicId:(id)arg1;
- (void)deleteFollowObject:(id)arg1;
- (void)modifyLastMessageForPublicId:(id)arg1 andLastMessage:(id)arg2;
- (void)clearNoneVipOnFriendTbWithPublicId:(id)arg1;
- (long long)dayOfUnreadStatusOutdate;
- (void)updateChatUnreadStatusAuto;
- (void)clearUnreadMsg:(id)arg1;
- (void)updateFollowObject:(id)arg1 ignoreUnread:(_Bool)arg2;
- (void)startLifeSync:(id)arg1 businessType:(id)arg2;
- (void)handlePPFollowListUnfollowNotification:(id)arg1;
- (void)handleAPRecentPackUpNotification:(id)arg1;
- (void)handleAPRecentUnfollowNotification:(id)arg1;
- (void)handlePushSwitchChangedNotification:(id)arg1;
- (void)logoutNotification:(id)arg1;
- (void)loginNotification:(id)arg1;
- (void)gestureWindowDidDismiss:(id)arg1;
- (void)notificateFollowListShouldReload:(id)arg1;
- (void)newPPFollowObjectsShouldRequest:(id)arg1;
- (void)notifyNewOperate:(id)arg1;
- (void)addNotification;
- (void)clearUnreadListForUnfollowGroupCell;
- (void)clearUnreadCountForUnfollowGroupCell;
- (void)readActionHappenedOfSomeUnfollow:(id)arg1;
- (void)newMsgReceivedOfUnfollow:(id)arg1;
- (void)deleteUnfollowGroupCell;
- (void)updateUnfollowGroupCell;
- (id)updateUnfollowGroupInfo;
- (void)deleteFriendTabLifeGroupCell;
- (id)lastMessageInList:(id)arg1;
- (id)clearFriendPointSwitch;
- (_Bool)hasUnReadChannelMessage;
- (_Bool)needUpdateLifeGroupCell:(id)arg1;
- (void)updateLifeGroupCell:(id)arg1;
- (id)publicRecentContactForLifeEntry:(id)arg1;
- (_Bool)noPublicInfoShownInLifeGroupCell:(id)arg1;
- (void)updateFriendTabLifeGroupCellAndForceShow:(_Bool)arg1;
- (void)updateHintMessage:(id)arg1 array:(id)arg2;
- (id)genMemoForGroupCell:(id)arg1;
- (id)genLifeGroupInfo:(_Bool)arg1;
- (long long)unreadMessageCount:(id)arg1;
- (void)saveGroupCellInfo:(id)arg1 key:(id)arg2;
- (id)getGroupCellInfoBy:(id)arg1;
- (void)onSocialSetTopUnPin:(id)arg1;
- (void)onSocialSetTopPin:(id)arg1;
- (void)onSocialTabBarClicked:(id)arg1;
- (void)markFollowObject:(id)arg1 unRead:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)onSetUnReadOnFriendTab:(id)arg1;
- (void)onSetReadOnFriendTab:(id)arg1;
- (void)onSessionDeleteOnFriendTab:(id)arg1;
- (void)addSocialTabNotification;
- (id)addFollowWithReqInfo:(id)arg1 errorToastShow:(_Bool)arg2 andComplete:(CDUnknownBlockType)arg3;
- (id)addFollowWithReqInfo:(id)arg1 andComplete:(CDUnknownBlockType)arg2;
- (_Bool)messageIsRead:(id)arg1;
- (_Bool)isUserInTheChat:(id)arg1;
- (int)filterRecallMessage:(id)arg1;
- (void)updateUnreadCount:(id)arg1 message:(id)arg2 isNew:(_Bool *)arg3 isRead:(_Bool)arg4 recallType:(int)arg5;
- (id)checkFollowInfo:(id)arg1 isFollow:(_Bool *)arg2;
- (void)updateFollowObjectInfo:(id)arg1 isRead:(_Bool *)arg2 recallType:(int)arg3;
- (void)messageDataNotify:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
