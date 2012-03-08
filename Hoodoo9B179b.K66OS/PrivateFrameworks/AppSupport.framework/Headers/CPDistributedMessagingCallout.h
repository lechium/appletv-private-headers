/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface CPDistributedMessagingCallout : NSObject {
	id _target;	// 4 = 0x4
	SEL _selector;	// 8 = 0x8
	BOOL _returnsVoid;	// 12 = 0xc
	BOOL _returnsVoidIsValid;	// 13 = 0xd
}
@property(readonly, assign, nonatomic) BOOL returnsVoid;	// G=0x33391139; @synthesize=_returnsVoid
@property(readonly, assign, nonatomic) SEL selector;	// G=0x33391149; @synthesize=_selector
@property(readonly, retain, nonatomic) id target;	// G=0x33391159; @synthesize=_target
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x33391271
- (void)dealloc;	// 0x33391325
// declared property getter: - (BOOL)returnsVoid;	// 0x33391139
// declared property getter: - (SEL)selector;	// 0x33391149
// declared property getter: - (id)target;	// 0x33391159
@end

