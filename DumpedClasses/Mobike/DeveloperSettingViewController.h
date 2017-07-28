//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_TableViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString;

@interface DeveloperSettingViewController : Mobike_TableViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    NSArray *titleArray;
    NSArray *envTitleArray;
    NSDictionary *verCodeParam;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_pickEnvironment;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupView;
- (void)setupController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
