/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSMutableDictionary, PFUbiquityLocation;

@interface PFUbiquityMigrationAssistant : NSObject {
	NSString *_ubiquityName;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	PFUbiquityLocation *_ubiquityRootLocation;	// 12 = 0xc
	NSMutableDictionary *_baselineLocationsByVersionHash;	// 16 = 0x10
	NSMutableDictionary *_logLocationsByVersionHash;	// 20 = 0x14
	NSMutableArray *_receiptLocations;	// 24 = 0x18
	NSMutableArray *_orderedReceipts;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *orderedReceipts;	// G=0x3639ba1d; converted property
@property(readonly, retain) NSMutableArray *receiptLocations;	// G=0x3639b9b5; converted property
- (id)initWithUbiquityRootLocation:(id)ubiquityRootLocation peerID:(id)anId ubiquityName:(id)name;	// 0x3639b555
- (void)_populateBaselineAndTransactionLogLocations;	// 0x3639b5cd
- (id)baselineLocationsByModelVersionHash;	// 0x3639b981
- (BOOL)canUseReceipts;	// 0x3639bc01
- (void)dealloc;	// 0x3639c239
- (id)latestBaselineLocationSkipModelVersionHash:(id)hash;	// 0x3639be85
- (id)latestTransactionLogForModelVersionHash:(id)modelVersionHash;	// 0x3639bc51
// converted property getter: - (id)orderedReceipts;	// 0x3639ba1d
// converted property getter: - (id)receiptLocations;	// 0x3639b9b5
- (id)transactionLogLocationsByModelVersionHash;	// 0x3639b9e9
- (id)transactionLogLocationsForModelVersionHash:(id)modelVersionHash;	// 0x3639c20d
@end
