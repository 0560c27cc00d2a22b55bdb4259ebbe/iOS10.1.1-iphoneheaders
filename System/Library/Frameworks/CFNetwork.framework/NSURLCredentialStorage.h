/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCredentialStorageInternal, NSDictionary;

@interface NSURLCredentialStorage : NSObject {

	NSURLCredentialStorageInternal* _internal;

}

@property (assign,nonatomic) BOOL _useSystemKeychain; 
@property (copy,readonly) NSDictionary * allCredentials; 
+(id)sharedCredentialStorage;
-(void)safari_setSynchronizableCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)_initWithCFURLCredentialStorage:(CFURLCredentialStorageRef)arg1 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(CFURLCredentialStorageRef)_CFURLCredentialStorage;
-(BOOL)_useSystemKeychain;
-(void)set_useSystemKeychain:(BOOL)arg1 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)defaultCredentialForProtectionSpace:(id)arg1 ;
-(NSDictionary *)allCredentials;
-(id)credentialsForProtectionSpace:(id)arg1 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 ;
@end
