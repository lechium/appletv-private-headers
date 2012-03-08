/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFObject.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : NSObject <MFObject> {
@private
	NSMutableArray *m_colours;	// 4 = 0x4
}
+ (id)paletteWithColours:(id)colours;	// 0x329983e5
- (id)init;	// 0x328b3f79
- (id)initWithColours:(id)colours;	// 0x32998421
- (void)dealloc;	// 0x328af2dd
- (id)getColour:(int)colour;	// 0x32ae5121
- (BOOL)resize:(int)resize;	// 0x32ae5191
- (int)selectInto:(id)into;	// 0x32998511
- (BOOL)setEntries:(int)entries :(id)arg2;	// 0x32ae526d
@end

