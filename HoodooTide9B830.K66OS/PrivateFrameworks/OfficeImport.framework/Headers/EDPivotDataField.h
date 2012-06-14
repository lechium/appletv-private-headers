/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotDataField : NSObject {
@private
	int mBaseField;	// 4 = 0x4
	unsigned mBaseItem;	// 8 = 0x8
	unsigned mFieldId;	// 12 = 0xc
	unsigned mNumFmtId;	// 16 = 0x10
	NSString *mName;	// 20 = 0x14
	int mFormat;	// 24 = 0x18
}
@property(assign) int baseField;	// G=0x313355e1; S=0x312f03c9; converted property
@property(assign) unsigned baseItem;	// G=0x313355f1; S=0x312f03d9; converted property
@property(assign) unsigned fieldId;	// G=0x31335601; S=0x312f03e9; converted property
@property(retain) id name;	// G=0x31335621; S=0x312f0409; converted property
@property(assign) unsigned numFmtId;	// G=0x31335611; S=0x312f03f9; converted property
@property(assign) int showDataAs;	// G=0x31335631; S=0x312f055d; converted property
+ (id)pivotDataField;	// 0x312f0309
- (id)init;	// 0x312f0351
// converted property getter: - (int)baseField;	// 0x313355e1
// converted property getter: - (unsigned)baseItem;	// 0x313355f1
- (void)dealloc;	// 0x312f1fad
// converted property getter: - (unsigned)fieldId;	// 0x31335601
// converted property getter: - (id)name;	// 0x31335621
// converted property getter: - (unsigned)numFmtId;	// 0x31335611
// converted property setter: - (void)setBaseField:(int)field;	// 0x312f03c9
// converted property setter: - (void)setBaseItem:(unsigned)item;	// 0x312f03d9
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x312f03e9
// converted property setter: - (void)setName:(id)name;	// 0x312f0409
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x312f03f9
// converted property setter: - (void)setShowDataAs:(int)as;	// 0x312f055d
// converted property getter: - (int)showDataAs;	// 0x31335631
@end
