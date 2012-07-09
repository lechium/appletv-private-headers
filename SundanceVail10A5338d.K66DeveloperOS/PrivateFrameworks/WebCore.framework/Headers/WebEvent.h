/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface WebEvent : NSObject {
	int _type;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	CGPoint _locationInWindow;	// 16 = 0x10
	NSString *_characters;	// 24 = 0x18
	NSString *_charactersIgnoringModifiers;	// 28 = 0x1c
	unsigned _modifierFlags;	// 32 = 0x20
	BOOL _keyRepeating;	// 36 = 0x24
	BOOL _popupVariant;	// 37 = 0x25
	unsigned short _keyCode;	// 38 = 0x26
	BOOL _tabKey;	// 40 = 0x28
	int _characterSet;	// 44 = 0x2c
	float _deltaX;	// 48 = 0x30
	float _deltaY;	// 52 = 0x34
	unsigned _touchCount;	// 56 = 0x38
	NSArray *_touchLocations;	// 60 = 0x3c
	NSArray *_touchIdentifiers;	// 64 = 0x40
	NSArray *_touchPhases;	// 68 = 0x44
	BOOL _isGesture;	// 72 = 0x48
	float _gestureScale;	// 76 = 0x4c
	float _gestureRotation;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) int characterSet;	// G=0x35d9f9c1; 
@property(readonly, assign, nonatomic) NSString *characters;	// G=0x35d9f911; 
@property(readonly, assign, nonatomic) NSString *charactersIgnoringModifiers;	// G=0x35d9f949; 
@property(readonly, assign, nonatomic) float deltaX;	// G=0x35d9f9d1; 
@property(readonly, assign, nonatomic) float deltaY;	// G=0x35d9f9e1; 
@property(readonly, assign, nonatomic) float gestureRotation;	// G=0x356e70d1; 
@property(readonly, assign, nonatomic) float gestureScale;	// G=0x356e70c1; 
@property(readonly, assign, nonatomic) BOOL isGesture;	// G=0x356e70e1; 
@property(readonly, assign, nonatomic) unsigned short keyCode;	// G=0x35d9f9a1; 
@property(readonly, assign, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;	// G=0x35d9f981; 
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x356e6df1; 
@property(readonly, assign, nonatomic) unsigned modifierFlags;	// G=0x356e70f1; 
@property(readonly, assign, nonatomic, getter=isPopupVariant) BOOL popupVariant;	// G=0x35d9f991; 
@property(readonly, assign, nonatomic, getter=isTabKey) BOOL tabKey;	// G=0x35d9f9b1; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x35d9f9f1; @synthesize=_timestamp
@property(readonly, assign, nonatomic) unsigned touchCount;	// G=0x356e70b1; 
@property(readonly, assign, nonatomic) NSArray *touchIdentifiers;	// G=0x356e7199; 
@property(readonly, assign, nonatomic) NSArray *touchLocations;	// G=0x356e7101; 
@property(readonly, assign, nonatomic) NSArray *touchPhases;	// G=0x356e71a9; 
@property(readonly, assign, nonatomic) int type;	// G=0x356e6de1; @synthesize=_type
- (id)initWithKeyEventType:(int)keyEventType timeStamp:(double)stamp characters:(id)characters charactersIgnoringModifiers:(id)modifiers modifiers:(unsigned)modifiers5 isRepeating:(BOOL)repeating isPopupVariant:(BOOL)variant keyCode:(unsigned short)code isTabKey:(BOOL)key characterSet:(int)set;	// 0x35d9ee5d
- (id)initWithMouseEventType:(int)mouseEventType timeStamp:(double)stamp location:(CGPoint)location;	// 0x35d9ebe9
- (id)initWithScrollWheelEventWithTimeStamp:(double)timeStamp location:(CGPoint)location deltaX:(float)x deltaY:(float)y;	// 0x35d9ec5d
- (id)initWithTouchEventType:(int)touchEventType timeStamp:(double)stamp location:(CGPoint)location modifiers:(unsigned)modifiers touchCount:(unsigned)count touchLocations:(id)locations touchIdentifiers:(id)identifiers touchPhases:(id)phases isGesture:(BOOL)gesture gestureScale:(float)scale gestureRotation:(float)rotation;	// 0x35d9ed01
- (id).cxx_construct;	// 0x35d9fa09
- (id)_characterSetDescription;	// 0x35d9f105
- (id)_eventDescription;	// 0x35d9f5a1
- (id)_modiferFlagsDescription;	// 0x35d9f061
- (id)_touchIdentifiersDescription;	// 0x35d9f2e1
- (id)_touchLocationsDescription:(id)description;	// 0x35d9f179
- (id)_touchPhaseDescription:(int)description;	// 0x35d9f40d
- (id)_touchPhasesDescription;	// 0x35d9f461
- (id)_typeDescription;	// 0x35d9efbd
// declared property getter: - (int)characterSet;	// 0x35d9f9c1
// declared property getter: - (id)characters;	// 0x35d9f911
// declared property getter: - (id)charactersIgnoringModifiers;	// 0x35d9f949
- (void)dealloc;	// 0x356e8f4d
// declared property getter: - (float)deltaX;	// 0x35d9f9d1
// declared property getter: - (float)deltaY;	// 0x35d9f9e1
- (id)description;	// 0x35d9f881
// declared property getter: - (float)gestureRotation;	// 0x356e70d1
// declared property getter: - (float)gestureScale;	// 0x356e70c1
// declared property getter: - (BOOL)isGesture;	// 0x356e70e1
// declared property getter: - (BOOL)isKeyRepeating;	// 0x35d9f981
// declared property getter: - (BOOL)isPopupVariant;	// 0x35d9f991
// declared property getter: - (BOOL)isTabKey;	// 0x35d9f9b1
// declared property getter: - (unsigned short)keyCode;	// 0x35d9f9a1
// declared property getter: - (CGPoint)locationInWindow;	// 0x356e6df1
// declared property getter: - (unsigned)modifierFlags;	// 0x356e70f1
// declared property getter: - (double)timestamp;	// 0x35d9f9f1
// declared property getter: - (unsigned)touchCount;	// 0x356e70b1
// declared property getter: - (id)touchIdentifiers;	// 0x356e7199
// declared property getter: - (id)touchLocations;	// 0x356e7101
// declared property getter: - (id)touchPhases;	// 0x356e71a9
// declared property getter: - (int)type;	// 0x356e6de1
@end
