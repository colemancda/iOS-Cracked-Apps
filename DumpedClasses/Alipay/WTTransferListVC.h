//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WealthTallyBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APTableView, NSArray, NSString;

@interface WTTransferListVC : WealthTallyBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    APTableView *_tableView;
    NSString *_month;
    NSArray *_transferList;
}

@property(retain, nonatomic) NSArray *transferList; // @synthesize transferList=_transferList;
@property(copy, nonatomic) NSString *month; // @synthesize month=_month;
- (void).cxx_destruct;
- (void)notificationRefreshUI:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)buildSubViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
