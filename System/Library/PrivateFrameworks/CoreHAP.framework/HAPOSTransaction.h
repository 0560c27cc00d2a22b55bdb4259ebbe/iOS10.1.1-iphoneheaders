/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject;

@interface HAPOSTransaction : NSObject {

	NSObject*<OS_os_transaction> _HAPOSTransaction;
	double _creationTime;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> HAPOSTransaction;              //@synthesize HAPOSTransaction=_HAPOSTransaction - In the implementation block
@property (assign,nonatomic) double creationTime;                                        //@synthesize creationTime=_creationTime - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(double)creationTime;
-(NSObject*<OS_os_transaction>)HAPOSTransaction;
-(void)setHAPOSTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setCreationTime:(double)arg1 ;
@end

