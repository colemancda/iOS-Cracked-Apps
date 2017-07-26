//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface MidStorageModel : NSObject <NSCopying>
{
    NSString *mid;
    NSString *midRandom;
    NSString *midGenerateTime;
    NSDate *midUpdateTime;
    NSString *appId;
    NSString *appBizId;
    NSString *appBizIdRandom;
    NSString *appBizIdGenerateTime;
    NSDate *appBizIdUpdateTime;
}

@property(retain, nonatomic) NSDate *appBizIdUpdateTime; // @synthesize appBizIdUpdateTime;
@property(retain, nonatomic) NSDate *midUpdateTime; // @synthesize midUpdateTime;
@property(retain, nonatomic) NSString *appBizIdGenerateTime; // @synthesize appBizIdGenerateTime;
@property(retain, nonatomic) NSString *appBizIdRandom; // @synthesize appBizIdRandom;
@property(retain, nonatomic) NSString *appBizId; // @synthesize appBizId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *midGenerateTime; // @synthesize midGenerateTime;
@property(retain, nonatomic) NSString *mid; // @synthesize mid;
@property(retain, nonatomic) NSString *midRandom; // @synthesize midRandom;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
