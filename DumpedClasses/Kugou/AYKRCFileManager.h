//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AYKRCFileManager : NSObject
{
}

+ (id)getChorusWithHash:(id)arg1;
+ (void)saveChorusForSong:(id)arg1 withChorusArr:(id)arg2;
+ (id)getKrcChorusPathBySong:(id)arg1;
+ (void)saveKrcMetaInfoWithHashCode:(id)arg1 krcMetaInfo:(id)arg2;
+ (id)getKrcMetaInfoDicWithSongHash:(id)arg1;
+ (id)getKrcMetaInfoFilePath;
+ (_Bool)createFileWithPath:(id)arg1 data:(id)arg2;
+ (_Bool)saveKrcFileForSong:(id)arg1 withKtcData:(id)arg2;
+ (_Bool)createDirectoryWithPath:(id)arg1;
+ (_Bool)removeFileAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)delectKrcFileBySong:(id)arg1;
+ (_Bool)isExsitFileWithPath:(id)arg1;
+ (_Bool)checkFileOutDateKrcForSong:(id)arg1;
+ (_Bool)isExsitKrcFileBySong:(id)arg1;
+ (id)getFileDataByPath:(id)arg1;
+ (id)getKrcFilePathBySong:(id)arg1;
+ (id)getSaveDirectory;
+ (id)getCacheDirectory;

@end

