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
+ (id)textMarkerWithVisiblePosition:(VisiblePosition *)visiblePosition cache:(AXObjectCache *)cache;	// 0x3066652d
- (id)initWithData:(id)data accessibilityObject:(id)object;	// 0x30666639
- (id)initWithData:(id)data cache:(AXObjectCache *)cache;	// 0x3066667d
- (id)initWithTextMarker:(TextMarkerData *)textMarker cache:(AXObjectCache *)cache;	// 0x306664cd
- (id)dataRepresentation;	// 0x306665fd
- (id)description;	// 0x30666585
- (VisiblePosition)visiblePosition;	// 0x306665d1
@end

