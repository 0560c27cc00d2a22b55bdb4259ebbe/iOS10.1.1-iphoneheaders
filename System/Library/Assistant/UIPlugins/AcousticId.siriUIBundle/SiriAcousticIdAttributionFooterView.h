/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/AcousticId.siriUIBundle/AcousticId
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AcousticId/AcousticId-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@protocol SiriAcousticIdAttributionFooterViewDelegate;
@class SAUIAppPunchOut, UIButton;

@interface SiriAcousticIdAttributionFooterView : SiriUIReusableFooterView {

	SAUIAppPunchOut* _attributionPunchOut;
	id<SiriAcousticIdAttributionFooterViewDelegate> _delegate;
	UIButton* _attributionButton;

}

@property (nonatomic,retain) UIButton * attributionButton;                                                 //@synthesize attributionButton=_attributionButton - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * attributionPunchOut;                                        //@synthesize attributionPunchOut=_attributionPunchOut - In the implementation block
@property (assign,nonatomic,__weak) id<SiriAcousticIdAttributionFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)defaultHeight;
-(void)_attributionButtonClicked:(id)arg1 ;
-(void)_updateAttributionButton:(id)arg1 withImage:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SiriAcousticIdAttributionFooterViewDelegate>)arg1 ;
-(id<SiriAcousticIdAttributionFooterViewDelegate>)delegate;
-(SAUIAppPunchOut *)attributionPunchOut;
-(void)setAttributionPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setAttributionButton:(UIButton *)arg1 ;
-(UIButton *)attributionButton;
@end

