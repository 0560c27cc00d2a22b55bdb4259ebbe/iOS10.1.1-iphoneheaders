/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/MRDeviceInfoObserving.h>

@protocol MRDTelevisionServerNetworkServiceDelegate;
@class NSNetService, MRDeviceInfoObserver, NSString;

@interface MRDTelevisionServerNetworkService : NSObject <NSNetServiceDelegate, MRDeviceInfoObserving> {

	NSNetService* _networkService;
	MRDeviceInfoObserver* _deviceInfoObserver;
	BOOL _started;
	id<MRDTelevisionServerNetworkServiceDelegate> _delegate;

}

@property (assign,nonatomic) id<MRDTelevisionServerNetworkServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_netServiceTXTRecordDataWithDeviceInfo:(id)arg1 ;
-(void)_initializeBonjourServiceWithDeviceInfo:(id)arg1 withDelay:(double)arg2 ;
-(id)init;
-(void)setDelegate:(id<MRDTelevisionServerNetworkServiceDelegate>)arg1 ;
-(void)dealloc;
-(id<MRDTelevisionServerNetworkServiceDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)observer:(id)arg1 didObserveNewDeviceInfo:(id)arg2 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
@end

