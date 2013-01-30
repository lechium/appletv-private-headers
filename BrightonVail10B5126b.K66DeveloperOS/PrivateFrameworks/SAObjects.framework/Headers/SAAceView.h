/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADeferredKeyObject.h"
#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SAAceView : AceObject <SAAceSerializable, SADeferredKeyObject> {
}
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;	// G=0x353dc8b9; S=0x353dc8d5; 
@property(copy, nonatomic) NSString *speakableText;	// G=0x353dc925; S=0x353dc941; 
@property(copy, nonatomic) NSString *viewId;	// G=0x353dc991; S=0x353dc9ad; 
+ (id)aceView;	// 0x353dc829
+ (id)aceViewWithDictionary:(id)dictionary context:(id)context;	// 0x353dc86d
- (id)deferredKeys;	// 0x353dc9fd
- (id)encodedClassName;	// 0x353dc81d
- (id)groupIdentifier;	// 0x353dc80d
// declared property getter: - (id)listenAfterSpeaking;	// 0x353dc8b9
// declared property setter: - (void)setListenAfterSpeaking:(id)speaking;	// 0x353dc8d5
// declared property setter: - (void)setSpeakableText:(id)text;	// 0x353dc941
// declared property setter: - (void)setViewId:(id)anId;	// 0x353dc9ad
// declared property getter: - (id)speakableText;	// 0x353dc925
// declared property getter: - (id)viewId;	// 0x353dc991
@end
