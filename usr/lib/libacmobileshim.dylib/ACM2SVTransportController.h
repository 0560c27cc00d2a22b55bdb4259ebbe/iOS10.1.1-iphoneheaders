/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACC2SVTransportControllerProtocol.h>

@protocol ACM2SVTransportControllerDelegate;
@class NSString;

@interface ACM2SVTransportController : NSObject <ACC2SVTransportControllerProtocol> {

	id<ACM2SVTransportControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<ACM2SVTransportControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<ACM2SVTransportControllerDelegate>)arg1 ;
-(id<ACM2SVTransportControllerDelegate>)delegate;
-(void)generateAndSendSecCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifySecureCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadTrustedDevicesWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelImageFetching;
@end

