/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIImageView, UITouch, UIWebSelectionView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionHandle : UIView {
	UITouch *_touch;	// 96 = 0x60
	UIImageView *_dragDotView;	// 100 = 0x64
	int _position;	// 104 = 0x68
	int _textPosition;	// 108 = 0x6c
	UIWebSelectionView *_selectionView;	// 112 = 0x70
	CGSize _touchToCenterOffset;	// 116 = 0x74
	CGSize _centerToSelectionPointOffset;	// 124 = 0x7c
}
@property(assign, nonatomic) CGSize centerToSelectionPointOffset;	// G=0x2f7468f9; S=0x2f746911; @synthesize=_centerToSelectionPointOffset
@property(readonly, assign, nonatomic) BOOL hasTextPosition;	// G=0x2f74639d; 
@property(assign, nonatomic) int position;	// G=0x2f7468a1; S=0x2f7468b1; @synthesize=_position
@property(assign, nonatomic) int textPosition;	// G=0x2f74642d; S=0x2f7463b9; 
@property(retain, nonatomic) UITouch *touch;	// G=0x2f7468c1; S=0x2f7468d1; @synthesize=_touch
@property(readonly, assign, nonatomic) CGSize touchToCenterOffset;	// G=0x2f7468e1; @synthesize=_touchToCenterOffset
- (id)initWithPosition:(int)position selectionView:(id)view;	// 0x2f4891a9
- (CGPoint)applyCenterToSelectionPointOffset:(CGPoint)selectionPointOffset;	// 0x2f746471
- (CGPoint)applyOffsetInDirectionOfHandle:(float)handle toPoint:(CGPoint)point;	// 0x2f7464f5
- (CGPoint)applyTouchToCenterOffset:(CGPoint)centerOffset;	// 0x2f74643d
// declared property getter: - (CGSize)centerToSelectionPointOffset;	// 0x2f7468f9
- (void)dealloc;	// 0x2f745ef5
- (void)drawRect:(CGRect)rect;	// 0x2f745f55
- (void)dropActiveTouch;	// 0x2f746321
// declared property getter: - (BOOL)hasTextPosition;	// 0x2f74639d
- (float)offsetInDirectionOfHandleFromFirstPoint:(CGPoint)firstPoint toSecondPoint:(CGPoint)secondPoint;	// 0x2f74655d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x2f746335
// declared property getter: - (int)position;	// 0x2f7468a1
// declared property setter: - (void)setCenterToSelectionPointOffset:(CGSize)selectionPointOffset;	// 0x2f746911
// declared property setter: - (void)setPosition:(int)position;	// 0x2f7468b1
// declared property setter: - (void)setTextPosition:(int)position;	// 0x2f7463b9
// declared property setter: - (void)setTouch:(id)touch;	// 0x2f7468d1
- (void)snapToCornerOfRange:(id)range atStart:(BOOL)start;	// 0x2f7465b9
- (CGPoint)suggestedHandlePositionOnRect:(CGRect)rect;	// 0x2f7467a9
// declared property getter: - (int)textPosition;	// 0x2f74642d
// declared property getter: - (id)touch;	// 0x2f7468c1
// declared property getter: - (CGSize)touchToCenterOffset;	// 0x2f7468e1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f746019
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f7462d1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f746221
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f746185
@end
