//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TXEcardListItemModel;

@interface TXSelectedEcardItemInfo : NSObject
{
    _Bool _paySuccess;
    _Bool _useThf;
    TXEcardListItemModel *_selectedEcardItem;
}

@property(retain, nonatomic) TXEcardListItemModel *selectedEcardItem; // @synthesize selectedEcardItem=_selectedEcardItem;
@property(nonatomic) _Bool useThf; // @synthesize useThf=_useThf;
@property(nonatomic) _Bool paySuccess; // @synthesize paySuccess=_paySuccess;
- (void).cxx_destruct;

@end
