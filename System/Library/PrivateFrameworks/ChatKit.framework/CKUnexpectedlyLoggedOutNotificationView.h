/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CKTwoButtonInlineNotificationViewDelegate.h>

@protocol CKUnexpectedlyLoggedOutNotificationViewDelegate;
@class CKTwoButtonInlineNotificationView, NSString;

@interface CKUnexpectedlyLoggedOutNotificationView : UIView <CKTwoButtonInlineNotificationViewDelegate> {

	id<CKUnexpectedlyLoggedOutNotificationViewDelegate> _delegate;
	CKTwoButtonInlineNotificationView* _inlineNotificationView;

}

@property (nonatomic,retain) CKTwoButtonInlineNotificationView * inlineNotificationView;                       //@synthesize inlineNotificationView=_inlineNotificationView - In the implementation block
@property (assign,nonatomic,__weak) id<CKUnexpectedlyLoggedOutNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<CKUnexpectedlyLoggedOutNotificationViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CKUnexpectedlyLoggedOutNotificationViewDelegate>)delegate;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)inlineNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2 ;
-(CKTwoButtonInlineNotificationView *)inlineNotificationView;
-(void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg1 ;
-(void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg1 ;
-(void)setInlineNotificationView:(CKTwoButtonInlineNotificationView *)arg1 ;
@end

