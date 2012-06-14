/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSMutableSet, NSFileAccessNode, NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface NSFileSubarbitrationClaim : NSFileAccessClaim {
@private
	NSArray *_readingURLs;	// 72 = 0x48
	unsigned _readingOptions;	// 76 = 0x4c
	NSArray *_writingURLs;	// 80 = 0x50
	unsigned _writingOptions;	// 84 = 0x54
	id _messageSender;	// 88 = 0x58
	NSArray *_readingLocations;	// 92 = 0x5c
	NSArray *_writingLocations;	// 96 = 0x60
	NSFileAccessNode *_rootNode;	// 100 = 0x64
	NSMutableSet *_forwardedClaimIDs;	// 104 = 0x68
	NSMutableDictionary *_readRelinquishmentsByPresenterID;	// 108 = 0x6c
	NSMutableDictionary *_writeRelinquishmentsByPresenterID;	// 112 = 0x70
}
@property(retain) id messageSender;	// G=0x31b14335; S=0x31b142f1; converted property
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x31b13ff9
- (id)initWithReadingURLs:(id)readingURLs options:(unsigned)options writingURLs:(id)urls options:(unsigned)options4 claimer:(id)claimer;	// 0x31b13f4d
- (void)dealloc;	// 0x31b14215
- (void)devalueOldClaim:(id)claim;	// 0x31b15581
- (void)devalueSelf;	// 0x31b15bb1
- (void)evaluateNewClaim:(id)claim;	// 0x31b15469
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x31b145dd
- (void)forwardReacquisitionMessageWithKind:(id)kind parameters:(id)parameters toPresenterForID:(id)anId;	// 0x31b15ff1
- (void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters toPresenter:(id)presenter usingReplySender:(id)sender;	// 0x31b15e75
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x31b1436d
- (void)granted;	// 0x31b15661
- (void)invokeClaimer;	// 0x31b15a59
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x31b15659
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x31b1565d
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x31b15d65
// converted property getter: - (id)messageSender;	// 0x31b14335
- (id)relinquishmentForMessageOfKind:(id)kind toPresenterForID:(id)anId;	// 0x31b15d69
- (void)revoked;	// 0x31b15ae1
// converted property setter: - (void)setMessageSender:(id)sender;	// 0x31b142f1
@end

