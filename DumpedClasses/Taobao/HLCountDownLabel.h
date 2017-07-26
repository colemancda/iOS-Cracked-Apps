//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class HLCountDownManager, UIColor;

@interface HLCountDownLabel : UILabel
{
    HLCountDownManager *_countDownManager;
    UIColor *_digitsColor;
    unsigned long long _countDownEndTime;
    unsigned long long _countDownInterval;
}

@property(nonatomic) unsigned long long countDownInterval; // @synthesize countDownInterval=_countDownInterval;
@property(nonatomic) unsigned long long countDownEndTime; // @synthesize countDownEndTime=_countDownEndTime;
@property(retain, nonatomic) UIColor *digitsColor; // @synthesize digitsColor=_digitsColor;
@property(nonatomic) __weak HLCountDownManager *countDownManager; // @synthesize countDownManager=_countDownManager;
- (void).cxx_destruct;
- (id)dateComponentsFromInterval:(unsigned long long)arg1;
- (void)countDown;
- (void)updateInitialTime;
- (void)updateCountDownInterval:(unsigned long long)arg1 countDownEndTime:(unsigned long long)arg2;
- (id)initWithDigitsColor:(id)arg1;

@end
