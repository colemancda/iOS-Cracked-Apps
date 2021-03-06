//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSong, UIViewController<NMPlaySourceViewControllerProtocol>;

@protocol NMPlaySourceViewControllerProtocol <NSObject>
@property(nonatomic) _Bool pushFromPlayView;
- (_Bool)isEqualToSourceController:(UIViewController<NMPlaySourceViewControllerProtocol> *)arg1;

@optional
@property(retain, nonatomic) NMSong *currentSong;
- (void)sourceScrollToCurrentSong;
@end

