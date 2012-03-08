/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableDictionary, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquitySaveSnapshot : NSObject {
@private
	NSDate *_transactionDate;	// 4 = 0x4
	NSString *_modelVersionHash;	// 8 = 0x8
	NSString *_localPeerID;	// 12 = 0xc
	NSMutableDictionary *_storeNameToStoreSaveSnapshots;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x34893149; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x34893159; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *storeNames;	// G=0x348934e5; 
@property(retain, nonatomic) NSDate *transacationDate;	// G=0x34893169; S=0x348935b1; @synthesize=_transactionDate
- (id)initWithSaveNotification:(id)saveNotification withLocalPeerID:(id)localPeerID;	// 0x348932d5
- (id)initWithTransactionLog:(id)transactionLog;	// 0x34893179
- (void)dealloc;	// 0x34893505
- (id)description;	// 0x348935d9
// declared property getter: - (id)localPeerID;	// 0x34893149
// declared property getter: - (id)modelVersionHash;	// 0x34893159
// declared property setter: - (void)setTransacationDate:(id)date;	// 0x348935b1
// declared property getter: - (id)storeNames;	// 0x348934e5
- (id)storeSaveSnapshotForStore:(id)store;	// 0x3489340d
- (id)storeSaveSnapshotForStoreName:(id)storeName;	// 0x348933e9
// declared property getter: - (id)transacationDate;	// 0x34893169
@end

