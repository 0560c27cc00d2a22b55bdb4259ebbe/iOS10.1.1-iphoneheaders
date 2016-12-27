/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class SKUIClientContext, CNContactPickerViewController, SKUIItem, UIViewController, NSString;

@interface SKUITonePurchaseController : NSObject <CNContactPickerDelegate> {

	SKUIClientContext* _clientContext;
	CNContactPickerViewController* _contactPickerController;
	/*^block*/id _completionBlock;
	SKUIItem* _item;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithItem:(id)arg1 ;
-(void)showPurchaseFlowWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_finishWithTonePurchase:(id)arg1 ;
-(void)_showContactPicker;
-(void)_presentViewController:(id)arg1 ;
-(void)_dismissContactPicker;
-(void)_finishContactPicker:(id)arg1 withContact:(id)arg2 ;
@end

