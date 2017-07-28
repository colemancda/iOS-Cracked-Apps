//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, VSRecordSession, VSRecordSessionSegment, VSRecorder;

@protocol VSRecorderDelegate <NSObject>

@optional
- (NSDictionary *)createSegmentInfoForRecorder:(VSRecorder *)arg1;
- (void)recorder:(VSRecorder *)arg1 didOutputFrameBuffer:(struct __CVBuffer *)arg2 curTime:(CDStruct_1b6d18a9)arg3;
- (void)recorder:(VSRecorder *)arg1 didCompleteSession:(VSRecordSession *)arg2;
- (void)recorder:(VSRecorder *)arg1 didSkipVideoSampleBufferInSession:(VSRecordSession *)arg2;
- (void)recorder:(VSRecorder *)arg1 didSkipAudioSampleBufferInSession:(VSRecordSession *)arg2;
- (void)recorder:(VSRecorder *)arg1 didAppendAudioSampleBufferInSession:(VSRecordSession *)arg2;
- (void)recorder:(VSRecorder *)arg1 didAppendVideoSampleBufferInSession:(VSRecordSession *)arg2;
- (void)recorder:(VSRecorder *)arg1 didCompleteSegment:(VSRecordSessionSegment *)arg2 inSession:(VSRecordSession *)arg3 error:(NSError *)arg4;
- (void)recorder:(VSRecorder *)arg1 didBeginSegmentInSession:(VSRecordSession *)arg2 error:(NSError *)arg3;
- (void)recorder:(VSRecorder *)arg1 didInitializeVideoInSession:(VSRecordSession *)arg2 error:(NSError *)arg3;
- (void)recorder:(VSRecorder *)arg1 didInitializeAudioInSession:(VSRecordSession *)arg2 error:(NSError *)arg3;
- (void)recorderDidEndAdjustingExposure:(VSRecorder *)arg1;
- (void)recorderDidStartAdjustingExposure:(VSRecorder *)arg1;
- (void)recorderWillStartAdjustingExposure:(VSRecorder *)arg1;
- (void)recorderDidEndFocus:(VSRecorder *)arg1;
- (void)recorderDidStartFocus:(VSRecorder *)arg1;
- (void)recorderWillStartFocus:(VSRecorder *)arg1;
- (_Bool)recorderShouldAutomaticallyRefocus:(VSRecorder *)arg1;
- (void)recorder:(VSRecorder *)arg1 didChangeFlashMode:(long long)arg2 error:(NSError *)arg3;
- (void)recorder:(VSRecorder *)arg1 didReconfigureAudioInput:(NSError *)arg2;
- (void)recorder:(VSRecorder *)arg1 didReconfigureVideoInput:(NSError *)arg2;
@end
