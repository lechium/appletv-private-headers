/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library


@interface IMWeakReference : NSObject {
	id _object;	// 4 = 0x4
	unsigned _objectAddress;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned _objectAddress;	// G=0x34a9f1f5; S=0x34a9f205; @synthesize
@property(assign, nonatomic) id object;	// G=0x34a9f1d1; S=0x34a9f1e5; @synthesize=_object
- (id)initWithObject:(id)object;	// 0x34a9f179
// declared property getter: - (unsigned)_objectAddress;	// 0x34a9f1f5
- (void)dealloc;	// 0x34a9f0cd
- (void)finalize;	// 0x34a9f085
- (unsigned)hash;	// 0x34a9f115
- (BOOL)isEqual:(id)equal;	// 0x34a9f125
// declared property getter: - (id)object;	// 0x34a9f1d1
// declared property setter: - (void)setObject:(id)object;	// 0x34a9f1e5
// declared property setter: - (void)set_objectAddress:(unsigned)address;	// 0x34a9f205
@end

