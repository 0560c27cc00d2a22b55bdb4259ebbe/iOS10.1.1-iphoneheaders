/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString;

@interface LoadMatchStatusOperation : ISOperation {

	NSNumber* _accountID;
	unsigned long long _matchStatus;
	NSString* _userAgent;

}

@property (copy) NSString * userAgent; 
@property (readonly) unsigned long long matchStatus; 
-(id)_newMatchStatusOperationWithURLBag:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(unsigned long long)matchStatus;
-(id)initWithAccountIdentifier:(id)arg1 ;
@end

