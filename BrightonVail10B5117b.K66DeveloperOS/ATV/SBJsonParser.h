/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBJsonParser : XXUnknownSuperclass {
	NSString *error;	// 4 = 0x4
	unsigned depth;	// 8 = 0x8
	unsigned maxDepth;	// 12 = 0xc
}
@property(copy) NSString *error;	// G=0x4ad2ed; S=0x4ad301; @synthesize
@property(assign) unsigned maxDepth;	// G=0x4ad2c1; S=0x4ad2d5; @synthesize
- (id)init;	// 0x4acfe5
- (void)dealloc;	// 0x4ad02d
// declared property getter: - (id)error;	// 0x4ad2ed
// declared property getter: - (unsigned)maxDepth;	// 0x4ad2c1
- (id)objectWithData:(id)data;	// 0x4ad079
- (id)objectWithString:(id)string;	// 0x4ad1f9
- (id)objectWithString:(id)string error:(id *)error;	// 0x4ad22d
// declared property setter: - (void)setError:(id)error;	// 0x4ad301
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x4ad2d5
@end
