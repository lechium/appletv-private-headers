/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorScheme : NSObject {
@private
	NSMutableDictionary *mColors;	// 4 = 0x4
}
- (id)init;	// 0x311a19cd
- (void)addColor:(id)color index:(int)index;	// 0x311a5535
- (void)addDefaultColors;	// 0x3138400d
- (unsigned)colorCount;	// 0x31286265
- (id)colorForIndex:(int)index;	// 0x310eae61
- (void)dealloc;	// 0x3117108d
- (BOOL)isEqual:(id)equal;	// 0x31383f9d
- (void)setColor:(id)color index:(int)index;	// 0x31384209
@end

