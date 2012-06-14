/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSString, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchElement : ATVFeedRootElement {
@private
	ATVFeedHeaderElement *_header;	// 52 = 0x34
	NSString *_baseURL;	// 56 = 0x38
	BOOL _showPreview;	// 60 = 0x3c
}
@property(copy, nonatomic) NSString *baseURL;	// G=0x303c7bd1; S=0x303c7be1; @synthesize=_baseURL
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x303c7b9d; S=0x303c7bad; @synthesize=_header
@property(assign, nonatomic) BOOL showPreview;	// G=0x303c7c05; S=0x303c7c15; @synthesize=_showPreview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303c79f5
// declared property getter: - (id)baseURL;	// 0x303c7bd1
- (void)dealloc;	// 0x303c7b3d
// declared property getter: - (id)header;	// 0x303c7b9d
// declared property setter: - (void)setBaseURL:(id)url;	// 0x303c7be1
// declared property setter: - (void)setHeader:(id)header;	// 0x303c7bad
// declared property setter: - (void)setShowPreview:(BOOL)preview;	// 0x303c7c15
// declared property getter: - (BOOL)showPreview;	// 0x303c7c05
@end
