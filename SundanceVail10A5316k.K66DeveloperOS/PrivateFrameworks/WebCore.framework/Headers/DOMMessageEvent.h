/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class DOMAbstractView, NSString, DOMMessagePort;

__attribute__((visibility("hidden")))
@interface DOMMessageEvent : DOMEvent {
}
@property(readonly, assign) NSString *data;	// G=0x35400539; 
@property(readonly, assign) NSString *lastEventId;	// G=0x35400325; 
@property(readonly, assign) DOMMessagePort *messagePort;	// G=0x35400701; 
@property(readonly, assign) NSString *origin;	// G=0x35400215; 
@property(readonly, assign) DOMAbstractView *source;	// G=0x35400435; 
- (void)initMessageEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)port;	// 0x3540080d
// declared property getter: - (id)data;	// 0x35400539
// declared property getter: - (id)lastEventId;	// 0x35400325
// declared property getter: - (id)messagePort;	// 0x35400701
// declared property getter: - (id)origin;	// 0x35400215
// declared property getter: - (id)source;	// 0x35400435
@end
