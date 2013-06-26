/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import </libobjc.A.h>

@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {
	DisplayRefreshMonitor *m_monitor;	// 4 = 0x4
	CADisplayLink *m_displayLink;	// 8 = 0x8
}
- (id)initWithMonitor:(DisplayRefreshMonitor *)monitor;	// 0x33145a11
- (void)dealloc;	// 0x33145abd
- (void)handleDisplayLink:(id)link;	// 0x33145ae9
- (void)invalidate;	// 0x33145b51
@end
