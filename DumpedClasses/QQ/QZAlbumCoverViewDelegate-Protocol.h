//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol QZAlbumCoverViewDelegate <NSObject>
- (void)onClickVisitorBtn;

@optional
- (void)goToLikeList;
- (void)addComment;
- (void)onClickComment;
- (void)onClickLike;
- (void)onClickAlbumLoverHeart;
- (void)inviteLover;
- (void)handleClickLoverAvatar:(long long)arg1 nick:(NSString *)arg2;
- (void)onClickShareUserView;
- (void)onClickAlbumCover;
- (void)onClickJoinBtn;
- (void)onClickUploadBtn;
@end
