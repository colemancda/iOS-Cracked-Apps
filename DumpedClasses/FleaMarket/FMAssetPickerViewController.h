//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCameraBaseViewController.h"

#import "FMAssetPreviewAnimatorDelegate.h"
#import "MBProgressHUDDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FMAlbumPreviewView, FMAssetPreviewAnimator, FMPHAssetGroupWrapper, NSMutableArray, NSString, UIImagePickerController, UITableView;

@interface FMAssetPickerViewController : FMCameraBaseViewController <MBProgressHUDDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, FMAssetPreviewAnimatorDelegate, UITableViewDelegate, UITableViewDataSource>
{
    unsigned int previewSize;
    int groupType;
    UIImagePickerController *imagePickerController;
    _Bool _hasResell;
    _Bool _assetLoaded;
    int _columns;
    FMAlbumPreviewView *_previewView;
    unsigned long long _fromType;
    FMPHAssetGroupWrapper *_assetGroup;
    NSMutableArray *_assets;
    CDUnknownBlockType _titleAction;
    long long _totalAssetCount;
    UITableView *_tableView;
    long long _curAssetIndex;
    FMAssetPreviewAnimator *_previewAnimator;
}

@property(retain, nonatomic) FMAssetPreviewAnimator *previewAnimator; // @synthesize previewAnimator=_previewAnimator;
@property(nonatomic) long long curAssetIndex; // @synthesize curAssetIndex=_curAssetIndex;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool assetLoaded; // @synthesize assetLoaded=_assetLoaded;
@property(nonatomic) long long totalAssetCount; // @synthesize totalAssetCount=_totalAssetCount;
@property(nonatomic) int columns; // @synthesize columns=_columns;
@property(copy, nonatomic) CDUnknownBlockType titleAction; // @synthesize titleAction=_titleAction;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) FMPHAssetGroupWrapper *assetGroup; // @synthesize assetGroup=_assetGroup;
@property(nonatomic) _Bool hasResell; // @synthesize hasResell=_hasResell;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) __weak FMAlbumPreviewView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (id)toAnimateAttributes;
- (id)fromAnimateAttributes;
- (struct CGRect)frameForAssetIndex;
- (void)setButtonContentCenter:(id)arg1;
- (void)presentResellController;
- (void)postWithDraftItemDO:(id)arg1;
- (id)defaultAssetsLibrary;
- (void)saveAndUseImageHelp:(id)arg1;
- (void)saveAndUseImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)postImageTakeCameraPicture;
- (long long)rowForAssetIndex:(long long)arg1;
- (void)pressLongAssetView:(id)arg1;
- (void)ablumImageExposed:(id)arg1;
- (void)deleteSelectedImage:(id)arg1;
- (void)assetViewChange:(id)arg1;
- (void)assetSelectionChanged:(id)arg1;
- (id)assetsForIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)rightAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)initAssets;
- (void)reloadTableViewWithSelectedArray:(id)arg1;
- (void)showAssetsWithSelectedArray:(id)arg1;
- (void)preparePhotos;
- (void)titleAction:(id)arg1;
- (void)setupNavigationTitle;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithPreviewSize:(int)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
