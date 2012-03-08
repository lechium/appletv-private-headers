/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedHeaderElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedMetadataTitleHeaderElement : ATVFeedHeaderElement {
@private
	NSString *_rating;	// 40 = 0x28
}
@property(copy, nonatomic) NSString *rating;	// G=0x331eb0d9; S=0x331eb0e9; @synthesize=_rating
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x331eb00d
- (void)dealloc;	// 0x331eb08d
// declared property getter: - (id)rating;	// 0x331eb0d9
// declared property setter: - (void)setRating:(id)rating;	// 0x331eb0e9
@end

