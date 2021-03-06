//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAMobileLiveBaseVM.h"

@class FAMobileLiveClassify, FAMobileLiveHotClassify, FAMobileLiveRedPeoplePredicInfo, NSArray;

@interface FAMobileLiveListVM : FAMobileLiveBaseVM
{
    _Bool _loading;
    _Bool _isNeedLoadAllData;
    _Bool _lockLoadList;
    FAMobileLiveRedPeoplePredicInfo *_bigVipInfo;
    long long _currentPage1;
    long long _type;
    FAMobileLiveHotClassify *_currentHotClassify;
    FAMobileLiveClassify *_currentClassify;
    CDUnknownBlockType _requestListFinishHandler;
    NSArray *_recommendListArr;
    FAMobileLiveRedPeoplePredicInfo *_tempAllListInfo;
    unsigned long long _recommendListStatus;
    unsigned long long _allListStatus;
}

@property(nonatomic) _Bool lockLoadList; // @synthesize lockLoadList=_lockLoadList;
@property(nonatomic) unsigned long long allListStatus; // @synthesize allListStatus=_allListStatus;
@property(nonatomic) unsigned long long recommendListStatus; // @synthesize recommendListStatus=_recommendListStatus;
@property(retain, nonatomic) FAMobileLiveRedPeoplePredicInfo *tempAllListInfo; // @synthesize tempAllListInfo=_tempAllListInfo;
@property(retain, nonatomic) NSArray *recommendListArr; // @synthesize recommendListArr=_recommendListArr;
@property(nonatomic) _Bool isNeedLoadAllData; // @synthesize isNeedLoadAllData=_isNeedLoadAllData;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) CDUnknownBlockType requestListFinishHandler; // @synthesize requestListFinishHandler=_requestListFinishHandler;
@property(retain, nonatomic) FAMobileLiveClassify *currentClassify; // @synthesize currentClassify=_currentClassify;
@property(retain, nonatomic) FAMobileLiveHotClassify *currentHotClassify; // @synthesize currentHotClassify=_currentHotClassify;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long currentPage1; // @synthesize currentPage1=_currentPage1;
@property(retain, nonatomic) FAMobileLiveRedPeoplePredicInfo *bigVipInfo; // @synthesize bigVipInfo=_bigVipInfo;
- (void).cxx_destruct;
- (id)resortArrayWithSourceArray:(id)arg1 addArray:(id)arg2;
- (void)setNeedLoadAllListData;
- (_Bool)isNeedReloadListData;
- (void)reloadListData;
- (void)dealFinishGetLiveList:(_Bool)arg1;
- (void)requestFollowListData;
- (void)requestListData;
- (void)reqeustClassifyArtistList;
- (void)requestAllArtistList;
- (void)dealRequestAllList;
- (void)requestAllListFail;
- (void)mergeRecommendListAndAllList;
- (void)requestRecommendList;
- (void)requestHotClassifyList;
- (id)init;

@end

