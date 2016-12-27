/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKTokenSession.h>

@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession {

	TKSmartCard* _smartCard;
	BOOL _hasSession;
	TKSmartCard* _errorCard;

}

@property (readonly) TKSmartCard * smartCard; 
-(TKSmartCard *)smartCard;
-(BOOL)beginRequest:(long long)arg1 error:(id*)arg2 ;
-(void)endRequest;
-(id)initWithToken:(id)arg1 ;
@end

