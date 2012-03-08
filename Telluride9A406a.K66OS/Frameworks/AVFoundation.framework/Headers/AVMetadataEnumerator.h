/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSEnumerator.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, NSLocale;

@interface AVMetadataEnumerator : NSEnumerator {
@private
	OpaqueFigMetadataReader *_reader;	// 4 = 0x4
	NSEnumerator *_arrayEnumerator;	// 8 = 0x8
	id _key;	// 12 = 0xc
	NSString *_keySpace;	// 16 = 0x10
	NSLocale *_locale;	// 20 = 0x14
	int _count;	// 24 = 0x18
	int _index;	// 28 = 0x1c
}
+ (id)metadataEnumeratorWithArray:(id)array key:(id)key keySpace:(id)space locale:(id)locale;	// 0x30eccb15
+ (id)metadataEnumeratorWithMetadataReader:(OpaqueFigMetadataReader *)metadataReader;	// 0x30eccacd
- (id)initWithArray:(id)array key:(id)key keySpace:(id)space locale:(id)locale;	// 0x30ecc79d
- (id)initWithMetadataReader:(OpaqueFigMetadataReader *)metadataReader;	// 0x30ecc779
- (id)initWithMetadataReader:(OpaqueFigMetadataReader *)metadataReader array:(id)array key:(id)key keySpace:(id)space locale:(id)locale;	// 0x30eccc69
- (void)_setArrayEnumerator:(id)enumerator;	// 0x30ecc7cd
- (void)_setKey:(id)key;	// 0x30ecc80d
- (void)_setKeySpace:(id)space;	// 0x30ecc84d
- (void)_setLocale:(id)locale;	// 0x30ecc88d
- (void)_setMetadataReader:(OpaqueFigMetadataReader *)reader;	// 0x30eccb6d
- (void)dealloc;	// 0x30eccb99
- (void)finalize;	// 0x30eccc29
- (id)nextObject;	// 0x30ecc8cd
@end

