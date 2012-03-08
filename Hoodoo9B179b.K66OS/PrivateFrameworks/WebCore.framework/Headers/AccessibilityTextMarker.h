/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccessibilityTextMarker : NSObject {
@private
	AXObjectCache *_cache;	// 4 = 0x4
	TextMarkerData _textMarkerData;	// 8 = 0x8
}
+ (id)textMarkerWithVisiblePosition:(VisiblePosition *)visiblePosition cache:(AXObjectCache *)cache;	// 0x336a98a1
- (id)initWithData:(id)data accessibilityObject:(id)object;	// 0x336a99ad
- (id)initWithData:(id)data cache:(AXObjectCache *)cache;	// 0x336a99f1
- (id)initWithTextMarker:(TextMarkerData *)textMarker cache:(AXObjectCache *)cache;	// 0x336a9841
- (id)dataRepresentation;	// 0x336a9971
- (id)description;	// 0x336a98f9
- (VisiblePosition)visiblePosition;	// 0x336a9945
@end

