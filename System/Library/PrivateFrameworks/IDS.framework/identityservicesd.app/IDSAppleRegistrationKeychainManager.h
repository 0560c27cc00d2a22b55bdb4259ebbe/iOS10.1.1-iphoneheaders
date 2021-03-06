/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, IMTimer, NSRecursiveLock, NSArray;

@interface IDSAppleRegistrationKeychainManager : NSObject {

	NSMutableDictionary* _smsSignatures;
	NSMutableDictionary* _authenticationCerts;
	NSMutableArray* _registrationData;
	IMTimer* _purgeTimer;
	NSRecursiveLock* _lock;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;
	BOOL _loaded;

}

@property (nonatomic,copy,readonly) NSArray * registrations; 
+(id)sharedInstance;
+(id)keychainServiceForVersion:(unsigned long long)arg1 ;
+(id)keychainAccountForVersion:(unsigned long long)arg1 ;
+(id)keychainAccessGroupForVersion:(unsigned long long)arg1 ;
-(id)registrationWithServiceType:(id)arg1 registrationType:(long long)arg2 value:(id)arg3 ;
-(id)smsSignatureAndMainID:(id*)arg1 ;
-(BOOL)removeAllRegistrations;
-(void)_loadIfNeeded;
-(void)reloadFromKeychain;
-(BOOL)__saveToKeychain;
-(BOOL)_saveToKeychain;
-(void)_reloadFromDictionary:(id)arg1 ;
-(BOOL)addRegistration:(id)arg1 ;
-(BOOL)removeRegistration:(id)arg1 ;
-(id)authenticationCertForID:(id)arg1 ;
-(void)setAuthenticationCert:(id)arg1 forID:(id)arg2 ;
-(void)setSMSSignature:(id)arg1 mainID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_setPurgeTimer;
-(void)_flush;
-(void)systemDidFinishMigration;
-(BOOL)saveToKeychain;
-(NSArray *)registrations;
@end

