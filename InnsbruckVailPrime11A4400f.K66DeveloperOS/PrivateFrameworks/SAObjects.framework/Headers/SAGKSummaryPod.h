/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAGKPodView.h"

@class SAUIImageResource, NSString;

@interface SAGKSummaryPod : SAGKPodView {
}
@property(copy, nonatomic) NSString *caption;	// G=0x327037a5; S=0x327037c1; 
@property(retain, nonatomic) SAUIImageResource *imageResource;	// G=0x32703811; S=0x32703855; 
@property(copy, nonatomic) NSString *text;	// G=0x32703891; S=0x327038ad; 
+ (id)summaryPod;	// 0x32703715
+ (id)summaryPodWithDictionary:(id)dictionary context:(id)context;	// 0x32703759
// declared property getter: - (id)caption;	// 0x327037a5
- (id)encodedClassName;	// 0x32703709
- (id)groupIdentifier;	// 0x327036f9
// declared property getter: - (id)imageResource;	// 0x32703811
// declared property setter: - (void)setCaption:(id)caption;	// 0x327037c1
// declared property setter: - (void)setImageResource:(id)resource;	// 0x32703855
// declared property setter: - (void)setText:(id)text;	// 0x327038ad
// declared property getter: - (id)text;	// 0x32703891
@end

