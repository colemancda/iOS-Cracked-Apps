//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBNBizObject.h"

#import "BEECityPickerDelegate.h"

@class NSString;

@interface APBNCitiesSelector : APBNBizObject <BEECityPickerDelegate>
{
}

- (void)citiesController:(id)arg1 didSelectCity:(id)arg2;
- (void)getCitiesWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
