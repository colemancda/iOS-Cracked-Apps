//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSDictionary, NSString, QZLayoutInfo, QzoneFeedPicture, QzoneFeedUser;

@interface QzoneFeedCellShareThumb : QzoneModel
{
}

- (_Bool)needLayoutLeftThumb;

// Remaining properties
@property(retain, nonatomic) NSString *actionParam; // @dynamic actionParam;
@property(nonatomic) _Bool actionPost; // @dynamic actionPost;
@property(nonatomic) long long actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *actionURL; // @dynamic actionURL;
@property(retain, nonatomic) NSDictionary *extendInfo; // @dynamic extendInfo;
@property(retain, nonatomic) QZLayoutInfo *info; // @dynamic info;
@property(nonatomic) long long leftPicActionType; // @dynamic leftPicActionType;
@property(retain, nonatomic) NSString *leftPicActionUrl; // @dynamic leftPicActionUrl;
@property(nonatomic) long long mediaType; // @dynamic mediaType;
@property(retain, nonatomic) QzoneFeedPicture *picture; // @dynamic picture;
@property(retain, nonatomic) NSString *remark; // @dynamic remark;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) QzoneFeedUser *user; // @dynamic user;

@end
