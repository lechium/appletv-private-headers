/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSDictionary, NSMutableDictionary;

@interface MCGenericAction : MCAction {
	NSMutableDictionary *mAttributes;	// 16 = 0x10
}
@property(copy) NSDictionary *attributes;	// G=0x34a4860d; S=0x34a486f5; @synthesize=mAttributes
+ (id)genericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes;	// 0x34a481f1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x34a48269
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x34a48809
- (id)attributeForKey:(id)key;	// 0x34a483b1
// declared property getter: - (id)attributes;	// 0x34a4860d
- (void)demolish;	// 0x34a482fd
- (id)imprint;	// 0x34a48351
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x34a484d9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x34a486f5
@end
