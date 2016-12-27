/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.sbd/com.apple.sbd-Structs.h>
@interface EscrowService : NSObject
-(void)verifyCertificateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)listSMSTargetsWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)storeRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)recoverRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateRecordMetadataWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getCountrySMSCodesWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_certVersion:(SecCertificateRef)arg1 ;
-(id)_rootTrustedVersionsForRootType:(unsigned)arg1 inEnvironment:(id)arg2 ;
-(void)_saveBypassToken:(id)arg1 ;
-(void)_removeBypassToken;
-(id)_getBypassToken;
-(id)_certPublicKeySHA1Digest:(SecCertificateRef)arg1 ;
-(id)_rootBaseVersionsForRootType:(unsigned)arg1 inEnvironment:(id)arg2 ;
-(id)_rootCurrentVersionForRootType:(unsigned)arg1 inEnvironment:(id)arg2 ;
-(void)updateRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

