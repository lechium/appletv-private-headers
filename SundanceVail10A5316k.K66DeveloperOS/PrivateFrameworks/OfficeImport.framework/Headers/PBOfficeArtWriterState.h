/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABWriterState.h"

@class PBPresentationWriterState, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBOfficeArtWriterState : OABWriterState {
@private
	PBPresentationWriterState *mPresentationState;	// 36 = 0x24
	NSMutableDictionary *mTargetPlaceholders;	// 40 = 0x28
}
- (id)initWithClient:(id)client presentationState:(id)state;	// 0x31278645
- (void)dealloc;	// 0x312786d1
- (id)presentationState;	// 0x312786c1
- (id)targetPlaceholders;	// 0x3127871d
@end

