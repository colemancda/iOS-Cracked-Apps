//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GroupSetReqItem.h"

@class NSArray;

@interface GroupSetResortReqItem : GroupSetReqItem
{
    NSArray *_groupIDArray;
    NSArray *_sortIDArray;
}

@property(retain, nonatomic) NSArray *sortIDArray; // @synthesize sortIDArray=_sortIDArray;
@property(retain, nonatomic) NSArray *groupIDArray; // @synthesize groupIDArray=_groupIDArray;
- (void).cxx_destruct;
- (char *)getRequestBuffer;

@end
