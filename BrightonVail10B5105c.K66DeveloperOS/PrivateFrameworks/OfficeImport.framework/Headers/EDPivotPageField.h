/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface EDPivotPageField : NSObject {
	unsigned mFieldId;	// 4 = 0x4
	NSString *mCap;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
}
@property(retain) id cap;	// G=0x37ad1399; S=0x37ad13a9; converted property
@property(assign) unsigned fieldId;	// G=0x37ad1325; S=0x37ad1335; converted property
@property(retain) id name;	// G=0x37ad1345; S=0x37ad1355; converted property
+ (id)pivotPageField;	// 0x37ad12dd
- (id)init;	// 0x37ad1239
// converted property getter: - (id)cap;	// 0x37ad1399
- (void)dealloc;	// 0x37ad1279
// converted property getter: - (unsigned)fieldId;	// 0x37ad1325
// converted property getter: - (id)name;	// 0x37ad1345
// converted property setter: - (void)setCap:(id)cap;	// 0x37ad13a9
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x37ad1335
// converted property setter: - (void)setName:(id)name;	// 0x37ad1355
@end

