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
+ (void)boxLayoutsIn:(id)anIn;	// 0x33a5e401
+ (void)promoteLayoutsIn:(id)anIn;	// 0x33a5e261
- (void)boxLayout:(id)layout;	// 0x33a5e2c1
- (void)boxLayoutsIn:(id)anIn;	// 0x33a5e3a5
- (BOOL)layoutIsSliced:(id)sliced;	// 0x33a5dfd1
- (void)makeBoxesWith:(id)with parent:(id)parent;	// 0x33a5dc59
- (void)promoteLayoutsIn:(id)anIn;	// 0x33a5e205
- (void)promoteLayoutsInCertainRegions:(id)certainRegions;	// 0x33a5e0c1
- (void)rotate:(id)rotate;	// 0x33a5df81
- (void)rotateTextBox:(id)box;	// 0x33a5de01
@end

