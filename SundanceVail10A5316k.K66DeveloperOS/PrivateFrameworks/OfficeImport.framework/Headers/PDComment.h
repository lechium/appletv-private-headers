/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDComment : NSObject {
@private
	CGPoint mPosition;	// 4 = 0x4
	NSString *mText;	// 12 = 0xc
	unsigned mAuthorId;	// 16 = 0x10
	NSString *mDate;	// 20 = 0x14
	unsigned mIndex;	// 24 = 0x18
}
@property(assign) unsigned authorId;	// G=0x31288939; S=0x31288949; converted property
@property(retain) id date;	// G=0x31288959; S=0x31288969; converted property
@property(assign) unsigned index;	// G=0x312889a5; S=0x312889b5; converted property
@property(assign) CGPoint position;	// G=0x312888bd; S=0x312888d5; converted property
@property(retain) id text;	// G=0x312888e9; S=0x312888f9; converted property
- (id)init;	// 0x31288809
- (id).cxx_construct;	// 0x312889c5
// converted property getter: - (unsigned)authorId;	// 0x31288939
// converted property getter: - (id)date;	// 0x31288959
- (void)dealloc;	// 0x31288859
// converted property getter: - (unsigned)index;	// 0x312889a5
// converted property getter: - (CGPoint)position;	// 0x312888bd
// converted property setter: - (void)setAuthorId:(unsigned)anId;	// 0x31288949
// converted property setter: - (void)setDate:(id)date;	// 0x31288969
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x312889b5
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x312888d5
// converted property setter: - (void)setText:(id)text;	// 0x312888f9
// converted property getter: - (id)text;	// 0x312888e9
@end

