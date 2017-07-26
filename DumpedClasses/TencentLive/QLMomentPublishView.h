//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "QBPopupMenuDelegate.h"
#import "QLMomentPopupMenuDelegate.h"
#import "RTLabelDelegate.h"

@class NSString, QLHTMLLabel, QLMomentPublish, UIGestureRecognizer, UIImageView, UILabel;

@interface QLMomentPublishView : UIControl <QLMomentPopupMenuDelegate, QBPopupMenuDelegate, RTLabelDelegate>
{
    UILabel *_timeLabel;
    QLHTMLLabel *_textContentView;
    QLMomentPublish *_momentItem;
    UIImageView *_textBgView;
    UIGestureRecognizer *_gesture;
}

+ (id)generateMutlString:(id)arg1;
+ (double)textHeightForItem:(id)arg1 viewWidth:(double)arg2;
@property(retain, nonatomic) UIGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) UIImageView *textBgView; // @synthesize textBgView=_textBgView;
@property(retain, nonatomic) QLMomentPublish *momentItem; // @synthesize momentItem=_momentItem;
@property(retain, nonatomic) QLHTMLLabel *textContentView; // @synthesize textContentView=_textContentView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)rtLabel:(id)arg1 didSelectPlainTextWithEvent:(id)arg2;
- (void)rtLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)momentPopupMenuDidCopyAction:(id)arg1;
- (void)popupMenuWillDisappear:(id)arg1;
- (void)didLongPressGestureAction:(id)arg1;
- (void)displayMomentItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
