/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface WMListLevelTextToken : NSObject {
@private
	NSString *m_string;	// 4 = 0x4
	int m_level;	// 8 = 0x8
}
@property(readonly, assign) int level;	// G=0x327d5cfd; converted property
@property(readonly, retain) NSString *string;	// G=0x327d5ced; converted property
+ (id)tokenWithString:(id)string andLevel:(int)level;	// 0x327d5aa9
- (id)initWithString:(id)string andLevel:(int)level;	// 0x327d5af5
- (void)dealloc;	// 0x327d5fe5
// converted property getter: - (int)level;	// 0x327d5cfd
// converted property getter: - (id)string;	// 0x327d5ced
- (id)stringForIndex:(int)index withFormat:(int)format initialNumber:(int)number;	// 0x327d5d29
@end

