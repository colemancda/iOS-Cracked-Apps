//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, MOBILECHATFAVCollectionVO, NSArray, NSNumber, NSString;

@protocol favItemListProxy <APDAOProtocol>
- (NSArray *)queryFavItems;
- (APDAOResult *)deleteFavItemObjIds:(NSArray *)arg1;
- (APDAOResult *)deleteFavItemObjId:(NSString *)arg1;
- (NSArray *)queryByRowIds:(NSArray *)arg1;
- (NSArray *)queryFavItem:(NSNumber *)arg1 start:(NSNumber *)arg2;
- (NSArray *)queryFavItemObjIds:(NSArray *)arg1;
- (MOBILECHATFAVCollectionVO *)queryFavItemObjId:(NSString *)arg1;
- (APDAOResult *)insertFavItemList:(NSArray *)arg1;
- (APDAOResult *)insertFavItem:(MOBILECHATFAVCollectionVO *)arg1;
@end
