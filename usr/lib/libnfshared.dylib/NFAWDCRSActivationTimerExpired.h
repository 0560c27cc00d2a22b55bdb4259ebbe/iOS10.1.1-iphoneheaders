/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class NSString;

@interface NFAWDCRSActivationTimerExpired : NSObject <NFAWDEventProtocol> {

	unsigned _version;
	unsigned _status;

}

@property (assign,nonatomic) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned status;                       //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

