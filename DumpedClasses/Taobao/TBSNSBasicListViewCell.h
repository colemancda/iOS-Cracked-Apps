//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface TBSNSBasicListViewCell : UITableViewCell
{
    CDUnknownBlockType _prepareForReuseBlock;
    long long _indexR;
    void *_extraD;
    UIView *_myBackgroundView;
}

+ (id)getCellFromItem:(id)arg1;
@property(retain, nonatomic) UIView *myBackgroundView; // @synthesize myBackgroundView=_myBackgroundView;
@property(nonatomic) void *extraD; // @synthesize extraD=_extraD;
@property(nonatomic) long long indexR; // @synthesize indexR=_indexR;
@property(copy, nonatomic) CDUnknownBlockType prepareForReuseBlock; // @synthesize prepareForReuseBlock=_prepareForReuseBlock;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

