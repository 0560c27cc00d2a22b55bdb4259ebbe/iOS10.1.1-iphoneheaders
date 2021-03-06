/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/ICQPageDelegate.h>

@protocol ICQPageDelegate;
@class _ICQPageSpecification, NSString;

@interface ICQViewController : UIViewController <ICQPageDelegate> {

	_ICQPageSpecification* _pageSpecification;
	id<ICQPageDelegate> _delegate;

}

@property (nonatomic,readonly) _ICQPageSpecification * pageSpecification;              //@synthesize pageSpecification=_pageSpecification - In the implementation block
@property (assign,nonatomic,__weak) id<ICQPageDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsPageClassIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<ICQPageDelegate>)arg1 ;
-(id<ICQPageDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithPageSpecification:(id)arg1 ;
-(_ICQPageSpecification *)pageSpecification;
-(double)senderGetTopMargin:(id)arg1 ;
-(void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3 ;
@end

