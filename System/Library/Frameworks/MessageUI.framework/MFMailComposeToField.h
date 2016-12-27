/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFMailComposeRecipientView.h>

@protocol MFMailComposeToFieldDelegate;
@class MFComposeSMIMELockButton;

@interface MFMailComposeToField : MFMailComposeRecipientView {

	MFComposeSMIMELockButton* _smimeButton;
	BOOL _smimeButtonVisible;
	BOOL _smimeButtonEnabled;
	id<MFMailComposeToFieldDelegate> _toFieldDelegate;

}

@property (nonatomic,readonly) MFComposeSMIMELockButton * SMIMEButton; 
@property (assign,nonatomic) id<MFMailComposeToFieldDelegate> toFieldDelegate;              //@synthesize toFieldDelegate=_toFieldDelegate - In the implementation block
@property (assign,nonatomic) BOOL smimeButtonVisible;                                       //@synthesize smimeButtonVisible=_smimeButtonVisible - In the implementation block
@property (assign,nonatomic) BOOL smimeButtonEnabled;                                       //@synthesize smimeButtonEnabled=_smimeButtonEnabled - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setToFieldDelegate:(id<MFMailComposeToFieldDelegate>)arg1 ;
-(id<MFMailComposeToFieldDelegate>)toFieldDelegate;
-(void)setSmimeButtonEnabled:(BOOL)arg1 ;
-(void)setWantsEncryption:(BOOL)arg1 canEncrypt:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1 ;
-(BOOL)smimeButtonEnabled;
-(void)_tappedSMIMEButton:(id)arg1 ;
-(BOOL)smimeButtonVisible;
-(void)_setSMIMEButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSmimeButtonVisible:(BOOL)arg1 ;
-(MFComposeSMIMELockButton *)SMIMEButton;
@end

