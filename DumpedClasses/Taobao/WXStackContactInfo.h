//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface WXStackContactInfo : NSObject
{
    NSString *_contactId;
    NSString *_nickName;
    NSString *_avatar;
    NSString *_signature;
    NSString *_md5Phone;
    NSString *_reason;
    NSString *_question;
    NSNumber *_groupId;
    unsigned long long _timeStamp;
    long long _distance;
    long long _gender;
}

@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *question; // @synthesize question=_question;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *md5Phone; // @synthesize md5Phone=_md5Phone;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
- (void).cxx_destruct;

@end
