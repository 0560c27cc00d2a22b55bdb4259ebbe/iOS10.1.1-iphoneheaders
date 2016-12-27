/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <libobjc.A.dylib/CKBalloonTextViewInteractionDelegate.h>

@class CKBalloonTextView, NSAttributedString, NSString;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate> {

	BOOL _centerTextWhenSkinny;
	CKBalloonTextView* _textView;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) CKBalloonTextView * textView;                        //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                   //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) BOOL centerTextWhenSkinny;                           //@synthesize centerTextWhenSkinny=_centerTextWhenSkinny - In the implementation block
@property (nonatomic,readonly) BOOL modifiesSingleLineBalloonLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)prepareForReuse;
-(void)setTextView:(CKBalloonTextView *)arg1 ;
-(void)prepareForDisplay;
-(CKBalloonTextView *)textView;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(BOOL)modifiesSingleLineBalloonLayout;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)updateRasterizationForInvisibleInkEffect;
-(void)configureForComposition:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setCenterTextWhenSkinny:(BOOL)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1 ;
-(double)textViewWidthForWidth:(double)arg1 ;
-(BOOL)centerTextWhenSkinny;
@end

