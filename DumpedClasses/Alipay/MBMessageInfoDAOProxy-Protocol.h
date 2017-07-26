//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, MBMessageInfoItem, NSArray, NSNumber, NSString;

@protocol MBMessageInfoDAOProxy <APDAOProtocol>
- (MBMessageInfoItem *)queryFirstUnreadMessage;
- (MBMessageInfoItem *)queryLatestUnreadMessage;
- (MBMessageInfoItem *)queryLatestReadMessage;
- (APDAOResult *)clearStaleMessages:(NSNumber *)arg1;
- (APDAOResult *)clearAllMessages;
- (APDAOResult *)deleteMessagesWithTemplateCode:(NSString *)arg1;
- (APDAOResult *)deleteMessagesWithIDs:(NSArray *)arg1;
- (APDAOResult *)deleteMessages:(NSArray *)arg1;
- (APDAOResult *)markAllMessagesRead;
- (APDAOResult *)updateReadMessagesWithIDs:(NSArray *)arg1;
- (APDAOResult *)updateReadMessages:(NSArray *)arg1;
- (NSArray *)queryUnreadMessagesInMessages:(NSArray *)arg1;
- (NSNumber *)queryUnreadMessagesCount;
- (NSNumber *)queryAllMessagesCount;
- (NSArray *)queryMessagesWithIDs:(NSArray *)arg1;
- (NSArray *)queryMessagesWithPrimaryID:(NSArray *)arg1;
- (NSArray *)queryMessagesBefore:(NSNumber *)arg1 limit:(NSNumber *)arg2;
- (APDAOResult *)insertMessages:(NSArray *)arg1;
@end
