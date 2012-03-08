/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDPresentation, OAVState, OAXTableStyleCache, NSMutableDictionary, OAXDrawingState;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PXPresentationState : NSObject {
@private
	NSMutableDictionary *mModelObjects;	// 4 = 0x4
	OAXDrawingState *mOfficeArtState;	// 8 = 0x8
	OAVState *mOAVState;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mSlideURLToIndexMap;	// 20 = 0x14
	PDPresentation *mTgtPresentation;	// 24 = 0x18
	id<OCCancelDelegate> mCancel;	// 28 = 0x1c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x329e41a5; S=0x329c7d15; @synthesize=mCancel
@property(retain) id tgtPresentation;	// G=0x329cc385; S=0x329c7d3d; converted property
- (id)init;	// 0x329c7a29
// declared property getter: - (id)cancelDelegate;	// 0x329e41a5
- (void)dealloc;	// 0x329cf259
- (BOOL)isCancelled;	// 0x329c94e1
- (id)modelObjectForLocation:(id)location;	// 0x329cf099
- (id)oavState;	// 0x32a38c91
- (id)officeArtState;	// 0x329c8269
- (void)resetOfficeArtState;	// 0x329ce64d
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x329c7d15
- (void)setModelObject:(id)object forLocation:(id)location;	// 0x329ced55
- (void)setSlideIndex:(int)index forSlideURL:(id)slideURL;	// 0x329c80a1
// converted property setter: - (void)setTgtPresentation:(id)presentation;	// 0x329c7d3d
- (int)slideIndexForSlideURL:(id)slideURL;	// 0x32a1d7a5
- (id)tableStyleCache;	// 0x329c8111
// converted property getter: - (id)tgtPresentation;	// 0x329cc385
@end

