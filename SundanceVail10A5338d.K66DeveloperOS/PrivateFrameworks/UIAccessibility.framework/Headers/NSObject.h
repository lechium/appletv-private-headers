/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import "UIAccessibility-Structs.h"
#import <NSObject.h> // Unknown library


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (AccessibilityCategory)
+ (id)accessibilityBundles;	// 0x371bb5dd
+ (void)accessibilityInitializeBundle;	// 0x371bb5d9
@end

@interface NSObject (AXPrivCategory)
+ (id)_accessibilityTextChecker;	// 0x371bc341
- (BOOL)__accessibilityReadAllOnFocus;	// 0x371bc251
- (void)__accessibilityUnregister:(id)unregister;	// 0x371c29f9
- (CGPoint)__accessibilityVisibleScrollArea:(BOOL)area;	// 0x371bc15d
- (void)_accessibilityAddMispellingsToAttributedString:(id)attributedString;	// 0x371bc445
- (void)_accessibilityAddTrait:(unsigned long long)trait;	// 0x371c18b1
- (id)_accessibilityAllCustomRotorItemsAtIndex:(int)index;	// 0x371bcbb1
- (id)_accessibilityAllCustomRotorTitles;	// 0x371bcb8d
- (float)_accessibilityAllowedGeometryOverlap;	// 0x371bdc0d
- (BOOL)_accessibilityAlwaysOrderedFirst;	// 0x371bdb5d
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)traits;	// 0x371bb649
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;	// 0x371c2685
- (id)_accessibilityAncestorIsKindOf:(Class)of;	// 0x371c2625
- (BOOL)_accessibilityAnimationsInProgress;	// 0x371bbd95
- (void)_accessibilityAnnouncementComplete:(id)complete;	// 0x371be849
- (id)_accessibilityAppSwitcherApps;	// 0x371bb8f9
- (id)_accessibilityApplication;	// 0x371bf6bd
- (id)_accessibilityAttributedValueForRange:(NSRange *)range;	// 0x371bc529
- (id)_accessibilityAutomaticIdentifier;	// 0x371bb6f9
- (BOOL)_accessibilityBackingElementIsValid;	// 0x371bb71d
- (id)_accessibilityBaseHitTest:(CGPoint)test withEvent:(id)event;	// 0x371c1cad
- (int)_accessibilityBestCharacterModeForHandwriting;	// 0x371bbba5
- (BOOL)_accessibilityBookShowsDualPages;	// 0x371bb6fd
- (CGRect)_accessibilityBoundsForRange:(NSRange)range;	// 0x371bb7b1
- (id)_accessibilityBundleIdentifier;	// 0x371bb5ed
- (BOOL)_accessibilityCameraIrisOpen;	// 0x371bbd71
- (BOOL)_accessibilityCanDeleteCharacterWithHandwriting;	// 0x371bba89
- (BOOL)_accessibilityCanDeleteTableViewCell;	// 0x371bb909
- (BOOL)_accessibilityCanDismissPopoverController:(id)controller;	// 0x371bb911
- (BOOL)_accessibilityCanHandleDirectHandwritingInput;	// 0x371bbb9d
- (void)_accessibilityChangeToKeyplane:(id)keyplane;	// 0x371bb815
- (CGRect)_accessibilityClassicModeFrame:(CGRect)frame;	// 0x371bec71
- (CGRect)_accessibilityCompareFrameForScrollParent:(id)scrollParent frame:(CGRect)frame;	// 0x371bdc31
- (BOOL)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;	// 0x371bb8fd
- (id)_accessibilityContainerForAccumulatingCustomRotorItems;	// 0x371bc985
- (id)_accessibilityContainerInDirection:(BOOL)direction originalElement:(id)element;	// 0x371bf971
- (id)_accessibilityContainingParentForOrdering;	// 0x371bdba5
- (unsigned)_accessibilityContextId;	// 0x371bb915
- (CGPoint)_accessibilityConvertPointToViewSpace:(CGPoint)viewSpace;	// 0x371bf2a9
- (void)_accessibilityCut;	// 0x371bd2c5
- (id)_accessibilityDOMAttributes;	// 0x371bb641
- (id)_accessibilityDataDetectorScheme:(CGPoint)scheme;	// 0x371bb6a9
- (unsigned)_accessibilityDatePickerComponentType;	// 0x371bb6f5
- (id)_accessibilityDateTimePickerValues;	// 0x371bb6c9
- (void)_accessibilityDecreaseSelection:(id)selection;	// 0x371bb711
- (void)_accessibilityDelete;	// 0x371bd25d
- (void)_accessibilityDeleteCharacterAtCursor;	// 0x371bbacd
- (id)_accessibilityDescendantOfType:(Class)type;	// 0x371bf3e5
- (BOOL)_accessibilityDidDeleteTableViewCell;	// 0x371bb90d
- (BOOL)_accessibilityElementShouldBeInvalid;	// 0x371c3579
- (id)_accessibilityElementsForSearchParameter:(id)searchParameter;	// 0x371bb64d
- (void)_accessibilityEnumerateAllCustomRotorTitlesWithAccumulator:(id *)accumulator usingBlock:(id)block;	// 0x371bc995
- (id)_accessibilityFindDescendant:(id)descendant;	// 0x371befc1
- (void)_accessibilityFindSearchResult:(BOOL)result withString:(id)string;	// 0x371bb6b5
- (id)_accessibilityFirstVisibleItem;	// 0x371c2fe1
- (id)_accessibilityFuzzyHitTestElements;	// 0x371c1ca9
- (CGRect)_accessibilityGesturePracticeRegion;	// 0x371bb6cd
- (void)_accessibilityHandleATFocused:(BOOL)focused;	// 0x371bfa01
- (BOOL)_accessibilityHandlePublicScroll:(int)scroll;	// 0x371c38a1
- (BOOL)_accessibilityHasDescendantOfType:(Class)type;	// 0x371bf469
- (BOOL)_accessibilityHasOrderedChildren;	// 0x371bdb61
- (BOOL)_accessibilityHasTextOperations;	// 0x371bd365
- (id)_accessibilityHeaderElement;	// 0x371bb8cd
- (id)_accessibilityHitTest:(CGPoint)test withEvent:(id)event;	// 0x371c243d
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;	// 0x371bc65d
- (id)_accessibilityHitTestSupplementaryViews:(id)views point:(CGPoint)point withEvent:(id)event;	// 0x371c1969
- (void)_accessibilityIgnoreNextNotification:(unsigned)notification;	// 0x371bec69
- (void)_accessibilityIncreaseSelection:(id)selection;	// 0x371bb729
- (int)_accessibilityIndexForPickerString:(id)pickerString;	// 0x371bb715
- (id)_accessibilityInputIdentifierForKeyboard;	// 0x371bbe55
- (void)_accessibilityInsertText:(id)text atPosition:(int)position;	// 0x371bbb11
- (BOOL)_accessibilityIsAwayAlertElement;	// 0x371bc249
- (BOOL)_accessibilityIsAwayAlertElementNew;	// 0x371bc24d
- (BOOL)_accessibilityIsDescendantOfElement:(id)element;	// 0x371bf5c1
- (BOOL)_accessibilityIsFirstElementForFocus;	// 0x371c2f0d
- (BOOL)_accessibilityIsFirstSibling;	// 0x371bb895
- (BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)trait;	// 0x371bb89d
- (BOOL)_accessibilityIsFrameOutOfBounds;	// 0x371be9dd
- (BOOL)_accessibilityIsInAppSwitcher;	// 0x371bb8f1
- (BOOL)_accessibilityIsInTableCell;	// 0x371bb6b1
- (BOOL)_accessibilityIsLastSibling;	// 0x371bb899
- (BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)trait;	// 0x371bb8a1
- (BOOL)_accessibilityIsMainWindow;	// 0x371c2f11
- (BOOL)_accessibilityIsNotFirstElement;	// 0x371c2e6d
- (BOOL)_accessibilityIsScrollAncestor;	// 0x371c30b1
- (BOOL)_accessibilityIsScrollable;	// 0x371c30b5
- (BOOL)_accessibilityIsTableCell;	// 0x371bb6ad
- (BOOL)_accessibilityIsTitleElement;	// 0x371bb8a5
- (BOOL)_accessibilityIsTouchContainer;	// 0x371c18ed
- (BOOL)_accessibilityIsUserInteractionEnabled;	// 0x371bb72d
- (BOOL)_accessibilityIsVisible;	// 0x371bc661
- (void)_accessibilityJumpToTableIndex:(id)tableIndex;	// 0x371bb6b9
- (id)_accessibilityKeyboardKeyForString:(id)string;	// 0x371bb8c1
- (BOOL)_accessibilityLastHitTestNearBorder;	// 0x371bb5f1
- (id)_accessibilityLaunchableApps;	// 0x371bb8f5
- (id)_accessibilityLineEndMarker:(id)marker;	// 0x371bb7dd
- (int)_accessibilityLineEndPosition;	// 0x371bb791
- (id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)point;	// 0x371bb7a1
- (NSRange)_accessibilityLineRangeForPosition:(unsigned)position;	// 0x371bb84d
- (id)_accessibilityLineStartMarker:(id)marker;	// 0x371bb7d5
- (int)_accessibilityLineStartPosition;	// 0x371bb799
- (void)_accessibilityLoadAccessibilityInformation;	// 0x371bb769
- (id)_accessibilityMapDetailedInfoAtPoint:(CGPoint)point;	// 0x371bb5f9
- (int)_accessibilityMapFeatureType;	// 0x371bb635
- (id)_accessibilityMarkerForPoint:(CGPoint)point;	// 0x371bb7d9
- (id)_accessibilityMarkerLineEndsForMarkers:(id)markers;	// 0x371bc069
- (id)_accessibilityMarkersForPoints:(id)points;	// 0x371bbe99
- (id)_accessibilityMarkersForRange:(NSRange)range;	// 0x371bbfb1
- (CGPoint)_accessibilityMaxScrubberPosition;	// 0x371bb879
- (float)_accessibilityMaxValue;	// 0x371bb85d
- (CGPoint)_accessibilityMinScrubberPosition;	// 0x371bb861
- (float)_accessibilityMinValue;	// 0x371bb859
- (void)_accessibilityMoveSelectionToMarker:(id)marker;	// 0x371bb63d
- (id)_accessibilityNextElementsWithCount:(unsigned long)count originalElement:(id)element;	// 0x371bf9a1
- (id)_accessibilityNextMarker:(id)marker;	// 0x371bb7e5
- (id)_accessibilityObjectForTextMarker:(id)textMarker;	// 0x371bb849
- (BOOL)_accessibilityObscuresScreen;	// 0x371bbddd
- (BOOL)_accessibilityOnlyComparesByXAxis;	// 0x371bdc2d
- (id)_accessibilityPageContent;	// 0x371bb891
- (int)_accessibilityPageControlCount;	// 0x371bb8a9
- (int)_accessibilityPageControlIndex;	// 0x371bb8b1
- (id)_accessibilityPageTextMarkerRange;	// 0x371bb7f5
- (id)_accessibilityParentView;	// 0x371bf7ad
- (void)_accessibilityPaste;	// 0x371bd1c1
- (BOOL)_accessibilityPerformEscape;	// 0x371bcf75
- (int)_accessibilityPickerType;	// 0x371bb6f1
- (void)_accessibilityPlayKeyboardClickSound;	// 0x371bbc09
- (void)_accessibilityPlaySystemSound:(int)sound;	// 0x371bbc01
- (void)_accessibilityPostAnnouncement:(id)announcement;	// 0x371c3d7d
- (void)_accessibilityPostNotificationHelper:(id)helper;	// 0x371c3d15
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count originalElement:(id)element;	// 0x371bf9d1
- (id)_accessibilityPreviousMarker:(id)marker;	// 0x371bb7e9
- (NSRange)_accessibilityRangeForLineNumberAndColumn:(id)lineNumberAndColumn;	// 0x371bb7a5
- (NSRange)_accessibilityRangeForTextMarker:(id)textMarker;	// 0x371bb7f9
- (BOOL)_accessibilityReadAllContinuesWithScroll;	// 0x371bb8c5
- (BOOL)_accessibilityReadAllOnFocus;	// 0x371bc245
- (void)_accessibilityRemoveTrait:(unsigned long long)trait;	// 0x371c1875
- (void)_accessibilityReplace;	// 0x371bd291
- (void)_accessibilityResetContainerElements;	// 0x371bd7b5
- (id)_accessibilityResponderElement;	// 0x371bb789
- (id)_accessibilityRetrieveImagePathLabel:(id)label;	// 0x371bbc35
- (BOOL)_accessibilityRoadContainsTrackingPoint:(CGPoint)point;	// 0x371bb5f5
- (id)_accessibilityScrollAncestor;	// 0x371c3565
- (id)_accessibilityScrollAncestorForSelector:(SEL)selector;	// 0x371c32c5
- (void)_accessibilityScrollDownPage;	// 0x371c3c05
- (void)_accessibilityScrollLeftPage;	// 0x371c3a79
- (BOOL)_accessibilityScrollNextPage;	// 0x371c3aed
- (id)_accessibilityScrollParent;	// 0x371be929
- (BOOL)_accessibilityScrollPreviousPage;	// 0x371c3b05
- (void)_accessibilityScrollRightPage;	// 0x371c3b1d
- (id)_accessibilityScrollStatus;	// 0x371c2715
- (void)_accessibilityScrollToFrame:(CGRect)frame forView:(id)view;	// 0x371bb771
- (void)_accessibilityScrollToPoint:(CGPoint)point;	// 0x371c3779
- (BOOL)_accessibilityScrollToVisible;	// 0x371c357d
- (void)_accessibilityScrollUpPage;	// 0x371c3b91
- (BOOL)_accessibilityScrollingEnabled;	// 0x371c3561
- (void)_accessibilitySelect;	// 0x371bd229
- (void)_accessibilitySelectAll;	// 0x371bd1f5
- (NSRange)_accessibilitySelectedNSRangeForObject;	// 0x371bb809
- (NSRange)_accessibilitySelectedTextRange;	// 0x371bb779
- (BOOL)_accessibilitySelfFoundByHitTesting;	// 0x371c244d
- (BOOL)_accessibilityServesAsContainingParentForOrdering;	// 0x371bdba1
- (BOOL)_accessibilityServesAsFirstElement;	// 0x371c2dcd
- (BOOL)_accessibilityServesAsFirstResponder;	// 0x371bb785
- (void)_accessibilitySetAnimationsInProgress:(BOOL)progress;	// 0x371bbdad
- (void)_accessibilitySetCameraIrisOpen:(BOOL)open;	// 0x371bbd35
- (void)_accessibilitySetCurrentGesture:(id)gesture;	// 0x371bd361
- (void)_accessibilitySetCurrentWordInPageContext:(id)pageContext;	// 0x371bb8bd
- (void)_accessibilitySetSelectedTextRange:(NSRange)range;	// 0x371bb775
- (void)_accessibilitySetValue:(id)value;	// 0x371bc3a1
- (void)_accessibilitySetValue:(id)value forAttribute:(int)attribute;	// 0x371c0a31
- (BOOL)_accessibilityShouldAnnounceFontInfo;	// 0x371bb905
- (BOOL)_accessibilityShouldAvoidAnnouncing;	// 0x371bb651
- (BOOL)_accessibilityShouldEchoHandwritingCharacter;	// 0x371bbba1
- (BOOL)_accessibilityShouldReleaseAfterUnregistration;	// 0x371c29f5
- (BOOL)_accessibilityShouldUseViewHierarchyForFindingScrollParent;	// 0x371bc159
- (id)_accessibilityStatusBar;	// 0x371bdb29
- (id)_accessibilityString:(id)string withSpeechHint:(id)speechHint;	// 0x371bf819
- (id)_accessibilitySupplementaryFooterViews;	// 0x371c1871
- (id)_accessibilitySupplementaryHeaderViews;	// 0x371c186d
- (id)_accessibilitySupportedLanguages;	// 0x371bb601
- (BOOL)_accessibilitySupportsActivateAction;	// 0x371c2899
- (BOOL)_accessibilitySupportsMultipleCustomRotorTitles;	// 0x371bb901
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)from;	// 0x371bb705
- (id)_accessibilityTableViewCellWithRowIndex:(int)rowIndex andColumn:(int)column;	// 0x371bb661
- (id)_accessibilityTextChecker;	// 0x371bc429
- (CGRect)_accessibilityTextCursorFrame;	// 0x371bb98d
- (id)_accessibilityTextMarkerForPosition:(int)position;	// 0x371bb639
- (id)_accessibilityTextMarkerRange;	// 0x371bb7f1
- (id)_accessibilityTextMarkerRangeForSelection;	// 0x371bb805
- (BOOL)_accessibilityTextOperationAction:(id)action;	// 0x371bd3c1
- (id)_accessibilityTextOperations;	// 0x371bd2fd
- (id)_accessibilityTextViewTextOperationResponder;	// 0x371bd35d
- (id)_accessibilityTouchContainer;	// 0x371c1925
- (BOOL)_accessibilityTriggerDictationFromPath:(id)path;	// 0x371bb6bd
- (id)_accessibilityUnignoredDescendant;	// 0x371bf4f1
- (void)_accessibilityUnregister;	// 0x371c2a5d
- (id)_accessibilityUpcomingRoadForPoint:(CGPoint)point forAngle:(float)angle;	// 0x371bb5fd
- (id)_accessibilityUserTestingVisibleCells;	// 0x371bb701
- (id)_accessibilityUserTestingVisibleSections;	// 0x371bb709
- (BOOL)_accessibilityUsesScrollParentForOrdering;	// 0x371bdc09
- (BOOL)_accessibilityUsesSpecialKeyboardDismiss;	// 0x371bf765
- (id)_accessibilityValueForRange:(NSRange *)range;	// 0x371bc295
- (id)_accessibilityVisibleItemInList;	// 0x371c3089
- (CGPoint)_accessibilityVisibleScrollArea:(BOOL)area;	// 0x371bb665
- (BOOL)_accessibilityWebSearchResultsActive;	// 0x371bb6c5
- (BOOL)_accessibilityWindowVisible;	// 0x371c2fb1
- (id)_accessibiltyAvailableKeyplanes;	// 0x371bb7e1
- (BOOL)_allowCustomActionHintSpeakOverride;	// 0x371bb7ed
- (id)_axDebugTraits;	// 0x371c286d
- (id)_axSuperviews;	// 0x371c25a1
- (void)_setAccessibilityIsMainWindow:(BOOL)window;	// 0x371c2e9d
- (void)_setAccessibilityIsNotFirstElement:(BOOL)element;	// 0x371c2dfd
- (void)_setAccessibilityObscuresScreen:(BOOL)screen;	// 0x371bbdcd
- (void)_setAccessibilityServesAsFirstElement:(BOOL)element;	// 0x371c2d5d
- (void)_setAccessibilityWindowVisible:(BOOL)visible;	// 0x371c2f41
- (void)accessibilityActivate;	// 0x371bd5c9
- (id)accessibilityArrayOfTextForTextMarkers:(id)textMarkers;	// 0x371bb845
- (id)accessibilityAttributeValue:(int)value;	// 0x371bfa69
- (id)accessibilityAttributeValue:(int)value forParameter:(id)parameter;	// 0x371c0b91
- (CGRect)accessibilityBoundsForTextMarkers:(id)textMarkers;	// 0x371bb81d
- (NSRange)accessibilityColumnRange;	// 0x371bb8e5
- (int)accessibilityCompareGeometry:(id)geometry;	// 0x371bdcbd
- (id)accessibilityContainerElements;	// 0x371bd86d
- (id)accessibilityContentForLineNumber:(int)lineNumber;	// 0x371bb681
- (id)accessibilityCustomActions;	// 0x371bb659
- (id)accessibilityCustomRotorItemsAtIndex:(int)index;	// 0x371bb65d
- (id)accessibilityCustomRotorTitles;	// 0x371bb655
- (void)accessibilityDecrement;	// 0x371bb765
- (BOOL)accessibilityEditOperationAction:(id)action;	// 0x371bd3bd
- (id)accessibilityElementAtIndex:(int)index;	// 0x371bd8a5
- (int)accessibilityElementCount;	// 0x371bd871
- (void)accessibilityElementDidBecomeFocused;	// 0x371c28b9
- (void)accessibilityElementDidLoseFocus;	// 0x371c28bd
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x371bb8d5
- (BOOL)accessibilityElementIsFocused;	// 0x371c28a1
- (void)accessibilityEnumerateContainerElementsUsingBlock:(id)block;	// 0x371bdb15
- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x371bd9f9
- (id)accessibilityFlowToElements;	// 0x371bb675
- (CGRect)accessibilityFrameForLineNumber:(int)lineNumber;	// 0x371bb685
- (id)accessibilityHeaderElements;	// 0x371bb8c9
- (id)accessibilityHitTest:(CGPoint)test;	// 0x371c1965
- (id)accessibilityIdentification;	// 0x371c2c01
- (void)accessibilityIncrement;	// 0x371bb761
- (id)accessibilityInvalidStatus;	// 0x371bb725
- (BOOL)accessibilityIsComboBox;	// 0x371bb6c1
- (id)accessibilityLabelForRange:(NSRange *)range;	// 0x371bbdf5
- (int)accessibilityLineNumberForPoint:(CGPoint)point;	// 0x371bb679
- (id)accessibilityLinkedElement;	// 0x371bb70d
- (id)accessibilityMathEquation;	// 0x371bb5e9
- (id)accessibilityMathMLSource;	// 0x371bb5e5
- (id)accessibilityMenuActions;	// 0x371bd2f9
- (id)accessibilityPageContent;	// 0x371bb671
- (id)accessibilityPaths;	// 0x371bb721
- (BOOL)accessibilityPerformCustomAction:(int)action;	// 0x371bb819
- (id)accessibilityPlaceholderValue;	// 0x371bb8b9
- (void)accessibilityPostNotification:(unsigned)notification withObject:(id)object afterDelay:(double)delay;	// 0x371c3c79
- (BOOL)accessibilityRequired;	// 0x371bb76d
- (NSRange)accessibilityRowRange;	// 0x371bb8d9
- (BOOL)accessibilityScrollDownPageSupported;	// 0x371c3a71
- (BOOL)accessibilityScrollLeftPageSupported;	// 0x371c3a69
- (BOOL)accessibilityScrollRightPageSupported;	// 0x371c3a6d
- (BOOL)accessibilityScrollUpPageSupported;	// 0x371c3a75
- (id)accessibilitySecondaryLabel;	// 0x371bb5e1
- (void)accessibilitySetIdentification:(id)identification;	// 0x371c26c5
- (BOOL)accessibilityShouldEnumerateContainerElementsArrayDirectly;	// 0x371bd92d
- (id)accessibilitySpeechHint;	// 0x371bb645
- (BOOL)accessibilityStartStopToggle;	// 0x371bb78d
- (id)accessibilityStringForTextMarkers:(id)textMarkers;	// 0x371bb841
- (id)accessibilityTitleElement;	// 0x371bb8d1
- (id)accessibilityURL;	// 0x371c289d
- (id)accessibilityUserDefinedIsMainWindow;	// 0x371c2bad
- (id)accessibilityUserDefinedNotFirstElement;	// 0x371c2be5
- (id)accessibilityUserDefinedServesAsFirstElement;	// 0x371c2bc9
- (id)accessibilityUserDefinedSize;	// 0x371c2c1d
- (id)accessibilityUserDefinedWindowVisible;	// 0x371c2b91
- (id)accessibilityViewWithIdentifier:(id)identifier;	// 0x371bf529
- (void)accessibilityZoomInAtPoint:(CGPoint)point;	// 0x371bcf15
- (void)accessibilityZoomOutAtPoint:(CGPoint)point;	// 0x371bcf45
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x371bd8f5
- (id)isAccessibilityUserDefinedScrollAncestor;	// 0x371c2b75
- (id)isAccessibilityUserDefinedWindow;	// 0x371c2b59
- (void)setAccessibilitySize:(CGSize)size;	// 0x371c2c39
- (void)setIsAccessibilityScrollAncestor:(BOOL)ancestor;	// 0x371c2ced
- (void)setIsAccessibilityWindow:(BOOL)window;	// 0x371c2c7d
@end

@interface NSObject (AccessibilityStorage)
- (void)_accessibilityActionBlock:(id *)block andValue:(id *)value forKey:(unsigned long)key;	// 0x371c43e5
- (BOOL)_accessibilityBoolValueForKey:(id)key;	// 0x371c3ef5
- (BOOL)_accessibilityHandleMagicTap;	// 0x371c44e1
- (BOOL)_accessibilityHasActionBlockForKey:(unsigned long)key;	// 0x371c437d
- (int)_accessibilityIntegerValueForKey:(id)key;	// 0x371c3f1d
- (BOOL)_accessibilityInternalHandleStartStopToggle;	// 0x371c432d
- (void)_accessibilityRemoveActionBlockForKey:(unsigned long)key;	// 0x371c44c1
- (void)_accessibilityRemoveAllActionBlocks;	// 0x371c4481
- (void)_accessibilityRemoveValueForKey:(id)key;	// 0x371c41b9
- (void)_accessibilitySetActionBlock:(id)block withValue:(id)value forKey:(unsigned long)key;	// 0x371c41dd
- (void)_accessibilitySetAssignedValue:(id)value forKey:(id)key;	// 0x371c4039
- (void)_accessibilitySetBoolValue:(BOOL)value forKey:(id)key;	// 0x371c4081
- (void)_accessibilitySetIntegerValue:(int)value forKey:(id)key;	// 0x371c40e9
- (void)_accessibilitySetRetainedValue:(id)value forKey:(id)key;	// 0x371c405d
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned)value forKey:(id)key;	// 0x371c4151
- (void)_accessibilitySetValue:(id)value forKey:(id)key storageMode:(int)mode;	// 0x371c3f6d
- (unsigned)_accessibilityUnsignedIntegerValueForKey:(id)key;	// 0x371c3f45
- (id)_accessibilityValueForKey:(id)key;	// 0x371c3ec9
- (BOOL)accessibilityPerformAction:(int)action withValue:(id)value;	// 0x371c45d1
@end

@interface NSObject (UIAccessibilityAutomation)
- (id)_accessibilityAbsoluteValue;	// 0x371c7d59
- (id)_accessibilityAncestry;	// 0x371c7e19
- (id)_accessibilityKeyboardKeyEnteredString;	// 0x371c7b85
- (void)_accessibilitySetUserTestingIsCancelButton:(BOOL)button;	// 0x371c7b79
- (id)_accessibilityUserTestingChildren;	// 0x371c844d
- (int)_accessibilityUserTestingChildrenCount;	// 0x371c8119
- (id)_accessibilityUserTestingChildrenWithRange:(NSRange)range;	// 0x371c81c5
- (id)_accessibilityUserTestingElementAttributes;	// 0x371c7b89
- (id)_accessibilityUserTestingElementBaseType;	// 0x371c7c7d
- (id)_accessibilityUserTestingElementType;	// 0x371c7d5d
- (BOOL)_accessibilityUserTestingIsBackNavButton;	// 0x371c7b7d
- (BOOL)_accessibilityUserTestingIsCancelButton;	// 0x371c7b75
- (BOOL)_accessibilityUserTestingIsDefaultButton;	// 0x371c7b71
- (BOOL)_accessibilityUserTestingIsRightNavButton;	// 0x371c7b81
- (id)_accessibilityUserTestingParent;	// 0x371c7d79
- (id)_accessibilityUserTestingSupplementaryViews:(BOOL)views;	// 0x371c7f85
@end
