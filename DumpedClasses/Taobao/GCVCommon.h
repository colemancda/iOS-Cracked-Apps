//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GCVCommon : NSObject
{
    id <GCVImageLoaderProtocol> _imageLoader;
    long long _logLevel;
    NSMutableDictionary *_preLoadImageDict;
    NSMutableDictionary *_hadLoadImageDict;
}

+ (void)textImage2D:(unsigned int)arg1 withImage:(id)arg2;
+ (unsigned int)bindTexture:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *hadLoadImageDict; // @synthesize hadLoadImageDict=_hadLoadImageDict;
@property(retain, nonatomic) NSMutableDictionary *preLoadImageDict; // @synthesize preLoadImageDict=_preLoadImageDict;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) __weak id <GCVImageLoaderProtocol> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (struct CGImage *)imageRefFromBGRABytes:(char *)arg1 imageSize:(struct CGSize)arg2;
- (id)imageFromBRGABytes:(char *)arg1 imageSize:(struct CGSize)arg2;
- (_Bool)hadPreLoadImage;
- (void)clearLoadImageDict;
- (id)fetchLoadImage:(id)arg1;
- (void)addPreLoadImage:(id)arg1 instanceId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
