/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSNumber, NSArray, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {

	NSString* _accountName;
	BOOL _accountNameEditable;
	long long _accountScope;
	BOOL _allowsBioAuthentication;
	BOOL _allowsBootstrapCellularData;
	BOOL _allowsRetry;
	NSString* _altDSID;
	BOOL _canCreateNewAccount;
	BOOL _canSetActiveAccount;
	NSString* _clientIdentifierHeader;
	BOOL _demoAccount;
	BOOL _displaysOnLockScreen;
	NSDictionary* _httpHeaders;
	NSString* _initialPassword;
	BOOL _persistsAcrossDeviceLock;
	BOOL _persistsPasswordFallback;
	NSString* _preferredITunesStoreClient;
	long long _promptStyle;
	NSString* _reasonDescription;
	NSDictionary* _requestParameters;
	NSNumber* _requiredUniqueIdentifier;
	BOOL _shouldCreateNewSession;
	BOOL _shouldFollowAccountButtons;
	BOOL _shouldIgnoreProtocol;
	BOOL _shouldSuppressDialogs;
	NSDictionary* _signupRequestParameters;
	long long _tokenType;
	NSArray* _userAgentComponents;

}

@property (nonatomic,readonly) BOOL allowsBioAuthentication;                                       //@synthesize allowsBioAuthentication=_allowsBioAuthentication - In the implementation block
@property (nonatomic,readonly) BOOL allowsBootstrapCellularData;                                   //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifierHeader;                             //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (nonatomic,readonly) BOOL displaysOnLockScreen;                                          //@synthesize displaysOnLockScreen=_displaysOnLockScreen - In the implementation block
@property (getter=isDemoAccount,nonatomic,readonly) BOOL demoAccount;                              //@synthesize demoAccount=_demoAccount - In the implementation block
@property (nonatomic,readonly) BOOL persistsAcrossDeviceLock;                                      //@synthesize persistsAcrossDeviceLock=_persistsAcrossDeviceLock - In the implementation block
@property (nonatomic,copy,readonly) NSString * reasonDescription;                                  //@synthesize reasonDescription=_reasonDescription - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreProtocol;                                          //@synthesize shouldIgnoreProtocol=_shouldIgnoreProtocol - In the implementation block
@property (nonatomic,readonly) long long tokenType;                                                //@synthesize tokenType=_tokenType - In the implementation block
@property (nonatomic,readonly) SSURLBagContext * URLBagContext; 
@property (nonatomic,copy,readonly) NSString * accountName;                                        //@synthesize accountName=_accountName - In the implementation block
@property (readonly) long long accountScope;                                                       //@synthesize accountScope=_accountScope - In the implementation block
@property (getter=isAccountNameEditable,nonatomic,readonly) BOOL accountNameEditable;              //@synthesize accountNameEditable=_accountNameEditable - In the implementation block
@property (nonatomic,readonly) BOOL allowsRetry;                                                   //@synthesize allowsRetry=_allowsRetry - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                                            //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) BOOL canCreateNewAccount;                                           //@synthesize canCreateNewAccount=_canCreateNewAccount - In the implementation block
@property (nonatomic,readonly) BOOL canSetActiveAccount;                                           //@synthesize canSetActiveAccount=_canSetActiveAccount - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * HTTPHeaders;                                    //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialPassword;                                    //@synthesize initialPassword=_initialPassword - In the implementation block
@property (nonatomic,readonly) BOOL persistsPasswordFallback;                                      //@synthesize persistsPasswordFallback=_persistsPasswordFallback - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredITunesStoreClient;                         //@synthesize preferredITunesStoreClient=_preferredITunesStoreClient - In the implementation block
@property (nonatomic,readonly) long long promptStyle;                                              //@synthesize promptStyle=_promptStyle - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requestParameters;                              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * requiredUniqueIdentifier;                         //@synthesize requiredUniqueIdentifier=_requiredUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldCreateNewSession;                                        //@synthesize shouldCreateNewSession=_shouldCreateNewSession - In the implementation block
@property (nonatomic,readonly) BOOL shouldFollowAccountButtons;                                    //@synthesize shouldFollowAccountButtons=_shouldFollowAccountButtons - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressDialogs;                                         //@synthesize shouldSuppressDialogs=_shouldSuppressDialogs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * signupRequestParameters;                        //@synthesize signupRequestParameters=_signupRequestParameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userAgentComponents;                                 //@synthesize userAgentComponents=_userAgentComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextForSignIn;
-(BOOL)displaysOnLockScreen;
-(BOOL)isDemoAccount;
-(BOOL)_allowCreateAccount;
-(id)_initSSAuthenticationContext;
-(BOOL)allowsBootstrapCellularData;
-(void)_copyIvarsToCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(BOOL)isAccountNameEditable;
-(BOOL)allowsBioAuthentication;
-(BOOL)allowsRetry;
-(BOOL)canCreateNewAccount;
-(BOOL)canSetActiveAccount;
-(NSString *)clientIdentifierHeader;
-(NSString *)initialPassword;
-(BOOL)persistsAcrossDeviceLock;
-(BOOL)persistsPasswordFallback;
-(NSString *)preferredITunesStoreClient;
-(BOOL)shouldCreateNewSession;
-(BOOL)shouldFollowAccountButtons;
-(BOOL)shouldIgnoreProtocol;
-(BOOL)shouldSuppressDialogs;
-(NSDictionary *)signupRequestParameters;
-(NSArray *)userAgentComponents;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)reasonDescription;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSDictionary *)requestParameters;
-(NSDictionary *)HTTPHeaders;
-(long long)accountScope;
-(id)initWithAccount:(id)arg1 ;
-(NSString *)accountName;
-(long long)tokenType;
-(NSNumber *)requiredUniqueIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(long long)promptStyle;
-(NSString *)altDSID;
@end

