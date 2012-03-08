/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMMediaList, DOMNode, NSString;

__attribute__((visibility("hidden")))
@interface DOMStyleSheet : DOMObject {
}
@property(assign) BOOL disabled;	// G=0x3377d51d; S=0x3377d54d; 
@property(readonly, copy) NSString *href;	// G=0x3377d81d; 
@property(readonly, retain) DOMMediaList *media;	// G=0x3377d699; 
@property(readonly, retain) DOMNode *ownerNode;	// G=0x3377d9a9; 
@property(readonly, retain) DOMStyleSheet *parentStyleSheet;	// G=0x3377d8e5; 
@property(readonly, copy) NSString *title;	// G=0x3377d755; 
@property(readonly, copy) NSString *type;	// G=0x3377da65; 
- (void)dealloc;	// 0x3377d619
// declared property getter: - (BOOL)disabled;	// 0x3377d51d
- (void)finalize;	// 0x3377dbb5
// declared property getter: - (id)href;	// 0x3377d81d
// declared property getter: - (id)media;	// 0x3377d699
// declared property getter: - (id)ownerNode;	// 0x3377d9a9
// declared property getter: - (id)parentStyleSheet;	// 0x3377d8e5
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3377d54d
// declared property getter: - (id)title;	// 0x3377d755
// declared property getter: - (id)type;	// 0x3377da65
@end

