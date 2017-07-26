//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, SZTextView, UILabel;

@interface SFEditView : UIView <UITextViewDelegate>
{
    double w_lineHeight;
    SZTextView *_textView;
    id <SFEditViewDelegate> _delegate;
    UILabel *_countLabel;
    long long _maxCount;
    struct CGPoint _textViewOrigin;
}

@property(nonatomic) struct CGPoint textViewOrigin; // @synthesize textViewOrigin=_textViewOrigin;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak id <SFEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SZTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
- (long long)textLength;
- (id)text;
- (void)countLabelReduce;
- (void)countLabelEnlarge;
- (void)updateInputCount;
- (void)textViewDidChange:(id)arg1;
- (void)tltextViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 textViewOrigin:(struct CGPoint)arg2 maxCount:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 maxCount:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
