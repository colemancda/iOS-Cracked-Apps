//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQMessageModel;

@interface QQPicDownloadModel : NSObject
{
    QQMessageModel *_messageModel;
    int _getPicSizeType;
    long long _eDownloadMode;
    int _xo;
}

- (void).cxx_destruct;
- (id)initWithQQMessageModel:(id)arg1 getPicSizeType:(int)arg2;

// Remaining properties
@property(nonatomic) long long eDownloadMode; // @dynamic eDownloadMode;
@property(nonatomic) int getPicSizeType; // @dynamic getPicSizeType;
@property(retain, nonatomic) QQMessageModel *messageModel; // @dynamic messageModel;

@end
