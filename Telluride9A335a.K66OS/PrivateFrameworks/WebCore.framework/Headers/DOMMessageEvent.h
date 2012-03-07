/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class DOMMessagePort, DOMAbstractView, NSString;

__attribute__((visibility("hidden")))
@interface DOMMessageEvent : DOMEvent {
}
@property(readonly, retain) NSString *data;	// G=0x35bf2451; 
@property(readonly, copy) NSString *lastEventId;	// G=0x35bf2389; 
@property(readonly, retain) DOMMessagePort *messagePort;	// G=0x35bf2659; 
@property(readonly, copy) NSString *origin;	// G=0x35bf22c1; 
@property(readonly, retain) DOMAbstractView *source;	// G=0x35bf259d; 
- (void)initMessageEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)port;	// 0x35bf271d
// declared property getter: - (id)data;	// 0x35bf2451
// declared property getter: - (id)lastEventId;	// 0x35bf2389
// declared property getter: - (id)messagePort;	// 0x35bf2659
// declared property getter: - (id)origin;	// 0x35bf22c1
// declared property getter: - (id)source;	// 0x35bf259d
@end
