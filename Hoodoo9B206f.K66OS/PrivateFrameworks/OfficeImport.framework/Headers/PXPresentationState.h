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
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x3453b1a5; S=0x3451ed15; @synthesize=mCancel
@property(retain) id tgtPresentation;	// G=0x34523385; S=0x3451ed3d; converted property
- (id)init;	// 0x3451ea29
// declared property getter: - (id)cancelDelegate;	// 0x3453b1a5
- (void)dealloc;	// 0x34526259
- (BOOL)isCancelled;	// 0x345204e1
- (id)modelObjectForLocation:(id)location;	// 0x34526099
- (id)oavState;	// 0x3458fc91
- (id)officeArtState;	// 0x3451f269
- (void)resetOfficeArtState;	// 0x3452564d
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x3451ed15
- (void)setModelObject:(id)object forLocation:(id)location;	// 0x34525d55
- (void)setSlideIndex:(int)index forSlideURL:(id)slideURL;	// 0x3451f0a1
// converted property setter: - (void)setTgtPresentation:(id)presentation;	// 0x3451ed3d
- (int)slideIndexForSlideURL:(id)slideURL;	// 0x345747a5
- (id)tableStyleCache;	// 0x3451f111
// converted property getter: - (id)tgtPresentation;	// 0x34523385
@end

