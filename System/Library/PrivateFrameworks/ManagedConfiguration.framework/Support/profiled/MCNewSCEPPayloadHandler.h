/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/profiled-Structs.h>
#import <profiled/MCNewCertificatePayloadHandler.h>

@interface MCNewSCEPPayloadHandler : MCNewCertificatePayloadHandler {

	SecIdentityRef _identity;

}
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(SecIdentityRef)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id*)arg2 ;
-(id)userInputFields;
-(void)_addQueryToQueryString:(id)arg1 withKey:(id)arg2 value:(id)arg3 ;
-(id)_SCEPOperationURLWithBaseURLString:(id)arg1 operation:(id)arg2 message:(id)arg3 ;
-(id)_synchronousTransactionWithURL:(id)arg1 method:(id)arg2 content:(id)arg3 contentType:(id)arg4 outResponseCode:(long long*)arg5 outContentType:(id*)arg6 outError:(id*)arg7 ;
-(BOOL)_createKeyPairLength:(unsigned long long)arg1 outPublicKey:(_SecKey*)arg2 outPrivateKey:(_SecKey*)arg3 ;
-(id)_invalidRAResponse;
-(id)_performPKIOperation:(id)arg1 withPayload:(id)arg2 usingPost:(BOOL)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

