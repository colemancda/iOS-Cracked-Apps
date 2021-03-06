//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSString;

@interface KTVHomeRecommendInfo : KTVObjectModel
{
    int _recommendID;
    int _sorts;
    int _type;
    NSString *_action;
    NSString *_icon;
    NSString *_text;
    NSString *_title;
    long long _uptime;
}

+ (id)keyMapper;
@property(nonatomic) long long uptime; // @synthesize uptime=_uptime;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int sorts; // @synthesize sorts=_sorts;
@property(nonatomic) int recommendID; // @synthesize recommendID=_recommendID;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)resetProperties;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

