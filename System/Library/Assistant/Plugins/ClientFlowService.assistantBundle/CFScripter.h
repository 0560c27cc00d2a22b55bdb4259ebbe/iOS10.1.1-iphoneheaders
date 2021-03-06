/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CFScripterProtocol.h>

@class NSXPCConnection, NSCache, JSVirtualMachine;

@interface CFScripter : NSObject <CFScripterProtocol> {

	NSXPCConnection* _connection;
	NSCache* _jsContextDecoratorCache;
	JSVirtualMachine* _jsVirtualMachine;

}

@property (nonatomic,retain) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSCache * jsContextDecoratorCache;                //@synthesize jsContextDecoratorCache=_jsContextDecoratorCache - In the implementation block
@property (nonatomic,retain) JSVirtualMachine * jsVirtualMachine;              //@synthesize jsVirtualMachine=_jsVirtualMachine - In the implementation block
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)performFlowExecutionForCommand:(id)arg1 usingCachedJSContext:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)performProviderExecutionForCommand:(id)arg1 usingCachedJSContext:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)performWarmupAndEvaluateScriptWithScript:(id)arg1 scriptHint:(id)arg2 usingCachedJSContext:(BOOL)arg3 ;
-(void)performWarmup;
-(id)contextDecoratorForScriptDomain:(id)arg1 script:(id)arg2 usingCachedJSContext:(BOOL)arg3 cacheJSContext:(BOOL)arg4 ;
-(id)domainForCommand:(id)arg1 ;
-(void)evaluateScriptsInCommmand:(id)arg1 jsContextDecorator:(id)arg2 ;
-(void)executeCommand:(id)arg1 jsContextDecorator:(id)arg2 ;
-(void)fetchScriptsForCommand:(id)arg1 scripterMetrics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)scriptIdentifiersToFetchForCommand:(id)arg1 ;
-(BOOL)updateFetchedScriptsInCommand:(id)arg1 requestedScriptIdentifiers:(id)arg2 fetchedScripts:(id)arg3 ;
-(void)performCommandExecutionForCommand:(id)arg1 usingCachedJSContext:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSCache *)jsContextDecoratorCache;
-(void)setJsContextDecoratorCache:(NSCache *)arg1 ;
-(JSVirtualMachine *)jsVirtualMachine;
-(void)setJsVirtualMachine:(JSVirtualMachine *)arg1 ;
@end

