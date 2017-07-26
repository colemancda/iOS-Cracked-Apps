//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRecentMessageModel.h"

@class FAModel, NSString;

@interface QQRecentMessageModelFA : QQRecentMessageModel
{
    NSString *_fileType;
    double _progress;
    NSString *_fileName;
    FAModel *_fileModel;
    NSString *_originFileName;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) FAModel *fileModel; // @synthesize fileModel=_fileModel;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
- (id)convertFileTypeToStr:(int)arg1;
- (id)getTruncateFileNmae:(id)arg1;
- (id)getDetailTextWithFrame:(struct CGRect)arg1 font:(id)arg2;
- (void)getFileNameAndType;
- (void)syncFileRecordModel;
- (void)dealloc;
- (id)initWithPBModel:(struct RecentMsgModel *)arg1;
- (id)initWithMessageModel:(id)arg1;

@end
