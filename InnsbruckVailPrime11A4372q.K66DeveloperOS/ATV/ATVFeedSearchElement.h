/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchElement : ATVFeedRootElement {
	BOOL _showPreview;	// 4 = 0x4
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	NSString *_baseURL;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *baseURL;	// G=0x11f5dd; S=0x11f5f1; @synthesize=_baseURL
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x11f5a5; S=0x11f5b5; @synthesize=_header
@property(assign, nonatomic) BOOL showPreview;	// G=0x11f601; S=0x11f611; @synthesize=_showPreview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x11f3d1
- (void).cxx_destruct;	// 0x11f621
// declared property getter: - (id)baseURL;	// 0x11f5dd
// declared property getter: - (id)header;	// 0x11f5a5
// declared property setter: - (void)setBaseURL:(id)url;	// 0x11f5f1
// declared property setter: - (void)setHeader:(id)header;	// 0x11f5b5
// declared property setter: - (void)setShowPreview:(BOOL)preview;	// 0x11f611
// declared property getter: - (BOOL)showPreview;	// 0x11f601
@end

