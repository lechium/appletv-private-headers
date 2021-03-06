/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"

@class NSSet, NSMutableArray, NSMutableDictionary, NSURL, NSDictionary, NSMutableSet;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup {
	NSSet *_sourceURLs;	// 44 = 0x2c
	NSURL *_destinationURL;	// 48 = 0x30
	int _overwrite;	// 52 = 0x34
	BOOL _useFallback;	// 56 = 0x38
	NSDictionary *_sourceEntityDataPayloads;	// 60 = 0x3c
	NSDictionary *_sourceEntityDataContentTypes;	// 64 = 0x40
	NSDictionary *_sourceEntityETags;	// 68 = 0x44
	NSMutableSet *_destinationURLs;	// 72 = 0x48
	NSMutableDictionary *_destinationEntityETags;	// 76 = 0x4c
	NSMutableArray *_outstandingSourceURLsToMove;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSMutableDictionary *destinationEntityETags;	// G=0x304acdd1; @synthesize=_destinationEntityETags
@property(readonly, assign, nonatomic) NSURL *destinationURL;	// G=0x304acd71; @synthesize=_destinationURL
@property(readonly, assign, nonatomic) NSMutableSet *destinationURLs;	// G=0x304acde1; @synthesize=_destinationURLs
@property(retain) NSMutableArray *outstandingSourceURLsToMove;	// G=0x304acdf1; S=0x304ace05; @synthesize=_outstandingSourceURLsToMove
@property(readonly, assign, nonatomic) int overwrite;	// G=0x304acd81; @synthesize=_overwrite
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityDataContentTypes;	// G=0x304acdb1; @synthesize=_sourceEntityDataContentTypes
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityDataPayloads;	// G=0x304acda1; @synthesize=_sourceEntityDataPayloads
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityETags;	// G=0x304acdc1; @synthesize=_sourceEntityETags
@property(readonly, assign, nonatomic) NSSet *sourceURLs;	// G=0x304acd61; @synthesize=_sourceURLs
@property(readonly, assign, nonatomic) BOOL useFallback;	// G=0x304acd91; @synthesize=_useFallback
- (id)initWithSourceURLs:(id)sourceURLs destinationURL:(id)url overwrite:(BOOL)overwrite useFallback:(BOOL)fallback sourceEntityDataPayloads:(id)payloads sourceEntityDataContentTypes:(id)types sourceEntityETags:(id)tags accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x304abad9
- (void)_completedMoveTask:(id)task sourceURL:(id)url;	// 0x304ac4f1
- (void)_completedPutTask:(id)task sourceURL:(id)url;	// 0x304ac985
- (id)_eTagFromTaskResponseHeaders:(id)taskResponseHeaders;	// 0x304ac4cd
- (void)_setTagsForDestinationEntityAtURL:(id)url fromTaskResponseHeaders:(id)taskResponseHeaders completionBlock:(id)block;	// 0x304ac435
- (void)dealloc;	// 0x304abea1
- (id)description;	// 0x304abf7d
// declared property getter: - (id)destinationEntityETags;	// 0x304acdd1
// declared property getter: - (id)destinationURL;	// 0x304acd71
// declared property getter: - (id)destinationURLs;	// 0x304acde1
- (id)filenameFromURL:(id)url;	// 0x304ac091
- (id)fullDestinationURLFromSourceURL:(id)sourceURL;	// 0x304ac03d
// declared property getter: - (id)outstandingSourceURLsToMove;	// 0x304acdf1
// declared property getter: - (int)overwrite;	// 0x304acd81
- (void)processOutstandingTasks;	// 0x304ac121
// declared property setter: - (void)setOutstandingSourceURLsToMove:(id)move;	// 0x304ace05
// declared property getter: - (id)sourceEntityDataContentTypes;	// 0x304acdb1
// declared property getter: - (id)sourceEntityDataPayloads;	// 0x304acda1
// declared property getter: - (id)sourceEntityETags;	// 0x304acdc1
// declared property getter: - (id)sourceURLs;	// 0x304acd61
- (void)startTaskGroup;	// 0x304ac0a5
// declared property getter: - (BOOL)useFallback;	// 0x304acd91
@end

