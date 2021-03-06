/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSMutableSet, NSMutableDictionary, NSFileAccessNode, NSArray;

__attribute__((visibility("hidden")))
@interface NSFileSubarbitrationClaim : NSFileAccessClaim {
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
@property(retain) id messageSender;	// G=0x3743a301; S=0x3743a2bd; converted property
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x37439fc5
- (id)initWithReadingURLs:(id)readingURLs options:(unsigned)options writingURLs:(id)urls options:(unsigned)options4 claimer:(id)claimer;	// 0x37439f19
- (void)dealloc;	// 0x3743a1e1
- (void)devalueOldClaim:(id)claim;	// 0x3743b54d
- (void)devalueSelf;	// 0x3743bb7d
- (void)evaluateNewClaim:(id)claim;	// 0x3743b435
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x3743a5a9
- (void)forwardReacquisitionMessageWithKind:(id)kind parameters:(id)parameters toPresenterForID:(id)anId;	// 0x3743bfbd
- (void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters toPresenter:(id)presenter usingReplySender:(id)sender;	// 0x3743be41
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x3743a339
- (void)granted;	// 0x3743b62d
- (void)invokeClaimer;	// 0x3743ba25
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x3743b625
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x3743b629
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x3743bd31
// converted property getter: - (id)messageSender;	// 0x3743a301
- (id)relinquishmentForMessageOfKind:(id)kind toPresenterForID:(id)anId;	// 0x3743bd35
- (void)revoked;	// 0x3743baad
// converted property setter: - (void)setMessageSender:(id)sender;	// 0x3743a2bd
@end

