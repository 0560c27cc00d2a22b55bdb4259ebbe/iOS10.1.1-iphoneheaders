/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFMailDropMailParser : NSObject
+(id)parseExpiration:(double)arg1 ;
+(void)parseURL:(id)arg1 intoMetadata:(id)arg2 ;
+(BOOL)_domainIsWhitelisted:(id)arg1 ;
+(void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2 ;
+(void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2 ;
+(id)_parseURLQuery:(id)arg1 ;
+(id)parseHeaderValue:(id)arg1 forField:(id)arg2 ;
@end

