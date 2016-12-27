/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModulePlugins/ModuleACM.bundle/ModuleACM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModuleACM/ModuleACM-Structs.h>
#import <ModuleBase/ContextPlugin.h>

@class NSData, NSDictionary, NSString;

@interface ContextPluginACM : ContextPlugin {

	BOOL _applicationPasswordWasSet;
	long long _applicationPasswordCounter;
	unsigned _userId;
	SCD_Struct_Co0* _userIdParam;
	NSData* _ctkPin;
	NSDictionary* _ctkCallerOptions;
	int _ctkCallerProcessId;
	NSString* _ctkCallerName;
	NSString* _ctkCallerBundleId;
	ACMHandleRef _acmContext;

}

@property (nonatomic,readonly) ACMHandleRef acmContext;              //@synthesize acmContext=_acmContext - In the implementation block
-(id)_fillConstraint:(id)arg1 options:(id)arg2 userId:(id)arg3 error:(id*)arg4 ;
-(void)_removeRequestedCredentials:(ACMRequirementRef)arg1 ;
-(id)_decodeOperation:(id)arg1 ;
-(id)initWithACMContext:(ACMHandleRef)arg1 contextOwner:(BOOL)arg2 ;
-(BOOL)_isSimpleACLConstraint:(id)arg1 ;
-(SCD_Struct_Co0*)_acmParamForPolicy:(long long)arg1 userId:(unsigned)arg2 secondPass:(BOOL)arg3 paramCount:(unsigned*)arg4 ;
-(BOOL)_isBiometricOnlyPolicy:(long long)arg1 ;
-(char*)_acmPolicyForPolicy:(long long)arg1 ;
-(void)_handleAcmRequirement:(const ACMRequirementRef)arg1 policy:(long long)arg2 constraintData:(id)arg3 internalInfo:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)finishedAuthenticationForPolicy:(long long)arg1 constraintData:(id)arg2 internalInfo:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 availabilityEvents:(id)arg6 result:(id)arg7 error:(id)arg8 reply:(/*^block*/id)arg9 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 callerName:(id)arg6 callerBundleId:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)_handleCTKACL:(id)arg1 tokenId:(id)arg2 operation:(id)arg3 options:(id)arg4 originator:(id)arg5 callerName:(id)arg6 callerBundleId:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)_validateACL:(id)arg1 evaluateOperation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 callerName:(id)arg6 callerBundleId:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)_evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 callerName:(id)arg6 callerBundleId:(id)arg7 reply:(/*^block*/id)arg8 ;
-(BOOL)_validatePassword:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 callerName:(id)arg5 callerBundleId:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)_evaluateOperation:(id)arg1 aclRef:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 validate:(BOOL)arg6 callerName:(id)arg7 callerBundleId:(id)arg8 reply:(/*^block*/id)arg9 ;
-(void)_validateOperations:(id)arg1 aclRef:(id)arg2 evaluateOperation:(id)arg3 options:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 currentResult:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)_validateOperation:(id)arg1 aclRef:(id)arg2 evaluateOperation:(id)arg3 options:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)dealloc;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(ACMHandleRef)acmContext;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 type:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetWithOriginator:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

