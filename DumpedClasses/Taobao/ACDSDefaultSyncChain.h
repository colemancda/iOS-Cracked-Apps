//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACDSSyncChainProtocol.h"

@class ACDSConfig, NSDictionary, NSMutableArray, NSString;

@interface ACDSDefaultSyncChain : NSObject <ACDSSyncChainProtocol>
{
    _Bool _isComplete;
    NSString *_userId;
    ACDSConfig *_config;
    NSDictionary *_schema;
    long long _pageCount;
    NSString *_dsName;
    NSString *_startId;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSString *startId; // @synthesize startId=_startId;
@property(retain, nonatomic) NSString *dsName; // @synthesize dsName=_dsName;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(retain, nonatomic) NSDictionary *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) ACDSConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)mergeData:(id)arg1;
- (void)sendCommandToServerByStartId:(id)arg1 byCallback:(CDUnknownBlockType)arg2;
- (void)prepareBasicDataFor:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)processBasicData:(id)arg1 for:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
