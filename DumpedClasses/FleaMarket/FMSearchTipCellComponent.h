//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMSearchKeywordCellComponent.h"

@class NSArray, NSAttributedString, UIImage;

@interface FMSearchTipCellComponent : FMSearchKeywordCellComponent
{
    NSArray *_labelList;
    NSAttributedString *_attributedKeyword;
    UIImage *_icon;
}

@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSAttributedString *attributedKeyword; // @synthesize attributedKeyword=_attributedKeyword;
@property(retain, nonatomic) NSArray *labelList; // @synthesize labelList=_labelList;
- (void).cxx_destruct;
- (Class)viewClass;

@end
