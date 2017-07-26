//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSString;

@interface QQDYPluginFeed : QQModel <NSCopying>
{
    NSString *_feedId;
    unsigned long long _templateId;
    NSString *_backgroundUrl;
    NSString *_backgroundText;
    unsigned long long _iconType;
    unsigned long long _iconShape;
    NSString *_iconUrl;
    unsigned long long _uin;
    NSString *_title;
    NSString *_subTitle;
    NSString *_subTitleTag;
    NSString *_subTitleIcon;
    unsigned long long _subTitleIconType;
    unsigned long long _subTitleIconShape;
    unsigned long long _tipsType;
    NSString *_introduce;
    unsigned long long _introduceIconType;
    NSString *_jumpInfo;
    unsigned long long _titleTagType;
    NSString *_extraInfo;
    struct CGPoint _focusPoint;
}

@property(copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) unsigned long long titleTagType; // @synthesize titleTagType=_titleTagType;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
@property(copy, nonatomic) NSString *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) unsigned long long introduceIconType; // @synthesize introduceIconType=_introduceIconType;
@property(copy, nonatomic) NSString *introduce; // @synthesize introduce=_introduce;
@property(nonatomic) unsigned long long tipsType; // @synthesize tipsType=_tipsType;
@property(nonatomic) unsigned long long subTitleIconShape; // @synthesize subTitleIconShape=_subTitleIconShape;
@property(nonatomic) unsigned long long subTitleIconType; // @synthesize subTitleIconType=_subTitleIconType;
@property(copy, nonatomic) NSString *subTitleIcon; // @synthesize subTitleIcon=_subTitleIcon;
@property(copy, nonatomic) NSString *subTitleTag; // @synthesize subTitleTag=_subTitleTag;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long iconShape; // @synthesize iconShape=_iconShape;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
@property(copy, nonatomic) NSString *backgroundText; // @synthesize backgroundText=_backgroundText;
@property(copy, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(nonatomic) unsigned long long templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (id)getNickname;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
