/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface UIWebPDFSearchResult : NSObject {
@private
	NSArray *rotationAngles;	// 4 = 0x4
	unsigned pageIndex;	// 8 = 0x8
	NSArray *strings;	// 12 = 0xc
	NSString *string;	// 16 = 0x10
	CGRect boundingBox;	// 20 = 0x14
	NSArray *rects;	// 36 = 0x24
}
@property(assign, nonatomic) CGRect boundingBox;	// G=0x303ed84d; S=0x303ed871; @synthesize
@property(assign, nonatomic) unsigned pageIndex;	// G=0x303ed7c5; S=0x303ed7d5; @synthesize
@property(retain, nonatomic) NSArray *rects;	// G=0x303ed88d; S=0x303ed89d; @synthesize
@property(retain, nonatomic) NSArray *rotationAngles;	// G=0x303ed791; S=0x303ed7a1; @synthesize
@property(retain, nonatomic) NSString *string;	// G=0x303ed819; S=0x303ed829; @synthesize
@property(retain, nonatomic) NSArray *strings;	// G=0x303ed7e5; S=0x303ed7f5; @synthesize
// declared property getter: - (CGRect)boundingBox;	// 0x303ed84d
// declared property getter: - (unsigned)pageIndex;	// 0x303ed7c5
// declared property getter: - (id)rects;	// 0x303ed88d
// declared property getter: - (id)rotationAngles;	// 0x303ed791
// declared property setter: - (void)setBoundingBox:(CGRect)box;	// 0x303ed871
// declared property setter: - (void)setPageIndex:(unsigned)index;	// 0x303ed7d5
// declared property setter: - (void)setRects:(id)rects;	// 0x303ed89d
// declared property setter: - (void)setRotationAngles:(id)angles;	// 0x303ed7a1
// declared property setter: - (void)setString:(id)string;	// 0x303ed829
// declared property setter: - (void)setStrings:(id)strings;	// 0x303ed7f5
// declared property getter: - (id)string;	// 0x303ed819
// declared property getter: - (id)strings;	// 0x303ed7e5
@end
