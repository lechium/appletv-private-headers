/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface CPTextLineMerge : NSObject {
	NSMutableArray *avail;	// 4 = 0x4
}
- (void)addInterval:(id)interval to:(id)to;	// 0x32aef801
- (float)averageHeight:(id)height;	// 0x32af05b5
- (unsigned)countOverlapsOfLineAtIndex:(unsigned)index in:(id)anIn;	// 0x32af019d
- (void)detachDropCaps:(id)caps to:(id)to;	// 0x32af02ad
- (void)dropCaps:(id)caps to:(id)to;	// 0x32af0669
- (void)eliminate:(id)eliminate;	// 0x32aefe3d
- (id)findLineFor:(id)aFor in:(id)anIn;	// 0x32af0499
- (BOOL)fits:(id)fits into:(id)into;	// 0x32aef609
- (BOOL)hasOverlappingLines;	// 0x32aefed9
- (void)makeOverlappingLinesTo:(id)to;	// 0x32aeffdd
- (void)mergeByColumn:(id)column;	// 0x32aefbed
- (void)mergeColumn:(id)column;	// 0x32aef9b5
- (void)mergeLinesIn:(id)anIn;	// 0x32af089d
- (void)mergeLinesInInterval:(id)interval from:(id)from;	// 0x32aefafd
- (void)removeOverlapping:(id)overlapping;	// 0x32af0121
@end
