/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVWeakReference.h"

@class NSString;

@interface AVGarbageCollectedWeakReference : AVWeakReference {
@private
	id _referencedObject;	// 4 = 0x4
	NSString *_cachedReferencedObjectDescription;	// 8 = 0x8
}
@property(readonly, retain) id referencedObject;	// G=0x314b1541; converted property
- (id)init;	// 0x314b15e1
- (id)initWithReferencedObject:(id)referencedObject;	// 0x314b15f5
- (id)description;	// 0x314b1581
// converted property getter: - (id)referencedObject;	// 0x314b1541
@end

