/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface ErrorHandlerSession : NSObject {

	long long _sessionID;
	NSMutableDictionary* _sessionProperties;

}

@property (nonatomic,readonly) long long sessionIdentifier;               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSDictionary * sessionProperties;              //@synthesize sessionProperties=_sessionProperties - In the implementation block
-(NSDictionary *)sessionProperties;
-(void)setValue:(id)arg1 forSessionProperty:(id)arg2 ;
-(id)valueForSessionProperty:(id)arg1 ;
-(void)setSessionProperties:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)sessionIdentifier;
@end

