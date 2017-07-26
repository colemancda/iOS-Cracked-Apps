//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSIndexPath, NSMutableArray, QQMoreOptionTableViewCell;

@interface QQMoreOptionButtonView : UIView
{
    NSMutableArray *_buttonArray;
    QQMoreOptionTableViewCell *_parentCell;
    double _totalButtonWidth;
    NSMutableArray *_widthArray;
    int _buttonNum;
    NSIndexPath *_indexPath;
    int _xo;
}

- (void)configurateButtonContextData:(id)arg1;
- (void)configurateButtonAttribute:(id)arg1;
- (void)configurateButtonSkinImageImageNormal:(id)arg1;
- (void)configurateButtonTitleColor:(id)arg1;
- (void)configurateButtonBackgroundColor:(id)arg1;
- (void)configurateButtionTitle:(id)arg1;
- (long long)buttonCount;
- (void)buttonPressed:(id)arg1;
- (void)configurateButton:(id)arg1;
- (void)dealloc;
- (void)updateButtons;
- (void)configurateButtons;
- (id)initWithParentCell:(id)arg1 buttonNums:(int)arg2 widthArray:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buttonArray; // @dynamic buttonArray;
@property(nonatomic) int buttonNum; // @dynamic buttonNum;
@property(retain, nonatomic) NSIndexPath *indexPath; // @dynamic indexPath;
@property(nonatomic) QQMoreOptionTableViewCell *parentCell; // @dynamic parentCell;
@property(nonatomic) double totalButtonWidth; // @dynamic totalButtonWidth;
@property(retain, nonatomic) NSMutableArray *widthArray; // @dynamic widthArray;

@end
