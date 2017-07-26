//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APGSearchBarDelegate.h"
#import "APGSearchResultProtocol.h"
#import "FBDocumentDelegate.h"
#import "PromotionCenterDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WKTableViewControllerDelegate.h"

@class APExceptionView, APGSearchBar, APGSearchCategoryNoFriendsView, APGSearchDetailViewController, APGSearchErrorView, APGSearchManager, APGSearchResultViewController, APGSuggestViewController, FBDocument, NSDictionary, NSMutableArray, NSOperationQueue, NSString, UIViewController, WKTableViewController;

@interface APGSearchMainViewController : DTViewController <APGSearchBarDelegate, APGSearchResultProtocol, WKTableViewControllerDelegate, UINavigationBarDelegate, PromotionCenterDelegate, FBDocumentDelegate, UIScrollViewDelegate>
{
    _Bool _isInCategorySearch;
    _Bool _isHotWordSearch;
    _Bool _isCancelSuggest;
    APGSearchManager *_searchManager;
    NSString *_spaceCode;
    APGSearchBar *_searchBar;
    NSString *_targetId;
    NSDictionary *_launchOptions;
    NSString *_keyword;
    NSString *_wid;
    NSString *_currentClickId;
    FBDocument *_defaultSearchDocument;
    WKTableViewController *_defaultResultViewController;
    NSString *_oldSearchText;
    APGSearchDetailViewController *_detailViewController;
    APGSearchErrorView *_errorView;
    APGSearchCategoryNoFriendsView *_noFriendsView;
    APExceptionView *_exceptionView;
    NSMutableArray *_searchResultsCache;
    NSString *_currentBucketId;
    NSOperationQueue *_searchQueue;
    NSString *_defaultSearchViewTitle;
    NSString *_currentCategory;
    long long _currentCategoryShowNumber;
    id <APConfigService> _configService;
    id _cacheNavigationDelegate;
    DTViewController *_currentViewController;
    APGSuggestViewController *_suggestViewController;
    UIViewController *_defaultSearchViewController;
    APGSearchResultViewController *_searchResultViewController;
    NSString *_queryHint;
    NSString *_queryWord;
}

@property(retain, nonatomic) NSString *queryWord; // @synthesize queryWord=_queryWord;
@property(retain, nonatomic) NSString *queryHint; // @synthesize queryHint=_queryHint;
@property(nonatomic) _Bool isCancelSuggest; // @synthesize isCancelSuggest=_isCancelSuggest;
@property(retain, nonatomic) APGSearchResultViewController *searchResultViewController; // @synthesize searchResultViewController=_searchResultViewController;
@property(retain, nonatomic) UIViewController *defaultSearchViewController; // @synthesize defaultSearchViewController=_defaultSearchViewController;
@property(retain, nonatomic) APGSuggestViewController *suggestViewController; // @synthesize suggestViewController=_suggestViewController;
@property(retain, nonatomic) DTViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id cacheNavigationDelegate; // @synthesize cacheNavigationDelegate=_cacheNavigationDelegate;
@property(retain, nonatomic) id <APConfigService> configService; // @synthesize configService=_configService;
@property(nonatomic) _Bool isHotWordSearch; // @synthesize isHotWordSearch=_isHotWordSearch;
@property(nonatomic) long long currentCategoryShowNumber; // @synthesize currentCategoryShowNumber=_currentCategoryShowNumber;
@property(retain, nonatomic) NSString *currentCategory; // @synthesize currentCategory=_currentCategory;
@property(nonatomic) _Bool isInCategorySearch; // @synthesize isInCategorySearch=_isInCategorySearch;
@property(retain, nonatomic) NSString *defaultSearchViewTitle; // @synthesize defaultSearchViewTitle=_defaultSearchViewTitle;
@property(retain, nonatomic) NSOperationQueue *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(retain, nonatomic) NSString *currentBucketId; // @synthesize currentBucketId=_currentBucketId;
@property(retain, nonatomic) NSMutableArray *searchResultsCache; // @synthesize searchResultsCache=_searchResultsCache;
@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) APGSearchCategoryNoFriendsView *noFriendsView; // @synthesize noFriendsView=_noFriendsView;
@property(retain, nonatomic) APGSearchErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) APGSearchDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) NSString *oldSearchText; // @synthesize oldSearchText=_oldSearchText;
@property(retain, nonatomic) WKTableViewController *defaultResultViewController; // @synthesize defaultResultViewController=_defaultResultViewController;
@property(retain, nonatomic) FBDocument *defaultSearchDocument; // @synthesize defaultSearchDocument=_defaultSearchDocument;
@property(copy, nonatomic) NSString *currentClickId; // @synthesize currentClickId=_currentClickId;
@property(retain, nonatomic) NSString *wid; // @synthesize wid=_wid;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) APGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(retain, nonatomic) APGSearchManager *searchManager; // @synthesize searchManager=_searchManager;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarOpenVoiceAssister:(id)arg1;
- (void)everyWhereSuggestWithText:(id)arg1;
- (void)suggestWithText:(id)arg1;
- (void)showDefaultSearchView;
- (void)showSearchResultViewWithText:(id)arg1 withLogParams:(id)arg2;
- (void)showSearchResultView:(id)arg1;
- (void)showSuggestView;
- (void)showNetErrorView:(long long)arg1;
- (void)showErrorView;
- (void)showDefaultResultView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDestroy;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)setInitQuery:(id)arg1 searchWord:(id)arg2;
- (_Bool)isSuggestSupported;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
