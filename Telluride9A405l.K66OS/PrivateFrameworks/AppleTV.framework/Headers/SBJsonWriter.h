/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBJsonWriter : NSObject {
@private
	NSString *error;	// 4 = 0x4
	unsigned maxDepth;	// 8 = 0x8
	BOOL sortKeys;	// 12 = 0xc
	BOOL humanReadable;	// 13 = 0xd
}
@property(copy) NSString *error;	// G=0x3608b8d8; S=0x3608b8a4; @synthesize
@property(assign) BOOL humanReadable;	// G=0x3608b7e4; S=0x3608b7fc; @synthesize
@property(assign) unsigned maxDepth;	// G=0x3608b7bc; S=0x3608b7d0; @synthesize
@property(assign) BOOL sortKeys;	// G=0x3608b810; S=0x3608b828; @synthesize
- (id)init;	// 0x3608b83c
- (id)dataWithObject:(id)object;	// 0x3608b8f8
- (void)dealloc;	// 0x3608bcec
// declared property getter: - (id)error;	// 0x3608b8d8
// declared property getter: - (BOOL)humanReadable;	// 0x3608b7e4
// declared property getter: - (unsigned)maxDepth;	// 0x3608b7bc
// declared property setter: - (void)setError:(id)error;	// 0x3608b8a4
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x3608b7fc
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x3608b7d0
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x3608b828
// declared property getter: - (BOOL)sortKeys;	// 0x3608b810
- (id)stringWithObject:(id)object;	// 0x3608bc74
- (id)stringWithObject:(id)object error:(id *)error;	// 0x3608bbb4
@end
