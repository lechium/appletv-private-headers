/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSXMLParser;

@interface RUIYTDelegate : XXUnknownSuperclass {
	NSMutableArray *_entries;	// 12 = 0xc
	int _totalResults;	// 16 = 0x10
	NSXMLParser *_parser;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *entries;	// G=0x6e99; converted property
@property(readonly, assign) int totalResults;	// G=0x6e79; converted property
- (id)init;	// 0x6d6d
- (void)addEntry:(id)entry;	// 0x6dc9
- (void)dealloc;	// 0x6d25
- (void)endTotalResults;	// 0x6ec1
// converted property getter: - (id)entries;	// 0x6e99
- (void)setWeakReferenceToParser:(id)parser;	// 0x6d15
// converted property getter: - (int)totalResults;	// 0x6e79
@end

