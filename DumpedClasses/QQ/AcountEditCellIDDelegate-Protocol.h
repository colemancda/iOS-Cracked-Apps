//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AcountEditCellID, NSString, UITextField;

@protocol AcountEditCellIDDelegate <NSObject>
- (void)didAccountUinEdited;

@optional
- (void)didAccountEditReturnToPw:(AcountEditCellID *)arg1;
- (void)showAccountsEdit;
- (void)didAccountEditUinEnded:(AcountEditCellID *)arg1;
- (void)didAccountEditUinBegin:(double)arg1;
- (_Bool)textField:(UITextField *)arg1 shouldChangeCharactersInRangeOverride:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)ButtonIDHidden;
- (void)onAccountIDCleared;
@end
