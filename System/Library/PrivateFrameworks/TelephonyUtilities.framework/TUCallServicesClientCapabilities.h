/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TUCallServicesClientCapabilitiesActions;
@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding> {

	BOOL _wantsCallDisconnectionOnInvalidation;
	BOOL _wantsFrequencyChangeNotifications;
	id<TUCallServicesClientCapabilitiesActions> _delegate;

}

@property (assign,nonatomic,__weak) id<TUCallServicesClientCapabilitiesActions> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL wantsCallDisconnectionOnInvalidation;                                //@synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation - In the implementation block
@property (assign,nonatomic) BOOL wantsFrequencyChangeNotifications;                                   //@synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TUCallServicesClientCapabilitiesActions>)arg1 ;
-(id<TUCallServicesClientCapabilitiesActions>)delegate;
-(BOOL)wantsCallDisconnectionOnInvalidation;
-(void)setWantsCallDisconnectionOnInvalidation:(BOOL)arg1 ;
-(BOOL)wantsFrequencyChangeNotifications;
-(void)setWantsFrequencyChangeNotifications:(BOOL)arg1 ;
-(void)save;
@end

