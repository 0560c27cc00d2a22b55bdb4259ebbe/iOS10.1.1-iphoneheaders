/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString;

@interface MachineDataProvisioningOperation : ISOperation {

	unsigned long long _accountID;
	BOOL _allowsBootstrapCellularData;
	BOOL _hidesServerDrivenDialogs;
	NSData* _inputData;
	long long _protocolVersion;
	NSString* _userAgent;

}

@property (assign) BOOL allowsBootstrapCellularData; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (assign) long long protocolVersion; 
@property (copy) NSString * userAgent; 
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(id)_newFinishProvisioningOperationWithData:(id)arg1 ;
-(BOOL)_finishProvisioningWithResponse:(id)arg1 sessionID:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)hidesServerDrivenDialogs;
-(id)initWithAccountIdentifier:(unsigned long long)arg1 provisioningData:(id)arg2 ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(void)dealloc;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
@end

