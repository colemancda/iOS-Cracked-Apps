//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBODetailAskBaseComponent.h"

@class UILabel;

@interface TBODetailAskComponent : TBODetailAskBaseComponent
{
    UILabel *_subTitleLabel;
}

+ (double)askComponentWithTitle:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configDataWithTitle:(id)arg1 countText:(id)arg2;
- (void)sizeToFit;

@end
