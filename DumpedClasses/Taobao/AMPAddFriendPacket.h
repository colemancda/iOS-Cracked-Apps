//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPAddFriendPacket : AMPNetPacket
{
    NSString *_identity;
    NSString *_identityType;
    NSString *_remark;
    NSString *_contactName;
}

@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *identityType; // @synthesize identityType=_identityType;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithIdentity:(id)arg1 type:(id)arg2 remark:(id)arg3 contactName:(id)arg4;

@end
