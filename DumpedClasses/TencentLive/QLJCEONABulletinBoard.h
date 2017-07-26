//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

#import "P_QLSprayVideoBoardLiveStatus.h"

@class NSArray, NSString, QLJCEAction, QLJCEOptionGroup, QLJCEPoster, QLJCEVideoAttentItem, QLJCEVideoItemData, QLJCEVideoItemExtra, QLLiveV3DetailPollModel;

@interface QLJCEONABulletinBoard : JceObjectV2 <P_QLSprayVideoBoardLiveStatus>
{
    _Bool jcev2_p_7_o_isAutoPlayer;
    _Bool jcev2_p_8_o_isLiveVideo;
    _Bool jcev2_p_13_o_dislikeMark;
    int jcev2_p_15_o_uiStyle;
    QLJCEPoster *jcev2_p_0_r_poster;
    NSArray *jcev2_p_1_o_tagTexts__b0x9i_VOQLJCEIconTagText;
    NSArray *jcev2_p_2_o_comments__b0x9i_VONSString;
    QLJCEAction *jcev2_p_3_o_action;
    NSArray *jcev2_p_4_o_ritchComments__b0x9i_VOQLJCEIconTagText;
    QLJCEVideoAttentItem *jcev2_p_5_o_attentItem;
    QLJCEVideoItemData *jcev2_p_6_o_videoData;
    NSString *jcev2_p_9_o_pid;
    NSString *jcev2_p_10_o_streamId;
    long long jcev2_p_11_o_startTime;
    long long jcev2_p_12_o_endTime;
    QLJCEOptionGroup *jcev2_p_14_o_dislikeOptionGroup;
    QLJCEVideoItemExtra *jcev2_p_16_o_liveExtra;
}

+ (id)jceType;
+ (void)initialize;
+ (Class)getRealizeClass;
@property(retain, nonatomic, getter=jce_liveExtra, setter=setJce_liveExtra:) QLJCEVideoItemExtra *jcev2_p_16_o_liveExtra; // @synthesize jcev2_p_16_o_liveExtra;
@property(nonatomic, getter=jce_uiStyle, setter=setJce_uiStyle:) int jcev2_p_15_o_uiStyle; // @synthesize jcev2_p_15_o_uiStyle;
@property(retain, nonatomic, getter=jce_dislikeOptionGroup, setter=setJce_dislikeOptionGroup:) QLJCEOptionGroup *jcev2_p_14_o_dislikeOptionGroup; // @synthesize jcev2_p_14_o_dislikeOptionGroup;
@property(nonatomic, getter=jce_dislikeMark, setter=setJce_dislikeMark:) _Bool jcev2_p_13_o_dislikeMark; // @synthesize jcev2_p_13_o_dislikeMark;
@property(nonatomic, getter=jce_endTime, setter=setJce_endTime:) long long jcev2_p_12_o_endTime; // @synthesize jcev2_p_12_o_endTime;
@property(nonatomic, getter=jce_startTime, setter=setJce_startTime:) long long jcev2_p_11_o_startTime; // @synthesize jcev2_p_11_o_startTime;
@property(retain, nonatomic, getter=jce_streamId, setter=setJce_streamId:) NSString *jcev2_p_10_o_streamId; // @synthesize jcev2_p_10_o_streamId;
@property(retain, nonatomic, getter=jce_pid, setter=setJce_pid:) NSString *jcev2_p_9_o_pid; // @synthesize jcev2_p_9_o_pid;
@property(nonatomic, getter=jce_isLiveVideo, setter=setJce_isLiveVideo:) _Bool jcev2_p_8_o_isLiveVideo; // @synthesize jcev2_p_8_o_isLiveVideo;
@property(nonatomic, getter=jce_isAutoPlayer, setter=setJce_isAutoPlayer:) _Bool jcev2_p_7_o_isAutoPlayer; // @synthesize jcev2_p_7_o_isAutoPlayer;
@property(retain, nonatomic, getter=jce_videoData, setter=setJce_videoData:) QLJCEVideoItemData *jcev2_p_6_o_videoData; // @synthesize jcev2_p_6_o_videoData;
@property(retain, nonatomic, getter=jce_attentItem, setter=setJce_attentItem:) QLJCEVideoAttentItem *jcev2_p_5_o_attentItem; // @synthesize jcev2_p_5_o_attentItem;
@property(retain, nonatomic, getter=jce_ritchComments, setter=setJce_ritchComments:) NSArray *jcev2_p_4_o_ritchComments__b0x9i_VOQLJCEIconTagText; // @synthesize jcev2_p_4_o_ritchComments__b0x9i_VOQLJCEIconTagText;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_3_o_action; // @synthesize jcev2_p_3_o_action;
@property(retain, nonatomic, getter=jce_comments, setter=setJce_comments:) NSArray *jcev2_p_2_o_comments__b0x9i_VONSString; // @synthesize jcev2_p_2_o_comments__b0x9i_VONSString;
@property(retain, nonatomic, getter=jce_tagTexts, setter=setJce_tagTexts:) NSArray *jcev2_p_1_o_tagTexts__b0x9i_VOQLJCEIconTagText; // @synthesize jcev2_p_1_o_tagTexts__b0x9i_VOQLJCEIconTagText;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_0_r_poster; // @synthesize jcev2_p_0_r_poster;
- (void).cxx_destruct;
- (id)init;
- (void)configBulletBoard:(id)arg1 withUserInfo:(id)arg2;
- (double)heightWithUserInfo:(id)arg1;
- (_Bool)isNewsModel;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)cancelLoadingStatus;
- (long long)qlsb_liveStreamStatus;
- (void)qlsb_checkLiveStreamStatusUsingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) long long liveStreamStatus; // @dynamic liveStreamStatus;
@property(copy, nonatomic) CDUnknownBlockType itemSBlock; // @dynamic itemSBlock;
@property(retain, nonatomic) QLLiveV3DetailPollModel *detailPollModel; // @dynamic detailPollModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
