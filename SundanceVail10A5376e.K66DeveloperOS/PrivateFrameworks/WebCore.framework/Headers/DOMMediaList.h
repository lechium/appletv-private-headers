/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

@interface DOMMediaList : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x31b2455d; 
@property(copy) NSString *mediaText;	// G=0x31b241e5; S=0x31b243a5; 
- (void)appendMedium:(id)medium;	// 0x31b24905
- (void)dealloc;	// 0x31b23fb5
- (void)deleteMedium:(id)medium;	// 0x31b2474d
- (void)finalize;	// 0x31b240e1
- (id)item:(unsigned)item;	// 0x31b2458d
// declared property getter: - (unsigned)length;	// 0x31b2455d
// declared property getter: - (id)mediaText;	// 0x31b241e5
// declared property setter: - (void)setMediaText:(id)text;	// 0x31b243a5
@end
