/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>

@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;
@class NSObject, PKPaymentAuthorizationCoordinator, NSString;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<PKPaymentAuthorizationCoordinatorDelegate> _delegate;
	id<PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
	PKPaymentAuthorizationCoordinator* _controller;
	id<PKPaymentAuthorizationServiceProtocol> _serviceProxy;

}

@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationCoordinator * controller;                                           //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;                                   //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<PKPaymentAuthorizationCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPaymentAuthorizationCoordinatorDelegate>)delegate;
-(PKPaymentAuthorizationCoordinator *)controller;
-(void)setController:(PKPaymentAuthorizationCoordinator *)arg1 ;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)arg1 ;
-(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)privateDelegate;
-(id)initWithController:(id)arg1 ;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)setServiceProxy:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidPresent;
-(id<PKPaymentAuthorizationServiceProtocol>)serviceProxy;
@end
