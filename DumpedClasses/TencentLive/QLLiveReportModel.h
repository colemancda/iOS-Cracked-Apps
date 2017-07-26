//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSArray, NSString, QLASIHTTPRequest;

@interface QLLiveReportModel : QLRequestModel
{
    NSString *_strPid;
    NSString *_strVideoId;
    NSString *_actorId;
    NSString *_actotrName;
    NSString *_title;
    long long _time;
    NSArray *_reportReason;
    NSString *_streamId;
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSArray *reportReason; // @synthesize reportReason=_reportReason;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *actotrName; // @synthesize actotrName=_actotrName;
@property(retain, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(retain, nonatomic) NSString *strVideoId; // @synthesize strVideoId=_strVideoId;
@property(retain, nonatomic) NSString *strPid; // @synthesize strPid=_strPid;
- (void).cxx_destruct;
- (void)requestDidRetryRequest:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)cancel;
- (void)cancelDataRequest;
- (void)dealloc;

@end
