/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIWebPDFLinkAction : NSObject {
@private
	NSString *title;	// 4 = 0x4
	int type;	// 8 = 0x8
	id handler;	// 12 = 0xc
}
@property(copy, nonatomic) id handler;	// G=0x304215d1; S=0x304215e5; @synthesize
@property(copy, nonatomic) NSString *title;	// G=0x3042158d; S=0x304215a1; @synthesize
@property(assign, nonatomic) int type;	// G=0x304215b1; S=0x304215c1; @synthesize
// declared property getter: - (id)handler;	// 0x304215d1
// declared property setter: - (void)setHandler:(id)handler;	// 0x304215e5
// declared property setter: - (void)setTitle:(id)title;	// 0x304215a1
// declared property setter: - (void)setType:(int)type;	// 0x304215c1
// declared property getter: - (id)title;	// 0x3042158d
// declared property getter: - (int)type;	// 0x304215b1
@end

