/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LAContextExternalizationProt.h>
#import <libobjc.A.dylib/LAContextServerEvaluationProt.h>

@class NSMutableDictionary, NSDictionary, LACachedExternalizedContext;

@interface ContextPlugin : NSObject <LAContextExternalizationProt, LAContextServerEvaluationProt> {

	NSMutableDictionary* _internalOperationOptions;
	BOOL _contextOwner;
	NSDictionary* _resultInfo;
	LACachedExternalizedContext* _cachedExternalizedContext;

}

@property (nonatomic,readonly) BOOL contextOwner;                                                    //@synthesize contextOwner=_contextOwner - In the implementation block
@property (nonatomic,retain) NSDictionary * resultInfo;                                              //@synthesize resultInfo=_resultInfo - In the implementation block
@property (nonatomic,readonly) LACachedExternalizedContext * cachedExternalizedContext;              //@synthesize cachedExternalizedContext=_cachedExternalizedContext - In the implementation block
+(void)pluginWithExternalizedContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(id)externalizationObserver;
-(void)setExternalizationObserver:(id)arg1 ;
-(NSDictionary *)resultInfo;
-(void)setResultInfo:(NSDictionary *)arg1 ;
-(id)createInternalInfo:(id)arg1 skipCallerIdentification:(BOOL)arg2 callerBundleId:(id)arg3 originator:(id)arg4 ;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 type:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetWithOriginator:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithContextOwner:(BOOL)arg1 ;
-(id)createInternalInfoWithPolicy:(long long)arg1 policyOptions:(id)arg2 originator:(id)arg3 ;
-(void)performOp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)contextOwner;
-(LACachedExternalizedContext *)cachedExternalizedContext;
-(id)externalizedContext;
@end

