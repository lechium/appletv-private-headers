/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPBody, CPZone;

@interface CPTextBoxMaker : NSObject {
	CPBody *bodyZone;	// 4 = 0x4
	CPZone *mainZone;	// 8 = 0x8
}
+ (void)boxLayoutsIn:(id)anIn;	// 0x31f63049
+ (void)promoteLayoutsIn:(id)anIn;	// 0x31f62fed
- (void)boxLayout:(id)layout;	// 0x31f62e91
- (void)boxLayoutsIn:(id)anIn;	// 0x31f62f81
- (BOOL)layoutIsSliced:(id)sliced;	// 0x31f630a5
- (void)makeBoxesWith:(id)with parent:(id)parent;	// 0x31f62ad1
- (void)promoteLayoutsIn:(id)anIn;	// 0x31f62e25
- (void)promoteLayoutsInCertainRegions:(id)certainRegions;	// 0x31f62ce9
- (void)rotate:(id)rotate;	// 0x31f62c8d
- (void)rotateTextBox:(id)box;	// 0x31f631a1
@end
