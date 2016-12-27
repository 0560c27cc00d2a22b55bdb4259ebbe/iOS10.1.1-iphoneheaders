/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/LPTapToLoadViewDelegate.h>
#import <libobjc.A.dylib/LPThemeClient.h>

@protocol LPLinkViewDelegate;
@class LPMetadataProvider, LPTheme, NSMutableArray, UIView, LPCaptionBarPresentationProperties, NSString, LPImage, LPVideo, UIColor, LPiTunesPlaybackInformation, LPCaptionBarView, LPComponentView, LPTextView, LPAnimationMaskView, LPLinkMetadata, NSURL;

@interface LPLinkView : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate, LPTapToLoadViewDelegate, LPThemeClient> {

	LPMetadataProvider* _pendingMetadataProvider;
	BOOL _mayReceiveAdditionalMetadata;
	BOOL _usesComputedPresentationProperties;
	LPTheme* _theme;
	NSMutableArray* _tapGestureRecognizers;
	NSMutableArray* _highlightGestureRecognizers;
	UIView* _highlightView;
	BOOL _isPreliminary;
	long long _style;
	LPCaptionBarPresentationProperties* _captionBar;
	LPCaptionBarPresentationProperties* _mediaTopCaptionBar;
	LPCaptionBarPresentationProperties* _mediaBottomCaptionBar;
	NSString* _quotedText;
	LPImage* _image;
	LPVideo* _video;
	UIColor* _backgroundColor;
	UIColor* _overrideBackgroundColor;
	LPiTunesPlaybackInformation* _iTunesPlaybackInformation;
	UIView* _contentView;
	UIView* _animationView;
	LPCaptionBarView* _captionBarView;
	LPComponentView* _mediaView;
	UIView* _mediaViewBackground;
	LPCaptionBarView* _mediaTopCaptionBarView;
	LPCaptionBarView* _mediaBottomCaptionBarView;
	LPTextView* _quoteView;
	LPAnimationMaskView* _animationMaskView;
	BOOL _hasEverBuilt;
	BOOL _needsRebuild;
	BOOL _usesDeferredLayout;
	BOOL _shouldAnimateDuringNextBuild;
	BOOL _hasValidPresentationProperties;
	BOOL _disableAnimations;
	BOOL _disableTapGesture;
	BOOL _disablePlayback;
	BOOL _allowsTapToLoad;
	BOOL _forceFlexibleWidth;
	BOOL _applyCornerRadius;
	long long _animationOrigin;
	id<LPLinkViewDelegate> _delegate;
	LPLinkMetadata* _metadata;
	NSURL* _URL;
	UIEdgeInsets _contentInset;

}

@property (assign,setter=_setDisableAnimations:,nonatomic) BOOL _disableAnimations;                //@synthesize disableAnimations=_disableAnimations - In the implementation block
@property (assign,setter=_setAnimationOrigin:,nonatomic) long long _animationOrigin;               //@synthesize animationOrigin=_animationOrigin - In the implementation block
@property (assign,setter=_setDisableTapGesture:,nonatomic) BOOL _disableTapGesture;                //@synthesize disableTapGesture=_disableTapGesture - In the implementation block
@property (assign,setter=_setDisablePlayback:,nonatomic) BOOL _disablePlayback;                    //@synthesize disablePlayback=_disablePlayback - In the implementation block
@property (assign,setter=_setAllowsTapToLoad:,nonatomic) BOOL _allowsTapToLoad;                    //@synthesize allowsTapToLoad=_allowsTapToLoad - In the implementation block
@property (assign,setter=_setUsesDeferredLayout:,nonatomic) BOOL _usesDeferredLayout;              //@synthesize usesDeferredLayout=_usesDeferredLayout - In the implementation block
@property (assign,setter=_setForceFlexibleWidth:,nonatomic) BOOL _forceFlexibleWidth;              //@synthesize forceFlexibleWidth=_forceFlexibleWidth - In the implementation block
@property (assign,setter=_setApplyCornerRadius:,nonatomic) BOOL _applyCornerRadius;                //@synthesize applyCornerRadius=_applyCornerRadius - In the implementation block
@property (nonatomic,copy,readonly) NSString * _storeIdentifier; 
@property (assign,nonatomic,__weak) id<LPLinkViewDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) LPLinkMetadata * metadata;                                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                            //@synthesize contentInset=_contentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)_storeIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<LPLinkViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<LPLinkViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(UIEdgeInsets)contentInset;
-(NSURL *)URL;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)_didScroll;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(void)_invalidateLayout;
-(id)initWithURL:(id)arg1 ;
-(void)_highlightLongPressRecognized:(id)arg1 ;
-(void)_setMaskImage:(id)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(void)_setupView;
-(void)_tapRecognized:(id)arg1 ;
-(void)setSuppressMask:(BOOL)arg1 ;
-(BOOL)_applyCornerRadius;
-(void)_fetchMetadata;
-(void)_setPresentationProperties:(id)arg1 ;
-(void)_setMetadata:(id)arg1 isFinal:(BOOL)arg2 ;
-(id)_createCaptionBar;
-(void)_setAllowsTapToLoad:(BOOL)arg1 ;
-(BOOL)_allowsTapToLoad;
-(BOOL)_disablePlayback;
-(long long)_animationOrigin;
-(void)themeParametersDidChange;
-(id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 ;
-(void)_setupInteraction;
-(void)_invalidatePresentationProperties;
-(void)_layoutLinkView;
-(void)_computePresentationPropertiesFromMetadataIfNeeded;
-(CGSize)_layoutLinkViewForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(void)animateOutAndRemoveViews;
-(id)_createMediaView;
-(id)_createMediaTopCaptionBarView;
-(id)_createMediaBottomCaptionBarView;
-(id)_createQuotedTextView;
-(void)animateInViews;
-(void)animateBackgroundColor;
-(void)_installTapGestureRecognizers;
-(void)_rebuildSubviewsWithAnimation:(BOOL)arg1 ;
-(void)animateFromOldFrame:(CGRect)arg1 oldMediaBackgroundFrame:(CGRect)arg2 oldCaptionBarView:(id)arg3 ;
-(void)_addHighlightRecognizersToView:(id)arg1 ;
-(id)_createTapToLoadView;
-(void)_addTapRecognizerToView:(id)arg1 ;
-(void)tapToLoadViewWasTapped:(id)arg1 ;
-(id)initWithMetadataLoadedFromURL:(id)arg1 ;
-(id)initWithPresentationProperties:(id)arg1 ;
-(void)_setApplyCornerRadius:(BOOL)arg1 ;
-(void)_performDeferredLayout;
-(void)_setDisableTapGesture:(BOOL)arg1 ;
-(BOOL)_disableAnimations;
-(void)_setDisableAnimations:(BOOL)arg1 ;
-(BOOL)_disableTapGesture;
-(void)_setDisablePlayback:(BOOL)arg1 ;
-(void)_setAnimationOrigin:(long long)arg1 ;
-(BOOL)_usesDeferredLayout;
-(void)_setUsesDeferredLayout:(BOOL)arg1 ;
-(BOOL)_forceFlexibleWidth;
-(void)_setForceFlexibleWidth:(BOOL)arg1 ;
@end

