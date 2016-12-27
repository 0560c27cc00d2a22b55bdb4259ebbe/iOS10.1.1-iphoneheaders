/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchConnectivity/WCMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WCMessageRequest : WCMessage <NSSecureCoding> {

	BOOL _expectsResponse;

}

@property (assign) BOOL expectsResponse;              //@synthesize expectsResponse=_expectsResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(BOOL)arg4 expectsResponse:(BOOL)arg5 ;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
@end

