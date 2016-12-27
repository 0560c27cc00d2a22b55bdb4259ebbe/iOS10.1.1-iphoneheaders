/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentBalloonView.h>

@protocol CKGradientReferenceView;
@class CKGradientView, UIImageView, UIView;

@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView {

	CKGradientView* _gradientView;
	UIImageView* _backgroundView;
	UIImageView* _solidPartsView;
	char _gradientColor;
	char _solidColor;
	UIView*<CKGradientReferenceView> _gradientReferenceView;

}

@property (assign,nonatomic,__weak) UIView*<CKGradientReferenceView> gradientReferenceView;              //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
@property (assign,nonatomic) char gradientColor;                                                         //@synthesize gradientColor=_gradientColor - In the implementation block
@property (assign,nonatomic) char solidColor;                                                            //@synthesize solidColor=_solidColor - In the implementation block
+(id)_middleBubbleSquareImage;
+(id)_topBubbleSquareImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(void)setGradientColor:(char)arg1 ;
-(char)gradientColor;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)setSolidColor:(char)arg1 ;
-(char)solidColor;
-(void)configureForAggregateAcknowledgmentChatItem:(id)arg1 ;
@end

