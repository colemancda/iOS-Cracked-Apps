//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBTDBannerModel, TBTDBannerView;

@interface TBTDBannerEngine : NSObject
{
    TBTDBannerView *_bannerView;
    TBTDBannerModel *_bannerModel;
}

+ (double)viewHeight:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) TBTDBannerModel *bannerModel; // @synthesize bannerModel=_bannerModel;
@property(retain, nonatomic) TBTDBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)registerBlock:(CDUnknownBlockType)arg1 forName:(id)arg2;
- (void)bindData:(id)arg1;
- (id)init;

@end
