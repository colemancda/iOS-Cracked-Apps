//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSString;

@interface AliDetailShopInfoItemModel : AliDetailComponentModel
{
    _Bool _transferToShort;
    NSString *_title;
    NSString *_subTitle;
}

@property(nonatomic) _Bool transferToShort; // @synthesize transferToShort=_transferToShort;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end
