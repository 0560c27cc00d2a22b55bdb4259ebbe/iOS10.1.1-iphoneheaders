/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/ADPrivacyRemoteViewControllerDelegate.h>

@protocol ADPrivacyViewControllerDelegate, ADPrivacyViewControllerInternalDelegate;
@class ADPrivacyRemoteViewController, _UIAsyncInvocation, NSString, NSDictionary;

@interface ADPrivacyViewController : UIViewController <ADPrivacyRemoteViewControllerDelegate> {

	id<ADPrivacyViewControllerDelegate> _delegate;
	id<ADPrivacyViewControllerInternalDelegate> _internalDelegate;
	ADPrivacyRemoteViewController* _remoteViewController;
	_UIAsyncInvocation* _remoteRequest;
	NSString* _transparencyDetails;
	NSDictionary* _transparencyDetailsDictionary;

}

@property (nonatomic,readonly) id<ADSPrivacyViewController_RPC><NSObject> servicePrivacyViewController; 
@property (nonatomic,retain) ADPrivacyRemoteViewController * remoteViewController;                                   //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * remoteRequest;                                                     //@synthesize remoteRequest=_remoteRequest - In the implementation block
@property (nonatomic,copy) NSString * transparencyDetails;                                                           //@synthesize transparencyDetails=_transparencyDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * transparencyDetailsDictionary;                                           //@synthesize transparencyDetailsDictionary=_transparencyDetailsDictionary - In the implementation block
@property (assign,nonatomic,__weak) id<ADPrivacyViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<ADPrivacyViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ADPrivacyViewControllerDelegate>)delegate;
-(void)loadView;
-(void)_commonInit;
-(ADPrivacyRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(ADPrivacyRemoteViewController *)arg1 ;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(void)_addRemoteView;
-(void)_resetRemoteViewController;
-(void)_forwardErrorToDelegate:(id)arg1 ;
-(NSString *)transparencyDetails;
-(void)_clientApplicationDidEnterBackground;
-(id)initWithTransparencyDetailsDictionary:(id)arg1 ;
-(void)adPrivacyRemoteViewControllerDidTerminateWithError:(id)arg1 ;
-(void)adPrivacyRemoteViewControllerClientRequestsDismisal;
-(void)remoteViewControllerDidLoad;
-(void)adPrivacyRemoteViewControllerDidAppear;
-(void)adPrivacyRemoteViewControllerDidRenderTransparency;
-(void)adPrivacyRemoteViewControllerDidLinkOut;
-(void)setTransparencyDetails:(NSString *)arg1 ;
-(void)setTransparencyDetailsDictionary:(NSDictionary *)arg1 ;
-(void)_requestPrivacyRemoteViewController;
-(void)_connectionWithAdSheetWasLost;
-(void)_dismissAndReset;
-(id<ADSPrivacyViewController_RPC><NSObject>)servicePrivacyViewController;
-(void)setRemoteRequest:(_UIAsyncInvocation *)arg1 ;
-(void)_dismissPrivacyViewController;
-(NSDictionary *)transparencyDetailsDictionary;
-(id)initWithTransparencyDetails:(id)arg1 ;
-(_UIAsyncInvocation *)remoteRequest;
@end

