//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString;

@interface WeAppShareComponentUtility : UIResponder <CLLocationManagerDelegate>
{
    CLLocationManager *_locationMananager;
}

+ (id)locationCache;
+ (id)sharedInstance;
@property(retain, nonatomic) CLLocationManager *locationMananager; // @synthesize locationMananager=_locationMananager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)getLocationAccuracy:(double)arg1 useCache:(_Bool)arg2 result:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
