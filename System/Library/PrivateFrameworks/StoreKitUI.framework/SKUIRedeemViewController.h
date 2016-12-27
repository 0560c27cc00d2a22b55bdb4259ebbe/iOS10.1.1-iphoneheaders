/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UINavigationController.h>

@class SKUIClientContext, NSString, NSOperationQueue, SKUIRedeemPreflightOperation, SKUIRedeemConfiguration, SKUIRedeemStepViewController;

@interface SKUIRedeemViewController : UINavigationController {

	BOOL _attempsAutomaticRedeem;
	char _cameraRedeemEnabled;
	long long _category;
	SKUIClientContext* _clientContext;
	NSString* _initialCode;
	NSOperationQueue* _operationQueue;
	SKUIRedeemPreflightOperation* _preflightOperation;
	SKUIRedeemConfiguration* _redeemConfiguration;
	SKUIRedeemStepViewController* _rootViewController;
	long long _initialBarStyle;

}

@property (nonatomic,readonly) long long category;                           //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL attempsAutomaticRedeem;                    //@synthesize attempsAutomaticRedeem=_attempsAutomaticRedeem - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                           //@synthesize initialCode=_initialCode - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(long long)category;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_cancelButtonAction:(id)arg1 ;
-(NSString *)initialCode;
-(BOOL)attempsAutomaticRedeem;
-(void)_finishPreflightWithResult:(id)arg1 ;
-(id)_newRootViewController;
-(void)_loadRootViewController;
-(void)_attemptAutomaticRedeemWithMetadata:(id)arg1 ;
-(void)_showRootViewController;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)redeemAgainAnimated:(BOOL)arg1 ;
-(void)setAttempsAutomaticRedeem:(BOOL)arg1 ;
@end

