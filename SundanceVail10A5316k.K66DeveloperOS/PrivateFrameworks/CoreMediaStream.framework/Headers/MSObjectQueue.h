/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"


@interface MSObjectQueue : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	CFDictionaryRef _statements;	// 8 = 0x8
}
@property(readonly, assign) long long count;	// G=0x339a975d; 
- (id)initWithPath:(id)path;	// 0x339a934d
- (id)_objectWrapperFromQueueQuery:(sqlite3_stmt *)queueQuery outSize:(long long *)size;	// 0x339a9a5d
- (sqlite3_stmt *)_statementLabel:(id)label query:(const char *)query;	// 0x339a96a9
- (id)allObjectWrappersMaxCount:(long long)count;	// 0x339a9b79
- (void)appendObjectWrappers:(id)wrappers;	// 0x339a97a5
- (void)commitErrorCountsForObjectWrappers:(id)objectWrappers;	// 0x339aa385
- (void)commitObjectsWrappers:(id)wrappers;	// 0x339aa5ed
// declared property getter: - (long long)count;	// 0x339a975d
- (void)dealloc;	// 0x339a95fd
- (id)objectWrappersWithZeroSizeMaxCount:(long long)zeroSizeMaxCount;	// 0x339a9d4d
- (void)removeObjectWrappersFromQueue:(id)queue;	// 0x339aa175
- (id)smallestObjectWrappersTargetTotalSize:(long long)size maxCount:(long long)count;	// 0x339a9f21
@end

