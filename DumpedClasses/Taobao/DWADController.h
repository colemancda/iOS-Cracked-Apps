//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DWPlayerLifecycleProtocol.h"

@class DWContext, DWPlayer, DWVideoFrontModel, NSString, TBMPBPlayerView;

@interface DWADController : NSObject <DWPlayerLifecycleProtocol>
{
    _Bool _firstPlay;
    _Bool _videoComplete;
    DWContext *_context;
    CDUnknownBlockType _onVideoADStartAction;
    CDUnknownBlockType _onVideoADEndAction;
    CDUnknownBlockType _videoADOnPlayBlock;
    CDUnknownBlockType _videoFullScreenBlock;
    CDUnknownBlockType _videoNormalScreenBlock;
    DWPlayer *_player;
    TBMPBPlayerView *_videoView;
    id <DWPlayerLifecycleProtocol> _lifecycleDelegate;
    NSString *_adStageName;
    DWVideoFrontModel *_videoADModel;
}

@property(nonatomic) _Bool videoComplete; // @synthesize videoComplete=_videoComplete;
@property(nonatomic) _Bool firstPlay; // @synthesize firstPlay=_firstPlay;
@property(retain, nonatomic) DWVideoFrontModel *videoADModel; // @synthesize videoADModel=_videoADModel;
@property(copy, nonatomic) NSString *adStageName; // @synthesize adStageName=_adStageName;
@property(nonatomic) __weak id <DWPlayerLifecycleProtocol> lifecycleDelegate; // @synthesize lifecycleDelegate=_lifecycleDelegate;
@property(retain, nonatomic) TBMPBPlayerView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) DWPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) CDUnknownBlockType videoNormalScreenBlock; // @synthesize videoNormalScreenBlock=_videoNormalScreenBlock;
@property(copy, nonatomic) CDUnknownBlockType videoFullScreenBlock; // @synthesize videoFullScreenBlock=_videoFullScreenBlock;
@property(copy, nonatomic) CDUnknownBlockType videoADOnPlayBlock; // @synthesize videoADOnPlayBlock=_videoADOnPlayBlock;
@property(copy, nonatomic) CDUnknownBlockType onVideoADEndAction; // @synthesize onVideoADEndAction=_onVideoADEndAction;
@property(copy, nonatomic) CDUnknownBlockType onVideoADStartAction; // @synthesize onVideoADStartAction=_onVideoADStartAction;
@property(retain, nonatomic) DWContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)onVideoBecomeActive;
- (void)onVideoNormalScreen;
- (void)onVideoFullScreen;
- (void)onVideoPlay;
- (void)onVideoError:(id)arg1;
- (void)onVideoPause;
- (void)onVideoStart;
- (void)onVideoViewTapAtPlayedTime:(double)arg1;
- (void)onVideoClose;
- (void)onVideoComplete;
- (void)startADWithModel:(id)arg1;
- (void)performActionWithADName:(id)arg1;
- (void)onInteractiveHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
