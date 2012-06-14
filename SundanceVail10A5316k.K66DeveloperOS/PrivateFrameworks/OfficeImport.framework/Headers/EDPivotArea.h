/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection, EDReference;

__attribute__((visibility("hidden")))
@interface EDPivotArea : NSObject {
@private
	bool mGrandCol;	// 4 = 0x4
	bool mGrandRow;	// 5 = 0x5
	bool mOutline;	// 6 = 0x6
	int mType;	// 8 = 0x8
	EDCollection *mReferences;	// 12 = 0xc
	EDReference *mOffset;	// 16 = 0x10
}
@property(assign) bool grandCol;	// G=0x3122f79d; S=0x3122f7b1; converted property
@property(assign) bool grandRow;	// G=0x3122f779; S=0x3122f78d; converted property
@property(retain) id offset;	// G=0x3122f805; S=0x3122f815; converted property
@property(assign) bool outline;	// G=0x3122f7c1; S=0x3122f7d5; converted property
@property(assign) int type;	// G=0x3122f7e5; S=0x3122f7f5; converted property
+ (id)pivotArea;	// 0x3122f731
- (id)init;	// 0x3122f62d
- (void)dealloc;	// 0x3122f6cd
// converted property getter: - (bool)grandCol;	// 0x3122f79d
// converted property getter: - (bool)grandRow;	// 0x3122f779
// converted property getter: - (id)offset;	// 0x3122f805
// converted property getter: - (bool)outline;	// 0x3122f7c1
- (id)references;	// 0x3122f859
// converted property setter: - (void)setGrandCol:(bool)col;	// 0x3122f7b1
// converted property setter: - (void)setGrandRow:(bool)row;	// 0x3122f78d
// converted property setter: - (void)setOffset:(id)offset;	// 0x3122f815
// converted property setter: - (void)setOutline:(bool)outline;	// 0x3122f7d5
// converted property setter: - (void)setType:(int)type;	// 0x3122f7f5
// converted property getter: - (int)type;	// 0x3122f7e5
@end

