//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPaddingView, UIView;

@protocol FBPaddingViewDelegate <NSObject>

@optional
- (void)onTouchCancel:(FBPaddingView *)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onTouchMoved:(FBPaddingView *)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onTouchDown:(FBPaddingView *)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onTouchUp:(FBPaddingView *)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onTouchUpInside:(FBPaddingView *)arg1 pointInRootView:(struct CGPoint)arg2;
- (UIView *)FBRootView;
@end
