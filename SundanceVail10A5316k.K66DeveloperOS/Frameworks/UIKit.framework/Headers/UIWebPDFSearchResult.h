/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {
@private
	NSArray *rotationAngles;	// 4 = 0x4
	unsigned pageIndex;	// 8 = 0x8
	NSArray *strings;	// 12 = 0xc
	NSString *string;	// 16 = 0x10
	CGRect boundingBox;	// 20 = 0x14
	NSArray *rects;	// 36 = 0x24
}
@property(assign, nonatomic) CGRect boundingBox;	// G=0x30453871; S=0x30453895; @synthesize
@property(assign, nonatomic) unsigned pageIndex;	// G=0x30453811; S=0x30453821; @synthesize
@property(retain, nonatomic) NSArray *rects;	// G=0x304538b1; S=0x304538c1; @synthesize
@property(retain, nonatomic) NSArray *rotationAngles;	// G=0x304537f1; S=0x30453801; @synthesize
@property(retain, nonatomic) NSString *string;	// G=0x30453851; S=0x30453861; @synthesize
@property(retain, nonatomic) NSArray *strings;	// G=0x30453831; S=0x30453841; @synthesize
// declared property getter: - (CGRect)boundingBox;	// 0x30453871
// declared property getter: - (unsigned)pageIndex;	// 0x30453811
// declared property getter: - (id)rects;	// 0x304538b1
// declared property getter: - (id)rotationAngles;	// 0x304537f1
// declared property setter: - (void)setBoundingBox:(CGRect)box;	// 0x30453895
// declared property setter: - (void)setPageIndex:(unsigned)index;	// 0x30453821
// declared property setter: - (void)setRects:(id)rects;	// 0x304538c1
// declared property setter: - (void)setRotationAngles:(id)angles;	// 0x30453801
// declared property setter: - (void)setString:(id)string;	// 0x30453861
// declared property setter: - (void)setStrings:(id)strings;	// 0x30453841
// declared property getter: - (id)string;	// 0x30453851
// declared property getter: - (id)strings;	// 0x30453831
@end

